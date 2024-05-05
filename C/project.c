// 1 . program to  no is greater
//  # include <stdio.h>
//  int main(){
//       int a,b;
//       printf ("enter the value of a\n");
//       scanf("%d", &a);
//       printf ("enter the value of b\n");
//       scanf("%d", &b);

//      if (a>=b) {
//          printf (" the largest no is :%d \n",a);

//      }
//      else {
//          printf (" the largest no is : %d \n ",b);
//      }

//      return 0; }

// 2. make a program to show the largest no in among three no
// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("enter the value of a \n");
//     scanf("%d", &a);
//     printf("enter the value of b \n");
//     scanf("%d", &b);
//     printf("enter the value of c \n");
//     scanf("%d", &c);

//     if (a > b)
//     {
//         printf(" the largest no is :%d \n", a);
//     }
//     else if (b>c){
//         printf("the largest no is %d \n ",b);
//     }
//     else {
//         printf("the largest no is %d \n",c);
//     }
//     return 0;
// }

// 3. make a program to know that the user is teenager or  not
// # include <stdio.h>

// int main(){

//      int age;
//      printf("inter your age \n");
//      scanf("%d", & age);

//     if ((12<age) && (age<18)){
//         printf("your are a teenager  \n");
//     }

//      return 0;

// }
// 4  . take number as input or show which is odd or even
// # include <stdio.h>

// int main(){

//      int a ;
//      printf("enter the value  \n");
//      scanf ("%d",& a);
//      if (a%2==0){
//          printf("the no is odd ");
//      }
//      else{
//          printf("the no is even ");
//      }
//      return 0;

// }

// 5 . program to show that given year is a leap year or not
// #include <stdio.h>

// int main()
// {

//     int year;
//     printf("enter the year \n");
//     scanf("%d", &year);

//     if (year % 4 == 0 || year % 100 == 0 || year % 400 == 0)
//     {
//         printf("the year is a leap year \n");
//     }
//     else
//     {
//         printf("the given year is not a leap year\n");
//     }

//     return 0;
// }

// 6. Program to find out citizen adult or teen
// #include <stdio.h>

// int main()
// {

//     int age;
//     printf("enter your age \n");
//     scanf("%d", &age);

//     if (age >=0 && age<=0){
//         printf ("you are in an infant group");
//     }
//     else if (age >= 13 && age<=19){
//         printf ("you are in teenager group");
//     }
//     else if (age>=60){
//         printf ("you are in adult group");
//     }
//     else {
//         printf ("you are in other group");
//     }

//     return 0;
// }

// 7.  To apply gst on the price given by the user
//  # include <stdio.h>

// int main(){

//      int price,gst ;
//      printf ("enter the price of the product : \n");
//      scanf("%d", &price);

//      printf("enter the value of gst applied on the product :");
//      scanf("%d", &gst);

//      printf("the real price of your product including gst is: %d\n",price+gst);

//      return 0;

// }
// 8. conver meter into centimeter

//# include <stdio.h>
// int main(){

//      int a ;
//      printf("enter the number in meter: \n");
//      scanf("%d",&a);
//      printf("the cnoversion of number in meter to centimeter is : meter %d\n", a * 100);
//      return 0;

// }

// 9. write a program to convert into inches to feet
// # include <stdio.h>

// int main(){

//      float a ;
//      printf("enter the number in inches : \n");
//      scanf("%f",&a);
//      printf("the cnoversion of number in inches to feet  is :  %f\n", a/12);
//       return 0;

// }

// 10 . print the area and perimeter of the circle by its radius
// # include <stdio.h>

// int main(){

//       float r , pie = 3.14 ;
//       printf ("enter the value of the radius \n");
//       scanf ("%f" , &r);
//       printf("the perimeter of the circle is : %f\n", 2*pie*r*r);
//       printf("the area of the circle is : %f\n", pie*r*r);
//       return 0;

// }

// 11. make a program to print the natural number from 10 t0 20
//  # include <stdio.h>

// int main(){

//      int i = 0,n ;
//      printf("enter the value of n \n");
//      scanf("%d", &n);
//      while (n<=20){
//          if (n>=10){
//          printf ("%d \n ", n );
//          n++;
//          }
//      }
//      return 0;

// }

// 12. Write a program to show that letter is vowel or character
// # include <stdio.h>

// int main(){

//      char ch ;
//      printf("enter the character \n");
//      scanf("%c", & ch);

//      while(ch = 0){
//          if (ch = 'a','e','i','o','u'){
//          printf("it is a vowel %c\n",ch);
//          }
//      }
//      printf("the character is cosonanat %c \n ", ch);

//      return 0 ;
// }

// 13. Make a program to make a basic calculator for 4 operator
//  #include <stdio.h>
// int main() {
//     char operator;
//     double first, second;
//     printf("Enter an operator (+, -, *,): ");
//     scanf("%c", &operator);
//     printf("Enter two operands: ");
//     scanf("%lf %lf", &first, &second);

//     switch (operator) {
//     case '+':
//         printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
//         break;
//     case '-':
//         printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
//         break;
//     case '*':
//         printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
//         break;
//     case '/':
//         printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
//         break;
//         // operator doesn't match any case constant
//     default:
//         printf("Error! operator is not correct");
//     }

//     return 0;
// }

// #include <stdio.h>
// void printtable(int *table, int num);
// int main()
// {

//     int num, table;
//     printf("Enter the number \n");
//     scanf("%d", &num);
//     printtable(&table, num);
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

// # include <stdio.h>

// int main(){

//      int table[3][10];

//      for(int i=0; i<10 ; i++){
//          table[0][i]= (i+1)  *2;
//      }
//      for(int i=0; i<10 ; i++){
//          printf("2X%d = %d \n", i+1 , table[0][i]);
//      }
//       for(int i=0; i<10 ; i++){
//          table[1][i]= (i+1)  *7;
//      }
//      for(int i=0; i<10 ; i++){
//          printf("7X %d = %d \n", i+1 , table[1][i]);
//      }
//       for(int i=0; i<10 ; i++){
//          table[2][i]= (i+1)  *9 ;
//      }
//      for(int i=0; i<10 ; i++){
//          printf("9X%d = %d \n", i+1 , table[2][i]);
//      }
//      return 0;

// }

// #include <stdio.h>
// void printtable(int *arr, int num, int n);
// int main()
// {

//     int arr[4][10];
//     printtable(arr[0], 2, 10);
//     printtable(arr[1], 7, 10);
//     printtable(arr[2], 9, 10);
//     printtable(arr[3], 6, 10);
//     return 0;
// }
// void printtable(int *arr, int num, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = num * (i + 1);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d X %d = %d \n", num , i + 1, arr[i]);
//     }
//     printf("*********************************\n\n");
// // }
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
// #include <stdio.h>
// #include <string.h>
// int present(char st[], char n);
// int main()
// {
//     char st[] = "pratham";
//     present(st, 'p');
//     return 0;
// }
// int present(char st[], char n)
// {
//     char *pt = st;
//     while (*pt != '\0')
//     {
//         if (*pt == n)
//         {
//             printf("The given character is present \n");

//         }   pt++;
//     }
// }

//  to make a program to convert cgpa to percentage
// #include <stdio.h>

// int main()
// {
//      float cgpa, percentage;
//      printf("enter your cgpa \n");
//      scanf("%f", &cgpa);
//      percentage = cgpa * 9.5;
//      printf("your percentage is %f % \n", percentage);
//      return 0;
// }

// Program to calculat cgpa and percentage both ;

// #include <stdio.h>
// int main()
// {
//     float sub1, sub2, sub3, sub4, sub5, cgpa, percentage, total;
//     printf("enter the marks of the subject1 :");
//     scanf("%f", &sub1);
//     printf("enter the marks of the subject2 :");
//     scanf("%f", &sub2);
//     printf("enter the marks of the subject3 :");
//     scanf("%f", &sub3);
//     printf("enter the marks of the subject4 :");
//     scanf("%f", &sub4);
//     printf("enter the marks of the subject5 :");
//     scanf("%f", &sub5);
//     total = sub1 + sub2 + sub5 + sub3 + sub4;
//     percentage = total / 5;
//     cgpa = percentage / 9.5;
//     printf("you got   %f %, percent  \n", percentage);
//     printf("you got   %f cgpa  \n", cgpa);

//     return 0;
// }
