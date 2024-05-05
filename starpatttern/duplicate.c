#include <stdio.h>

void set(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void duplicate(int *arr, int n);
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    set(arr, n);
    duplicate(arr, n);

    return 0;
}

void duplicate(int *arr, int n)
{
    int i, j, c = 0;
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
                break;
            }
        }
        if (c > 0)
        {
            printf("%d ", arr[i]);
        }
    }
}