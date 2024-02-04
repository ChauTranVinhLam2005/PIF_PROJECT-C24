#include<stdio.h>
int a[100], n = 0;
float average(int a[], int n) 
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    float ave = ((1.0/n)*(sum));
    printf("%.3f", ave);
}
int main()
{
    int a[100];
    
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

    average(a,n);

    return 0;
    
}