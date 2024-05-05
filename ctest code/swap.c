#include <stdio.h>

int main()
{
    int a, b;
    // a = 6;
    // b = 4;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("The value of a is : %d and the value of b is: %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n");
    printf("\t The value after swaping is \n");
    printf("\n");
    printf("The value  of  a is : %d and the value of b is: %d \n", a, b);

    return 0;
}