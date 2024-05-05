#include <stdio.h>

void set(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// void get(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

void dist(int *arr, int n);

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    set(arr, n);
    dist(arr,n);
    //get(arr,n);

    return 0;
}

void dist(int *arr, int n)
{
    int i,j;
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<i ; j++){
            if(arr[i] == arr[j]){
                break;
            }
        }
        if(i == j){
            printf("%d ",arr[i]);
        }
    }
}