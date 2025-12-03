// #include<stdio.h>

// int main(){
//     int c = 1;
//     while (c<=100){
//     printf("\t%d", c);
//     c++;
//     }

//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int num, count = 0;
//     printf("enter a number:");
//     scanf("%d", &num);
//     while(num > 0){
//         num = num/10;
//         count++;
//     }
//     printf("number of digits: %d\n", count);
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     float r, area;

//     printf("enter radius:");
//     scanf("%f", &r);

//      area = 3.14*r*r;

//      printf("area of circle is %f", area);

//     return 0;
// }

// #include<stdio.h>

// int main(){

//     float r, h, volume;

//     printf("enter r:");
//     scanf("%f", &r);

//     printf("enter h:");
//     scanf("%f", &h);

//     volume = 3.14*r*r*h;

//     printf("volume of cylinder is %f", volume);

//     return 0;
// }

// question--celcius to fahrenheit

// #include<stdio.h>

// int main(){

//     float c = 37.0, f;

//     f = ((9.0/5.0)*c)+32;

//     printf("the value of fahrenheit is %f", f);

//     return 0;
// }

// calculate simple interest for a set of values representing principal, no, of years and rate of interest

 #include <stdio.h>

// int main()
// {

//     float p = 34.1, r = 8.0, t = 5.0;

//     printf("the value of simple interest is %f", (p * r * t / 100));

//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, a , b, c, d;
//     for(n = 100; n<=999; n++){
//     a = n%10;
//     d = n%10;
//     b = n%10;
//     c = n%10;

//     if(a*a*a + b*b*b + c*c*c==n)
//     printf("\n %d", n);
//     }
//     return 0;
// }

// write a program to find 1st 20 members of fibonacci series....
// 1 1 2 3 5 8 13....9
// wap to find 4 digit perfect square that it is 1st two and last two digits are perfect square 

// nested for loop....

// #include<stdio.h>

// int main(){
//     int i, j;
//     for(i=1; i<5; i++)
//     {
//         for(j=1; j<=i; j++)
//         printf("%d", j);
//         printf("\n");
//     }
    
    
//     return 0;
// }

// #include<stdio.h>

// int main(){
//    int i, j;
//    for(i=1; i<5; i++)
//    {
//     for(j=1; j<=i;j++)
//     printf("%d", i);
//     printf("\n");
//    }

//     return 0;
// }


// #include<stdio.h>

// int main(){
//    int i, j, k, n;
//    printf("enter a number:");
//    scanf("%d", &n);
//    for(i=1; i<=n; i++)
//    {
//     for(k=1; k<=15-i; k++)
//     printf(" ");
//     for(j=1; j<=i; j++)
//     printf(" %d", i);
//     printf("\n");
//    }
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i, j;
//     int n = 5;

//     for(i = 1; i <= n; i++) {
//         int num = 9;

//         for(j = 1; j <= i; j++) {
//             printf("%d ", num);
//             num--; 
//         }

//         printf("\n"); 
//     }
    
//     return 0;
// }

// Array--It is of two types...one dimensional array and multidimensional array

// #include<stdio.h>

// int main(){

//     int i, max, a[10] = {1, 2, 3, 4, 5, 6, 8, 9,20,7};
//     max = a[0];
//     for(i = 1; i<10; i++)
//     {
//         if(a[i]>max)
//         max = a[i];

//     }
//     printf("maximum = %d", max);

//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int i, min, a[10];
//     printf("enter 10 number:");
//     for(i=0; i<10; i++)
//     scanf("%d", &a[i]);
//     min = a[0];
//     for(i = 1; i<10; i++)
    
//         if(a[i]<min)
//         min = a[i];
//     }
//     printf("min = %d", min);
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int i;
//     for(i = 0; i<10; i++)
//     printf("%d", i);
//     return 0;

// }

//  wap to print the list of 10 numbers in ascending order

// #include <stdio.h>

// int main() {
//     int numbers[10], i, j, temp;

    
//     printf("Enter 10 numbers:\n");
//     for(i = 0; i < 10; i++) {
//         scanf("%d", &numbers[i]);
//     }

    
//     for(i = 0; i < 10; i++) {
//         for(j = i + 1; j < 10; j++) {
//             if(numbers[i] > numbers[j]) {
//                 temp = numbers[i];
//                 numbers[i] = numbers[j];
//                 numbers[j] = temp;
//             }
//         }
//     }

    
//     printf("\nNumbers in ascending order:\n");
//     for(i = 0; i < 10; i++) {
//         printf("%d ", numbers[i]);
//     }

//     return 0;
// }

// array---data structure, homogeneoous data typee, continuous/contiguous memory location
// #include <stdio.h>

// int main() {

//     int score[4] = {85, 90, 92, 82};  
//     int sum = 0;
//     int i = 0;

//     for (i = 0; i < 4; i++) {
//         sum += score[i];  
//     }

//     printf("Sum of scores: %d\n", sum);

//     score[1] = 95;  
//     printf("New score at index 1: %d\n", score[1]);

//     return 0;
// }

// #include<stdio.h>

// int main(){


//     char n[20];
//     printf("enter your name:");
//     scanf("%s", &n);
//     printf("your name is %s", n);
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     char n[20];
//     printf("enter your name:");
//     fgets(n, sizeof(n), stdin);
//     puts(n);
//     return 0;
// }

// write a program to convert a lowercase string to uppercase...

// #include <stdio.h>

// int main() {
//     char str[100];
//     int i;

//     printf("Enter a lowercase string: ");
//     gets(str); 

//     for(i = 0; str[i] != '\0'; i++) {
//         if(str[i] >= 'a' && str[i] <= 'z') {
//             str[i] = str[i] - 32; 
//         }
//     }

//     printf("Uppercase string: %s\n", str);

//     return 0;
// }

// write a program to convert total number of vowels and words in a string

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main() {
//     char str[200];
//     int vowels = 0, words = 0;
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     for (int i = 0; str[i] != '\0'; i++) {
//         char ch = tolower(str[i]);  
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             vowels++;
//         }
//     }
//     for (int i = 0; str[i] != '\0'; i++) {
//         if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') &&
//             (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\n' && str[i - 1] != '\t')) {
//             words++;
//         }
//     }
//     if (strlen(str) > 1) {
//         words++;
//     }
//     printf("\nTotal number of vowels: %d", vowels);
//     printf("\nTotal number of words: %d\n", words);
//     return 0;
// }

// FUNCTIONS--TWO TYPES OF FUNCTION---USER DEFINED FUNCTION AND LIBRARAY FUNCTION
// USER DEFINED FUNCTION ARE DEFINED BY USER

// #include<stdio.h>

// int sum(int x, int y){
//     int t;
//     t = x + y;
//     return t;
// }
// #include<stdio.h>
// int main(){
// int a,b,c;
// int sum (int , int);
// printf("enter two numbers:");
// scanf("%d %d", &a, &b);
// c = sum(a,b);
// printf("%d", c);  
//     return 0;
// }







// #include <stdio.h>


// int fact(int n) {
//     int i, f = 1;
//     for(i = 1; i <= n; i++)
//         f *= i;
//     return f;
// }


// int power(int x, int y) {
//     int i, p = 1;
//     for(i = 1; i <= y; i++)
//         p *= x;
//     return p;
// }


// int main() {
//     int i, x, n;
//     float sum = 0.0;
//     int p, q;

//     printf("Enter value of x & n: ");
//     scanf("%d %d", &x, &n);

//     for(i = 1; i <= n; i++) {
//         q = fact(i);
//         p = power(x, i);
//         sum = sum + (float)p / q;
//     }

//     printf("Sum = %f\n", sum);
//     return 0;
// }



// Pointers
// #include<stdio.h>

// int main(){

//     int i = 2;
//     printf("%d %d %d", i, &i, *(&i));
//     return 0;
// }

// Pointer Variable----can store only address
// #include<stdio.h>

// int main(){

//     int i = 2 , *x;
//     x = &i;
//      printf("%d\t %d\t %d", i , *x, *(&i));

//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int a = 10, b = 20;
//     int swap(int, int);
//     swap(a, b);
//     printf("%d %d", a, b);
// }
// swap (int x, int y)
// {
//     int z;
//     z = x;
//     x = y;
//     y = z;
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int a = 10, b = 20;
//     int swap(int *x, int *y);
//     swap(&a, &b);
//     printf("%d %d", a, b);
// }
// swap (int *x, int *y)
// {
//     int z;
//     z = *x;
//     *x = *y;
//     *y = z;
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int i;
//     for(i=1; i<10; i++){
//          if (i%2==0)
//        break;
//        i++;
//        printf("%d\n", i);
//     }
      
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int i;
//     for(i=1; i<10; i++){
//          if (i%2==0)
//        break;
//        i++;
//     }
//        printf("%d\n", i);
      
    
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int a[5]= {10, 20, 30, 40, 50};
//     int i = 0;
//     while(i<5)
//     {
//         if(i<5)
//         printf("%d\n", a[i]);
//         i++;
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int n = 50;
//     while(n>1)
//     {
//         n = n/10;
//         printf("\n Hii");
    
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int n = 375, x;
//     while(n>10)
//     {
//         x = x%10;
//         printf("%d",x);
//         n = n%10;

//     }
//     return 0;
//}

// #include<stdio.h>

// int main(){

//     int i;
//     for(i = 65; i<91; i++)
//     printf("\t %c", i);
//     return 0;
// }



// #include<stdio.h>

// int main(){

//     int a[3][3];
//     int r, c;

//     printf("Enter 9 elements:\n");

//     for(r = 0; r < 3; r++)
//         for(c = 0; c < 3; c++)
//             scanf("%d", &a[r][c]); 

//     printf("\nMatrix is:\n");
//     for(r = 0; r < 3; r++)
//     {
//         for(c = 0; c < 3; c++)
//             printf("\t%d", a[r][c]);
//         printf("\n");
//     }

//     return 0;
// }

// wap to find sum of diagonal of a square matrix




// #include<stdio.h>

// int main() {
//     int a[3][3], r, c, sum = 0;

//     printf("Enter 9 elements:\n");
//     for(r = 0; r < 3; r++)
//         for(c = 0; c < 3; c++)
//             scanf("%d", &a[r][c]);

//     for(r = 0; r < 3; r++)
//         sum += a[r][r];

//     printf("Sum of diagonal = %d", sum);

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// struct student
// {
//     char name[20];
//     int roll;
//     float marks;
// };
// int main()
// {
//     struct student s1, s2;
//     strcpy(s1.name,"raj kumar");
//     s1.roll=1040;
//     s1.marks=75;
//     s2=s1;
//     printf("\n%s %d %f", s2.name, s2.roll,s2.marks);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// union student
// {
//     char name[20];
//     int roll;
//     float marks;
// };
// int main()
// {
//     union student s1, s2;
//     strcpy(s1.name,"raj kumar");
//     s1.roll=1040;
//     s1.marks=75;
//     s2=s1;
//     printf("\n%s", s1.name);
//     printf("\n%d", s1.roll);
//     printf("\n%f", s1.marks);
//     return 0;
// }
