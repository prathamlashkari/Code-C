// 1. programm to make the sum,sub,mul, div of given two number;
//  # include <stdio.h>
//  int main(){
//   int a = 5;
//  int b = 7;
//   int n = 99;
//   int d = 9;
//   float e = 12;
//   printf ("the addition of a + b is %d \n", a + b);
//  printf("the substraction of a + b -n is %d \n", a + b - n);
//  printf("the multiplication  of a + b - n * d  is %d \n", (a + b - n) * d);
//  printf("the division  of a + b - n * d / e is %f \n", ((a + b - n)*d) /e );
//       return 0; }

// 2. making programm for example of scanf and "&";
//  # include <stdio.h>
//  int main(){
//     int a , b ;
//     printf ("enter the value of a \n", a );
//     scanf("%d", &a);
//     printf ("enter the value of b \n", b );
//     scanf("%d", &b);
//     printf ("the sum of a + b is %d \n ", a + b);
//     return 0;  }

// 3. program to convert value of frhrenheit to celusis:
// # include <stdio.h>

// int main(){
//  float p;
// printf ("the value of p is \n");
// scanf("%f", &p);
// printf ("the value of celsisus is %f \n", (p - 32) * 5/9 );
//  return 0;
// }

// 4. progrmm for making finding the area of circle:
// # include <stdio.h>
// int main(){
//  float a = 3.14;
//  float r;
//  printf ("the value of r is \n");
//  scanf("%f", &r);
// printf ("the area of circle is %f\n", a*r*r);
//      return 0;
// }

// 5. make a programm to find area fo rectangle;
// # include <stdio.h>
// int main(){
//  int l , b ;
//  printf("enter the value of l \n");
//  scanf ("%d",&l);
//   printf("enter the value of b \n");
//  scanf ("%d",&b);
//   int area = l*b;
//  printf ("the area of recatangle is %d \n", area);
//     return 0;
// }

// 6.find the value of simple intrest from the given input from user;
// # include <stdio.h>
// int main(){
//    int p,r,t;
//   printf("enter the value of p \n");
//   scanf ("%d",&p);
//   printf("enter the value of r \n");
//   scanf ("%d",&r);
//   printf("enter the value of t \n");
//   scanf ("%d",&t);
//    int si = p*r*t;
//    printf("the value of si %d\n",p*r*t);
//    return 0;
// }

// 7 make a programm of 55 to the power of 5;
// #include <stdio.h>
// int main(){
//   float a,b;
//   printf("Enter the  value of a \n");
//   scanf("%f", &a);
//   printf("Enter the  value of b \n");
//   scanf("%f", &b);
//   printf("The vlaue of  a to the power b is %f\n",pow(a, b));
//       return 0; }

// 8. write a programm which is divisible or any number or not;

// # include <stdio.h>
// int main(){
//  int a,b ;
//  printf("Enter the number a \n");
//  scanf("%d", &a);
//  printf("Enter the number b \n");
//  scanf("%d", &b);
//  printf ("test the divisibility return: %d\n", a%b);
//   return 0; }

// 9. make a programm on order associativety;

// # include <stdio.h>
// int main(){
//    int a=2;
//    int b=3;
//    int c=3;
//    int r=1;
//    printf ("the value of sum %d\n",3*a/b-c+r);
//    return 0; }

// 10 . make a progamm on if and else statement; the given number is odd or even;

// # include <stdio.h>
// int main(){
// int a;
// printf ("enter the number a\n");
// scanf("%d", &a);
// if(a%2==0){
//     printf("the value of a is odd");
// }
// else{
//     printf("the vlue of a is even");
// }
//      return 0;
//      }

// 11 . make a programm on age given by the officer for driving the vehicle ;
// # include <stdio.h>
// int main(){
//      int age ;
//      printf("enter your age \n");
//      scanf("%d",&age);
//      if (18<=age){
//          printf("you can drive \n");
//      }
//      else {
//          printf("you can't drive\n");
//      }
//      return 0;
//      }
// logical and relational operator
// 12. make a program to show you drive or not at the given age by logical operator
// # include <stdio.h>
// int main(){
//      int age ;
//      printf("enter your age \n");
//      scanf("%d",&age);
//      if (18<=age && age<=70){
//          printf("you can drive, your age is above 18 or below 70\n");
//      }
//      else {
//          printf("you can't drive\n");
//      }
//      return 0; }

// 13 . make a porgram to show conditional operator
// # include <stdio.h>

// int main(){

//      int a,b ;

//      printf("enter the value of a");
//      scanf("%d", &a);

//      printf("enter the value of b");
//      scanf("%d", &b);

//      (a < b) ? printf("a is less than b"): printf ("a is greater than b");
//      return 0;

// }
//                                                              #@#  switch case
// 14 . make  a program to use switch case
// #include <stdio.h>

// int main()
// {

//     int rating;
//     printf("enter the rating (1 - 5) \n ");
//     scanf("%d", &rating);
//      switch(rating){
//   case 1:
//         printf("your rating is 1 \n");
//         break;
//     case 2:
//         printf("your rating is 2 \n");
//         break;
//     case 3:
//         printf("your rating is 3 \n");
//         break;
//     case 4:
//         printf("your rating is 4 \n");
//         break;
//     case 5:
//         printf("your rating is 5 \n");
//         break;
//     default:
//         printf("Invalid rating  \n");
//         break;
//     }
//     return 0;
// }

// 15 . make a program to show that the grade according to the percentge
// # include <stdio.h>

// int main(){

//      int percentage;
//      printf("enter your percentage: \n");
//      scanf("%d",& percentage);

//      if (percentage>=90 && percentage <= 100){
//          printf("you got A grade ");
//      }

//      else if (percentage < 90 && percentage>=80){
//          printf("you got B grade");
//      }

//      else if (percentage<80 && percentage>=70){
//          printf("you got C grade");
//      }
//      else  {
//      printf("you were fail");
//      }
//      return 0;

// }

// 16. To make a program to show pass or fali by given percentage
// # include <stdio.h>

// int main(){

//       float phy , maths , chem , total;
//       printf ("enter the marks of phy \n");
//       scanf("%f",&phy);
//       printf ("enter the marks of  maths \n");
//       scanf("%f",& maths);
//       printf ("enter marks of chem \n");
//       scanf("%f",&chem);
//       total = (phy + maths + chem)/3;

//       if (total <40 || phy<33 || maths<33 || chem<33){
//           printf ("you were failed, your percentage is %f \n",total);

//       }
//       else {
//           printf("you were pass, your percentage is %f \n",total);
//       }

//      return 0;

// }

// 17 . Make a program to show the income tax slaes per income.

// #include<stdio.h>

// int main(){
//     float tax = 0, income;
//     printf("Enter your income\n");
//     scanf("%f", &income);

//     if(income>=250000 && income<=500000){
//         tax = tax + 0.05 * (income - 250000);
//     }

//     if (income >= 500000 && income <= 1000000)
//     {
//         tax = tax + 0.20 * (income - 500000);
//     }

//     if (income >= 1000000)
//     {
//         tax = tax + 0.30 * (income - 1000000);
//     }

//     printf("Your net income tax to be paid by 26th of this month is %f\n", tax);

//     return 0;
// }

// 18 . Make program to  show that the which no is grater among 4

// # include <stdio.h>

// int main(){

//      int a,b,c,d;
//      printf("enter the value of a \n");
//      scanf("%d", &a);

//      printf("enter the value of b \n");
//      scanf("%d", & b);

//      printf("enter the value of c \n");
//      scanf("%d", &c);

//      printf("enter the value of d \n");
//      scanf("%d", &d);

//      if (a>b && a>c && a>d){
//          printf("the greater no is : %d\n",a);
//      }
//      if (b>c && b>a && b>d){
//          printf("the greater no is : %d\n",b);
//      }
//      if (c>d && c>a && c>b){
//          printf("the greater no is : %d\n",c);
//      }
//      if (d>a && d>a && d>b){
//          printf("the greater no is : %d\n",d);
//      }
//      return 0;

// }

// 19 . Make a program to show which is lower case or upper case
//  #include<stdio.h>

// int main(){
//     // 97-122 = a-z ASCII Values
//     char ch;
//     printf("Enter the character\n");
//     scanf("%c", &ch);
//     if(ch<=122 && ch>=97){
//         printf("It is lowercase");
//     }
//     else{
//         printf("It is not lowercase");
//     }
//     return 0;
// }

// While loop

// 20 . make a progam to print the no
// # include <stdio.h>

// int main(){

//      int a ;
//      printf("enter the value of a : \n");
//      scanf("%d", &a);

//      while (a<10){
//          printf("%d\n",a);
//          a++;

//      }
//      return 0;

// }

//  21 . Make a program to print the natural number from 10 to 20;
// # include <stdio.h>

// int main(){

//      int a ;
//      a=0;
//      printf("enter the value of a \n");
//      scanf("%d",&a);
//      while(a <= 20){
//          if (a >=10){
//          printf("%d \n",a);}
//           a++;
//      }
//      return 0;
// }

// 22 . program to show that i++ work or ++i difference:

// # include <stdio.h>
// int main(){
//       int i = 5;
//       printf("the value of i++ is  %d \n",++i); // i++ phele print fir increment
//       printf("the vlaue of i is  %d \n",i); // ++i phele increment fir print
//       return 0;
// }

//  23 . print star increasing form

// # include <stdio.h>
// int main(){
//       printf("* \n");
//       printf("** \n");
//       printf("*** \n");
//       printf("**** \n");
//       printf("***** \n");
//       return 0;
// }

//                    using do while loop

// 24.  make program to print the value of n natural number

// # include <stdio.h>

// int main(){

//      int i=0,n;
//      printf("enter the value of  \n ");
//      scanf("%d",&n);
//      do {
//          printf("%d \n",i+1);
//          i++;
//      }while(i<n);
//      return 0;

// }

//                          USING FOR LOOP

// 25 . Make a program to print first n nautural number using for loop
//  # include <stdio.h>

// int main(){

//      int n ;
//      printf("Eneter the value of n \n ");
//      scanf("%d", & n);

//      for ( n ; n<100; n++ ){

//          printf("%d \n",n+1);

//      }
//      return 0;

// }
//                                  OR
// # include <stdio.h>

// int main(){

//     int n ,i=0;
//     printf("value of n \n ");
//     scanf("%d",&n);

//     for (int n ; n>i ; i++){

//         printf("%d \n",i+1);

//     }
//        return 0 ;
// }

// 26 . Make program to print the reverse order of natural number
// # include <stdio.h>

// int main(){
//      int i=0,n;
//      printf("enter the value of n \n");
//      scanf("%d",&n);
//      for(i=n ; i ; i--){
//          printf("the natural number is %d \n",i);
//      }
//      return 0;
// }

// # include <stdio.h>

// int main(){

//      int skip=5,i=0;
//      while (i<10){
//          if (skip==!i)
//          continue;

//      }
//      else if
//      {printf("%d \n",i);
// }
//      return 0;

// }
// 26 . Make a program to print the table of  number n

// # include <stdio.h>

// int main(){

//      int n,i;
//      printf("enter the value of n\n");
//      scanf("%d",&n);
//      printf("\n the table of %d \n",n);

//      for (i=1 ; i<=10 ; i++){
//          printf("%d*%d=%d\n",n,i,n*i);

//      }

//      return 0;

//  }
// 27. Make a program to print the reverser order of the multiplication
// # include <stdio.h>
// int main(){

//      int i;
//      for(int i=10 ; i ; i-- ){
//          printf("10*%d=%d\n\n",i,i*10);
//      }
//      return 0;
// }

// 28 . Make  a program to print the sum of natural number
// # include <stdio.h>

// int main(){

//      int n,i,sum=0;
//      printf("enter the value of \n");
//      scanf("%d",&n);

//      for (i=0 ; i<=n ; i++){
//          sum +=i;
//          printf("the sum of first natural number is %d \n ", sum);
//      }
//      return 0;

// }

// 29 . Make a program to add the number
// # include <stdio.h>

// int main(){

//      int i , sum=0 , n;
//      printf("enter the value of n \n");
//      scanf("%d", &n);
//      for ( i=0 ; i<=n ; i++){

//          sum +=i;
//          printf("the sum of given no is %d \n ",sum);

//      }

//      return 0;

// }

// 30 . Make a program to add first natural number by while loop
// # include <stdio.h>

// int main(){

//      int n ,i=1 ,sum=0;
//      printf("enter the value of \n");
//      scanf("%d",&n);

//      while (i<=n){
//          sum +=i;
//          i++;
//          printf("the sum of given number is %d \n", sum );

//      }
//      return 0;

// }

// 31 . Make a program to show the value of factorial of given number
// #include <stdio.h>

// int main()
// {

//     int n, i = 0, factorial = 1;
//     printf("enter the value of n \n");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         factorial *= i;
//     }
//     printf("the value of factorial  %d is %d \n", n, factorial);
//     return 0;
// }

// by using while loop

// # include <stdio.h>

// int main(){

//      int n , i=1 , fact = 1;
//      printf("enter the value of n \n");
//      scanf("%d",&n);
//      while (i<=n){
//          fact*=i;
//          i++;
//      }
//      printf("the value of factorial %d is %d \n",n,fact);

//      return 0;

// }
//  32 . Make a program to show that the given no is prime number
// #include <stdio.h>

// int main()
// {

//     int n, i, prime = 1;
//     printf("enter the value of \n");
//     scanf("%d", &n);

//     for (i = 2; i < n; i++)
//     {

//         if (n % i == 0)
//         {
//             break;
//         }
//     }
//     if (i < n)
//     {
//         printf("the given number is not a prime number  \n");
//     }
//     else
//     {
//         printf("given number is a prime number\n");
//     }

//     return 0;
// }

// 33  . Make a program to genrate the random number .

// # include <stdio.h>// this header file used to impot printf function
// #include <stdlib.h> // this all library is used to improt function like random
// #include <time.h>// this import time

// int main(){

//     int number ;
//     srand (time(0));// here is the time between generating the number
//     number = rand()%100 + 1 ;// used to generate number between 1 to 100
//     printf("the number is %d \n", number);
//         return 0;

// }

// using fucntion recurison

// . Example of the function how we use it ?

// # include <stdio.h>
//  void display ();
// int main(){
//     printf("intializing function \n");
//     display();
//     printf("display function \n");
//     return 0;
// }
// void display(){
//  printf(" this is display \n");
// }

// 34. Make a program to show the time ing

// # include <stdio.h>
//  void goodmorning ();
//  void goodafternoon ();
//  void goodnight  ();

// int main(){
//      goodmorning ();
//      goodafternoon ();
//      goodnight  ();
//      return 0;

// }
// void goodmorning (){
//     printf("good morning \n");
// }

// void goodafternoon (){
//     printf("good afternoon \n");
// }

// void goodnight (){
//     printf("good night \n");
// }

// 35 . Make a program to add the two number as function

// #include <stdio.h>
// // here sum is the function of a and b
// int sum(int a, int b); // sum is prototype

// int main()
// {
//     int c;
//     c = sum(2, 4);
//     printf("the value is %d \n ", c);

//     return 0;
// }

// int sum(int a, int b)
// {
//     int result;
//     result = a + b;
//     return result;
// }

//  35 . Make a program to calculat the area of square
// # include <stdio.h>
//  #include <math.h>
// int main(){

//      float side;
//      printf("enter the value of side \n");
//      scanf("%f", &side);
//      printf("The area of square is %f \n ", pow(side,2));
//      return 0;

// }
// 36 . Make a program to print the factorial of a given number
// # include <stdio.h>
// int factorial ( int x);

// int main(){
//       int a ;
//       printf("enter the value of a \n");
//       scanf("%d", &a );
//      printf("the factorial of a  %d is %d\n", a ,factorial(a));

//      return 0;
// }

// int factorial (int x){
//     if ( x == 1 || x == 0){
//         return 1 ;
//     }
//     else {
//         return x * factorial (x-1);
//     }

// }

// 37 . Make program to calculate the average of three number

// #include <stdio.h>
// float average(int  a, int b, int  c);
//   int main()
// {

//     int a, b, c;
//     printf("enter the value of a \n");
//     scanf("%d", &a);
//     printf("enter the value of b \n");
//     scanf("%d", &b);
//     printf("enter the value of c \n");
//     scanf("%d", &c);
//     printf("the average value of a b c is %f \n", average(a, b, c));
//     return 0;
// }
// float average(int  a, int  b, int  c)
// {
//     float d;
//     return (d = a + b + c) / 3;
// }

// 38 . Make a program to convert celisius to farenheit
// #include <stdio.h>
// float celsius(int c);
// int main()
// {
//     float c;
//     printf("enter the value of celsius \n ");
//     scanf("%f", &c);
//     printf("The conversion of celisius to farneheit is %f \n", celsius(c));
//     return 0;
// }
// float celsius(int c)
// {
//     float d;
//     return ((9 * 32 / 5) + 32);
// }

// 39 . Make a program to calculat the force of attraction on the body of mass m take g =9.8m/s
// # include <stdio.h>
// float force (float mass );
// int main(){

//   float m ;
//   printf("enter the value of mass \n");
//   scanf("%f",&m);
//   printf("the force is %f\n ", force(m));
//      return 0;

// }
// float force (float mass){
//     float result = mass  * 9.8 ;
//     return result ;

// }

// 40 . Make a program to to calculat the fibonacci series
// #include<stdio.h>

// int fibonacciSeries (int n);

// int main()
// {
//    int n;

//    printf("Enter range: ");
//    scanf("%d", &n);

//    printf("\nThe Fibonacci series is: \n");

//    fibonacciSeries(n);

// }

// int fibonacciSeries(int n)
// {
//    int a=0, b=1, d;

//    while (a<=n)
//    {
//      printf("%d\t", a);
//      d = a+b;
//      a = b;
//      b = d;
//    }

// }

// 41 . concept program
// # include <stdio.h>

// int main(){

//    int a=3 ;
//    printf("%d %d %d \n", a , ++a ,a++);
//    return 0;
// }

// 42 . Make a prgram to calculate n natural number using recursion function

// #include <stdio.h>
// int natural(int number);
// int main()
// {
//     int n;
//     printf("enter the number \n");
//     scanf("%d", &n);
//     printf("The sum of natural nember is: %d \n", natural(n));
//     return 0;
// }
// int natural(int number)
// {
//     int i, sum = 0;
//     for (i = 1; i <= number; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }
//  43 . Make a program to know the working porcess of an pointer .
// #include <stdio.h>

// int main()
// {

//      int i = 66;
//      int *j = &i;
//      printf("the value of i is %d\n", *j);
//      printf("the value of i is %d\n", i);
//      printf("the address  of i is %u\n", j);
//      printf("the address  of i is %u\n", &i);
//      printf("the address  of j is %u\n", &j);
//      printf("the value   of j is %u\n", *(&j));
//      return 0;
// }

//  44 . Make a program to change the value by call by refrence function .
// #include <stdio.h>
// // void wrong_swap(int a, int b);
// void swap(int *a, int *b);
// int main()
// {
//     int x = 3, y = 5;
//     printf("the value of x and y is %d and %d  \n ", x, y);
//     // wrong_swap(x,y);
//     swap(&x, &y);
//     printf("the value of x and y after swap %d and %d \n", x, y);
//     return 0;
// }
// //  void wrong_swap(int a ,  int b){
// //      int temp ;
// //      temp  = a ;
// //      a =  b ;
// //      b = temp ;

// // }
// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
//                                                 // PRATICE SET                 //

//  45 . Make a program to print the address of a variable
// # include <stdio.h>

// int main(){

//      int a = 9  ;
//      int *pt ;
//      pt = &a ;
//      printf("The adress of a is %u\n", &a);
//      printf("The value of a is %d\n", *pt);
//      return 0;

// }

//  46 . Make a program to show a address of a variable and is function
// #include <stdio.h>
// void add(int a)
// {
//     printf("The address of a is %u \n", &a);
// }
// int main()
// {
//     int i;
//     i = 5;
//     printf("The value of i is %d \n", i);
//     printf("The adress of i is %u\n", &i);
//     add(i);

//     return 0;
// }

// 47 . Make a program to change the value of a variable ot 10 times of it using refrence function

// #include <stdio.h>
// void change(int *a, int *b);
// int main()
// {
//     int x, y;
//     printf("enter the value x \n");
//     scanf("%d", &x);
//     y = x * 10;
//     printf("the value of x before passing is %d \n", x);
//     change(&x, &y);
//     printf("The ten times value of x after passing is %d \n", x);
//     return 0;
// }
// void change(int *a, int *b)
// {
//     *a = *b;
// }

// 48 . Make a program to print the sum and average of two nuber of using function

// #include <stdio.h>
// void sumavg(int a, int b, int *sum, float *avg);
// int main()
// {
//     int x = 6, y = 8, sum;
//     float avg;
//     sumavg(x, y, &sum, &avg);
//     printf("The sum of x and y is %d \n ", sum);
//     printf("The avg of x and y is %f \n ", avg);

//     return 0;
// }
// void sumavg(int a, int b, int *sum, float *avg)
// {
//     *sum = a + b;
//     *avg = (float)(*sum) / 2;
// }

// 49 . Make a program to print the value of variable to pointer to pointer
// #include <stdio.h>
// int main()
// {
//     int i = 90;
//     int *pt = &i;
//     int **ptr = &pt;
//     printf("The value of i is %d \n", **ptr);
//     return 0;
// }
//                     Chapter = 7 ;{arrays}

// 50 . Use of an array and its syntax
// #include <stdio.h>
// int main()
// {
//     int marks[3];
//     marks[0] = 66;
//     marks[1] = 64;
//     marks[2] = 77;
//     printf("marks\n %d\n %d\n %d\n", marks[0], marks[1], marks[2]);
//     return 0;
// }

//  or by using user output
// #include<stdio.h>

// int main(){
//     int marks[3];

//     printf("Enter the value of marks for student 1: ");
//     scanf("%d", &marks[0]);
//     printf("Enter the value of marks for student 2: ");
//     scanf("%d", &marks[1]);
//     printf("Enter the value of marks for student 3: ");
//     scanf("%d", &marks[2]);

//     printf("You have entered %d %d %d ", marks[0],
//             marks[1], marks[2]);
//     return 0;
// }
//  or using for loop
// #include <stdio.h>

// int main()
// {
//     int marks[3];
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter the value of marks for student %d: ", i + 1);
//         scanf("%d", &marks[i]);
//     }
//     for (int i = 0; i <3; i++)
//     {
//         printf("The value of marks for student %d is: %d \n", i + 1, marks[i]);
//     }
//     return 0;
// }
//  52 . Initilization of array
// #include<stdio.h>

// int main(){
//     // int a[] = {34,232,23};
//     // printf("The value of a[0] is %d\n", a[0]);
//     // printf("The value of a[1] is %d\n", a[1]);
//     // printf("The value of a[2] is %d\n", a[2]);

//     float a[] = {3.4,2.32,2.3};
//     printf("The value of a[0] is %f\n", a[0]);
//     printf("The value of a[1] is %f\n", a[1]);
//     printf("The value of a[2] is %f\n", a[2]);
//     return 0;
// }

//  53. Array usin pointer
// # include <stdio.h>

// int main(){

//     //  int i  = 88 ;
//  int *ptr = &i;
//  printf("the adress of i %u\n", ptr);
//  ptr++;
//   printf("the adress of i %u\n", ptr);

//  float  i  = 88 ;
//  float *ptr = &i;
//  printf("the adress of i %u\n", ptr);
//  ptr--;
//   printf("the adress of i %u\n", ptr);

//      int i  = 88 ;
//      int *ptr = &i;
//      int **pt = &ptr ;
//      printf("the adress of i %u\n", ptr);
//      pt = ptr - 1  ;
//       printf("the adress of i %u\n", pt);

//      return 0;

// }

// 54 . Using pointer make an program and using arraay
// #include <stdio.h>

// int main()
// {

//     int marks[3];
//     int *ptr = &marks[0];
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter the value of %d \n", i + 1);
//         scanf("%d", ptr);
//         ptr++;
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         printf("The marks of %d is %d\n", i + 1, marks[i]);
//     }
//     return 0;
// }
//  55 . Making an array using funciont
// #include <stdio.h>
// void arry(int *pt, int n);
// int main()
// {
//     int a[] = {22, 33, 44, 55, 66, 77, 88};
//     arry(a, 7);
//     return 0;
// }
// void arry(int *pt, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value is %d is %d\n", i + 1, *(pt + i));
//     }
// }
//                  OR
// #include <stdio.h>
// void arry(int pt[], int n);
// int main()
// {
//     int a[] = {22, 33, 44, 55, 66, 77, 88};
//     arry(a, 7);
//     printf("%d",a[2]);
//     return 0;
// }
// void arry(int pt[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value is %d is %d\n", i + 1,pt[i] );
//     }
//     pt[2] = 333;
// }
// 56 . Making  a program to show array in 2 dimenison
// #include <stdio.h>

// int main()
// {
//     int stu = 1;
//     int sub = 3;
//     int marks[1][3];
//     for (int i = 0; i < stu; i++)
//     {
//         for (int j = 0; j < sub; j++)
//         {
//             printf("Enter the marks of stu %d in sub %d :", i + 1, j + 1);
//             scanf("%d", &marks[i][j]);
//         }
//     }
//     for (int i = 0; i < stu; i++)
//     {
//         for (int j = 0; j < sub; j++)
//         {
//             printf(" the marks of stu %d in sub %d: %d\n", i + 1, j + 1, marks[i][j]);
//         }
//     }
//     return 0;
// }
//                        Pratice set

// 57 . Create an array of 10 elements
// # include <stdio.h>
// int main(){
//      int a[10];
//      int *pt = a;
//      pt = pt + 2 ;
//      if (pt == &a[2])
//      {
//          printf("the pointer point the same location \n ");
//      }
//     else {
//          printf("The pointer do not points the same location \n");
//          }
//      return 0;}

//  58 . Make a program to create an  array of 10 integer store multiplication of 10
// #include <stdio.h>
// int main()
// {
//     int mul[10];
//     for (int i = 0; i < 10; i++)
//     {
//         mul[i] = 5 * (i + 1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("5 X %d =  %d\n", i + 1, mul[i]);
//     }
//     return 0;
// }
//   59 . Repeat 58 and using user output of the tabel
// #include <stdio.h>
// int main(){
//     int mul[10], n;
//     printf("enter the value of n\n");
//     scanf("%d", &n);
//     for (int i = 0; i < 10; i++)
//     {
//         mul[i] = n * (i + 1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d X %d = %d \n", n, i + 1, mul[i]);
//     }
//     return 0;
// }
//  60 . Make a program to print the given array in reverse order
// #include <stdio.h>
// void reverse(int *arr, int n);
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     reverse(arr, 7);
//     for (int i = 0; i < 7; i++)
//     {
//         printf("The reverse order of %d is %d \n", i, arr[i]);
//     }
//     return 0;
// }
// void reverse(int *arr, int n)
// {
//     for (int i = 0; i < (n / 2); i++)
//     {
//         int temp;
//         temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
// }
// 61 . Make a program to count the array present in the program
// #include <stdio.h>
// int pluscount(int *arr, int n);
// void printarr(int *arr, int n);
// int negative(int *arr, int n);
// int main()
// {
//     int arr[] = {1, -2, -3, 4, -5, 6, 7, 8};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printarr(arr, n);
//     printf("The positive integer in an array is %d \n", pluscount(arr, n));
//     printf("The negative integer in an array is %d \n ", negative(arr, n));
//     return 0;
// }
// int pluscount(int *arr, int n)
// {
//     int positive = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             positive++;
//         }
//     }
//     return positive;
// }
// void printarr(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("array %d \n", arr[i]);
//     }
// }
// int negative(int *arr, int n)
// {
//     int negative = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 0)
//         {
//             negative++;
//         }
//     }
//     return negative;
//   62 . Make a multiplication tabel of 2,7,9 using 2 d array
// # include <stdio.h>

// int main(){
//     int multab[3][10];
//     for (int i = 0; i < 10; i++)
//     {
//         multab[0][i] = 2 * (i + 1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("2 X %d =  %d\n", i + 1, multab[0][i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         multab[0][i] = 7 * (i + 1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("7 X %d =  %d\n", i + 1, multab[0][i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         multab[0][i] = 9 * (i + 1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("9 X %d =  %d\n", i + 1, multab[0][i]);
//     }
//      return 0;

// }
//   or by using function
// #include <stdio.h>
// void tables(int *table, int num, int n);
// int main()
// {

//     int table[3][10];
//     tables(table[0], 2, 10);
//     tables(table[1], 7, 10);
//     tables(table[2], 9, 10);

//     return 0;
// }
// void tables(int *table, int num, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         table[i] = num * (i + 1);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d X %d = %d \n", num, i + 1, table[i]);
//     }
// }
//  63 . Make a program to print the table by user out put
// #include <stdio.h>
// void printtable(int *table, int num);
// int main()
// {
//     int table[10], num, i;
//     printf("Enter the number which you want to print as the table\n");
//     scanf("%d", &num);
//     printtable(table, num);
//     return 0;
// }
// void printtable(int *table, int num)
// {
//     for (int i = 0; i < 10; i++)
//     {
//         table[i] = num * (i + 1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d X %d = %d \n", num, i + 1, table[i]);
//     }
// }
// 64 . Create an three diemnsional array and print its element in incresaing order
// #include <stdio.h>

// int main()
// {

//      int arr[2][3][4];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 4; k++)
//             {
//              printf("The address of an array is arr[%d][%d][%d] is %u\n", i, j, k, &arr[i][j][k]);
//             }
//         }
//     }
//     return 0;
// }

//                     STRINGS
// # include <stdio.h>
// int main(){
//      char str[] = {'y','a','s','h','\0'};
//      char str[] = "yash";
//      return 0; }

// 65 .  How we print an string
// # include <stdio.h>
// int main(){
//      char str[]= "yash";
//      char *pt = str;
//      while (*pt != '\0'){
//               printf("%c" , *pt);
//               pt++;}
//      return 0; }

//  66 . print string in a sort way
// # include <stdio.h>
// int main(){.

//      char *pt , str[] = "yash" ;
//      pt = str;
//      printf("%s" , pt);
//      return 0; }

//  67 . print the string by taking output from user
// # include <stdio.h>
// int main(){
//      char str [30];
//      printf("Enter your name\n");
//      scanf("%s" , str);
//      printf("your name is %s \n" , str);
//      return 0;
// }

// By  using gets function for an string
// # include <stdio.h>
// int main(){
//      char str [30];
//      printf("Enter your name\n");
//      gets(str);
//      printf("your name is %s \n" , str);
//      return 0; }

// By  using gets & puts function for an string
// # include <stdio.h>
// int main(){
//      char str [30];
//      printf("Enter your name\n");
//      gets(str);
//      puts(str);
//      return 0; }

// # include <stdio.h>
// int main(){
//      //  char str[] = "yash";
//       char pt [] = "yash lash";
//      // gets(pt);
//       printf("%s" , pt);
//       return 0;

// 68 . Program to print the diff btw *ptr & pt[]
// # include <stdio.h>
// int main(){
//      char *pt = "yash lashkari";
//      // char pt[] = "yash lashkari";
//      pt = "pratham lashkari" ;
//      printf("%s" , pt);
//       return 0; }

// 69 . Make a program to print the length of the string using string function
// # include <stdio.h>
// # include <string.h>
// int main(){
//      char str[] = "yash";
//      int a = strlen(str);
//      printf("the length of string is %d\n",a);
//      return 0; }

// 70 . Make a program to copy a value of one string1 to string2
// #include <stdio.h>
// #include <string.h>
// int main(){
//       char st1[] = "yash";
//       char st2[30];
//       strcpy(st2, st1);
//       printf("the value of st2 is %s", st2);
//       return 0;}

// 71 . Program to combine the valur of st1 and st2 and get the combine out put
// #include<stdio.h>
// #include <string.h>
// int main(){
//     char st1[45] = "Hello ";
//     char *st2 = "yash";
//     strcat(st1, st2);
//     printf("Now the st1 is %s", st1);
//     return 0; }

//  73 . Program to comapre the value of two string
// # include <stdio.h>
// # include <string.h>
// int main(){
//        char st1[] = "pratham" ;
//        char st2[] = "rashmi";
//        int val = strcmp(st1,st2);
//        printf("The comparison of st1 and st2 is %d \n",val);
//        return 0; }

//                          Pratice set

// 74 . Make a program to compare the two string in the
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//       char st1[34];
//       char st2[34];
//       char c;
//       int i = 0;
//       printf("enter the value of st1 \n");
//       scanf("%s", st1);
//       printf("enter the value of st2 \n");
//       while (c != '\n')
//       {
//             fflush(stdin);
//             scanf("%c", &c);
//             st2[i] = c;
//             i++;
//       }
//       st2[i - 1] = '\0';
//       printf("The value of st1 is %s \n", st1);
//       printf("The value of st2 is %s \n", st2);
//       printf("the comparitive value of st1 and st2 is %d", strcmp(st1, st2));
//       return 0;
// }

// 75 . Make a program to write your own length function of string
// #include <stdio.h>
// int strlen(char *st1);
// int main(){
//       char st1[] = "yash";
//       int l = strlen(st1);
//       printf("The length of st1 is %d", l);
//       return 0;}
// int strlen(char *st1){
//       char *ptr = st1;
//       int len = 0;
//       while (*ptr != '\0')   {
//             len++;
//             ptr++;  }
//     return len;  }

// 76 . Make a program to slice () to slice the value of array
// #include <stdio.h>

// void slice(char *st, int m, int n);
// int main()
// {
//       char st[] = "pratham";
//       slice(st, 1, 5);
//       printf("%s", st);
//       return 0;
// }
// void slice(char *st, int m, int n)
// {
//       int i = 0;
//       while ((m + i) < n)
//       {
//             st[i] = st[i + m];
//             i++;
//       }
//       st[i] = '\0';
// }

//  77 . Write your own version of strcpy() function from string.h
// #include <stdio.h>
// #include <string.h>
// void strcp(char *st, char *st2);
// int main()
// {
//       char st[] = "pratham";
//       char st2[30];
//       strcp(st, st2);
//       printf("%s", st2);
//       return 0;
// }
// void strcp(char *st, char *st2)
// {
//       int i = 0;
//       while (i < 30)
//       {
//             strcpy(st2, st);
//             i++;
//       }
//       st2[i] = '\0';
// }
// 78 . Write a progrma to encrypyt a string by adding 1 to the ascii value of its character
// #include <stdio.h>
// void encrypted(char *c) {
//       char *pt = c;
//       while (*pt != '\0')
//       {
//             *pt = *pt + 1;
//             pt++;
//       }
// }
// int main()
// {
//       char c[] = " come to college";
//       encrypted(c);
//       printf("Encrypted value of c is %s\n", c);
//       return 0;
// }
// 79 . Write a progrma to decrypt a string by adding 1 to the ascii value of its character
// #include <stdio.h>
// void decrypted(char *c){
//       char *pt = c;
//       while (*pt != '\0')
//       {
//             *pt = *pt - 1;
//             pt++;
//       }
// }
// int main()
// {
//       char c[] = " !j!mpwf!zpv!sbtinj";
//       decrypted(c);
//       printf("decrypted value of c is %s\n", c);
//       return 0;
// }
// 80 . Wrtie a program to print the occurecne of the character
// #include <stdio.h>
// int occurence(char st[], char c);
// int main()
// {

//     char st[] = "Pratham";
//     int count = occurence(st, 'a');
//     printf("The occurence of c is %d", count);
//     return 0;
// }
// int occurence(char st[], char c)
// {
//     char *pt = st;
//     int count = 0;
//     while (*pt != '\0')
//     {
//         if (*pt == c)
//         {
//             count++;
//         }
//         pt++;
//     }
//     return count;
// }
// 81 . Write a program to check whether the character is present in the string or not
// #include <stdio.h>
// #include <string.h>
// int present(char st[], char n);
// int main()
// {
//     char st[] = "yash";
//     present(st, 'y');
//     return 0;
// }
// int present(char st[], char n)
// {
//     char *pt = st;
//     while (*pt != '\0')
//     {
// if (*pt == n)
//         {
//             printf("The given character is present \n");
//         }   pt++;
//     }
// }
//                              STRUCTURE
//  syntax program for structure
// # include <stdio.h>
// # include <string.h>
//  struct employee{
//      int code;
//      float sylary;
//      char name [20];
//  };
// int main(){
//     struct employee e1;
//     e1.code=100;
//     e1.sylary = 5500.55;
//     strcpy(e1.name,"yash");

//     printf("%d \n ",e1.code);
//     printf("%f \n ",e1.sylary);
//     printf("%s \n ",e1.name);
//          return 0;
// }

//  82 .Make a program to enter the data of three employe in above format

// #include<stdio.h>
// #include<string.h>

// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };

// int main(){
//     struct employee e1, e2, e3;
//     printf("Enter the value for code of e1: ");
//     scanf("%d", &e1.code);
//     printf("Enter the value for salary of e1: ");
//     scanf("%f", &e1.salary);
//     printf("Enter the value for name of e1: ");
//     scanf("%s", e1.name);

//     printf("Enter the value for code of e2: ");
//     scanf("%d", &e2.code);
//     printf("Enter the value for salary of e2: ");
//     scanf("%f", &e2.salary);
//     printf("Enter the value for name of e2: ");
//     scanf("%s", e2.name);

//     printf("Enter the value for code of e3: ");
//     scanf("%d", &e3.code);
//     printf("Enter the value for salary of e3: ");
//     scanf("%f", &e3.salary);
//     printf("Enter the value for name of e3: ");
//     scanf("%s", e3.name);

//     return 0;
// }
//   83   Anoher way to print like that
// # include <stdio.h>
// # include <string.h>
// struct employee {
//     int code ;
//     float sylary ;
//     char name[20] ;

// };
// int main(){
//      struct employee Yash = {100 , 35.90,"yash"};
//      printf("code is: %d \n",Yash.code);
//      printf("sylary is: %.2f \n",Yash.sylary);
//      printf("name is: %s \n",Yash.name);
//      return 0;
// }
// 84  Another way to print an array

// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[20];};
// int main(){
//     struct employee facebook[100];
//     facebook[0].code = 100;
//     facebook[0].salary = 100.45;
//
//     strcpy(facebook[0].name, "Harry");

//     facebook[1].code = 101;
//     facebook[1].salary = 90.45;
//     strcpy(facebook[1].name, "Rohan");

//     facebook[2].code = 102;
//     facebook[2].salary = 110.45;
//     strcpy(facebook[2].name, "SkillKhiladi");
//     printf("Done");
//     return 0;
// }
//  OR
// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[20];
// };
// int main(){
//     struct employee harry = {100, 34.23, "Harry"};

//     printf("Code is: %d \n", harry.code);
//     printf("Salary is: %f \n", harry.salary);
//     printf("Name is: %s \n", harry.name);
//     return 0; }

// 85  Showing a structure using a pointer
// # include <stdio.h>
// # include <string.h>
// struct employee {
//     int code ;
//     float salary;
//     char name ;
// };
// int main(){

//     struct employee e1 ;
//     struct employee *pt;
//     pt = &e1;
//     (*pt).code = 100 ;
//     printf("%d",e1.code);
//      return 0;
// }
//  OR
// # include <stdio.h>
// # include <string.h>
// struct employee {
//     int code ;
//     float salary;
//     char name ;
// };
// int main(){
//     struct employee e1 ;
//     struct employee *pt;
//     pt = &e1;
//     //(*pt).code = 100 ;  or you can write
//     pt->code = 100 ;
//     printf("%d",e1.code);
//      return 0;
// }

//  86 make a prgram by using function
// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[20];
// };
// void show(struct employee emp){
//     printf("The Code of employee is: %d\n", emp.code);
//     printf("The Salary of employee is: %f\n", emp.salary);
//     printf("The Name of employee is: %s\n", emp.name);
//     //emp.code = 34;
// }
// int main(){
//     struct employee e1;
//     struct employee *ptr;

//     ptr = &e1;
//     ptr->code = 101;
//     ptr->salary = 11.01;
//     strcpy(ptr->name, "Harry");

//     show(e1);
//     printf("The Code of employee is: %d\n", e1.code);

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// typedef struct employee{
//     int code;
//     float salary;
//     char name[20];
// } emp;

// void show(emp emp1){
//     printf("The Code of employee is: %d\n", emp1.code);
//     printf("The Salary of employee is: %f\n", emp1.salary);
//     printf("The Name of employee is: %s\n", emp1.name);

// }

// int main(){
//     // Declaring e1 and ptr
//     emp e1;
//     emp *ptr;

//     // pointing ptr to e1
//     ptr = &e1;

//     // Set the member values for e1
//     ptr->code = 101;
//     ptr->salary = 11.01;
//     strcpy(ptr->name, "yash");

//     show(e1);

//     return 0;
// }

//           Pratice set
//  crete a two dimensionla vector using structure
// #include<stdio.h>

// struct vector{
//     int x;
//     int y;
// };

// int main(){
//     struct vector v1, v2;
//     v1.x = 34;
//     v1.y = 54;
//     printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

//     v2.x = 3345;
//     v2.y = 534;
//     printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);
//     return 0;
// }

// Above program by using vecotr and the additon of to or more vector

// #include<stdio.h>
// struct vector{
//     int x;
//     int y;
// };
// struct vector sumVector(struct vector v1, struct vector v2){
//     struct vector result;
//     result.x = v1.x + v2.x;
//     result.y = v1.y + v2.y;
//     return result;
// }
// int main(){
//     struct vector v1, v2, sum;
//     v1.x = 4;
//     v1.y = 9;
//     printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);
//     v2.x = 5;
//     v2.y = 4;
//     printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);
//     sum = sumVector(v1, v2);
//     printf("X dim of result is %d and Y dim is %d\n", sum.x, sum.y);
//     return 0;
// }

//  Create an array of complesx number with the help of the display
// function and take output from the user

// #include <stdio.h>
// typedef struct comples
// {
//     int real;
//     int complex;
// } comp;

// void display(comp c){

//     printf("the real part is  %d \n", c.real);
//     printf("the imaginary part is  %d \n", c.complex);
// }
// int main()
// {

//     comp cnums[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("enter the real value %d \n", i + 1);
//         scanf("%d", &cnums[i].real);
//         printf("enter the complex value %d \n", i + 1);
//         scanf("%d", &cnums[i].complex);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         display(cnums[i]);
//     }

//     return 0;
// } 

/*  Progroam to store the dates by using strucure and compare it with 
 another date */
// #include<stdio.h>

// typedef struct date{
//     int date;
//     int month; 
//     int year;
// }date;

// void display(date d){
//     printf("The date is: %d/%d/%d\n", d.date, d.month, d.year);
// }

// int dateCmp(date d1, date d2){
//     // Make decision on the basis of Year comparison
//     if(d1.year>d2.year){
//         return 1;
//     }
//     if(d1.year<d2.year){
//         return -1;
//     }

//     // Make decision on the basis of Month comparison
//     if(d1.month>d2.month){
//         return 1;
//     }
//     if(d1.month<d2.month) {
//         return -1;
//     }

//     // Make decision on the basis of Date comparison
//     if(d1.date>d2.date){
//         return 1;
//     }
//     if(d1.date<d2.date) {
//         return -1;
//     }
//     return 0;
// }
// int main(){
//     date d1 = {5, 11, 31};
//     date d2 = {5, 11, 31};
//     display(d1);
//     display(d2);
//     int a = dateCmp(d1, d2);
//     printf("Date Comparison function returns: %d", a);
//     return 0;
// } 





