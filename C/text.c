#include <stdio.h>

void setdata(int n, int a[])
{
    printf("Enter the elemnts of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void getdata(int n, int a[])
{
    printf("The elemnts of the array is: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", a[j]);
    }
    printf("\n");
}

void bubble(int n, int a[])
{
    int swa ; 
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = 0; k < n - 1; k++)
        {
            if (a[k] > a[k + 1])
            {
                swa = a[k];
                a[k] = a[k+1];
                a[k+1] = swa ;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    setdata(n, a);
    getdata(n, a);
    printf("After the sortion of the array is: ");
    bubble(n,a);
    getdata(n, a);

    return 0;
}