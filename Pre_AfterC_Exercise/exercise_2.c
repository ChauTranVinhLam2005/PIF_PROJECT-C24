#include<stdio.h>

int a[100], n;

int max(int a[], int n)
{
    int max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("The max value is: %d\n", max);
}
int min(int a[], int n)
{
    int min = a[0];

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }

    printf("The min value is: %d", min);
}
int main()
{

    do
    {
        printf("Type the number of element of array: ");
        scanf("%d", &n);
    } while (n <= 5);

    for (int i = 0; i < n; i++)
    {
        printf("Type the %d element: ", i);
        scanf("%d", &a[i]);
    }

    max(a,n);
    min(a,n);

    return 0;
    
}