#include <stdio.h>

char board[3][3]; // Global 3x3 board

void initBoard();
void printBoard();
int checkWin();
int isFull();

int main() {
    int row, col, player = 1, status = 0;

    initBoard();

    while (status == 0) {
        printBoard();

        printf("Player %d, enter row and column (0,1,2): ", player);
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 2 || col < 0 || col > 2) {
            printf("Invalid move. Try again.\n");
            continue;
        }

        if (board[row][col] != ' ') {
            printf("Spot already taken! Try again.\n");
            continue;
        }

        board[row][col] = (player == 1) ? 'X' : 'O';

        if (checkWin()) {
            printBoard();
            printf("🎉 Player %d WINS! 🎉\n", player);
            status = 1;
        } else if (isFull()) {
            printBoard();
            printf("😐 It's a draw!\n");
            break;
        }

        player = (player == 1) ? 2 : 1; // Switch player
    }

    return 0;
}

/* Initialize board with empty spaces */
void initBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

/* Print the board */
void printBoard() {
    printf("\n");
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

/* Check if any player has won */
int checkWin() {
    // Rows
    for (int i = 0; i < 3; i++)
        if (board[i][0] != ' ' && 
            board[i][0] == board[i][1] && 
            board[i][1] == board[i][2])
            return 1;

    // Columns
    for (int i = 0; i < 3; i++)
        if (board[0][i] != ' ' && 
            board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
            return 1;

    // Diagonals
    if (board[0][0] != ' ' && 
        board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
        return 1;

    if (board[0][2] != ' ' &&
        board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
        return 1;

    return 0;
}

/* Check if board is full */
int isFull() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return 0;
    return 1;
}