#include <stdio.h>

int main()
{

    int rem, n, arr[10], i = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n)
    {
        rem = n % 2;
        n = n / 2;
        arr[i] = rem;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }

    return 0;
}