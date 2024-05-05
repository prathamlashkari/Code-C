#include <stdio.h>
int main()
{

    int a, b, result=0;
    char opt;

    printf("\nEnter the first number:- ");
    scanf("%d", &a);
    printf("\nEnter the second number:- ");
    scanf("%d", &b);
    printf("Select the operators (+,-,*,/)to perforn an calculater:-\n ");
    scanf(" %c", &opt);
    if (opt == '+')
    {
        result = a + b;
        printf("\nAddition of is:- %d", result);
    }
    else if (opt == '-')
    {
        result = a - b;
        printf("\nSubtranction of %d", result);
    }
    else if (opt == '*')
    {
        result = a * b;
        printf("\nMultiplication of %d", result);
    }
    else if (opt == '/')
    {
        result = a / b;
        printf("\nDividing of %d", result);
    }
    else
    {
        printf("\nEvailid inpute");
    }

    return 0;
}

