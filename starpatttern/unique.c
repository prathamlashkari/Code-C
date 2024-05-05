#include <stdio.h>

void set(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void unique(int *arr, int n);
int main()
{

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    set(arr, n);
    printf("Unique elements of array: ");
    unique(arr, n);
    return 0;
}

void unique(int *arr, int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        c = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    c++;
                    break;
                }
            }
        }
        if (c == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

// 1 2 2 3 4 4
