#include<stdio.h>
#include<stdint.h>

int create_array(int n)
{

    uint8_t a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Type the %d element of the array: ", i);
        scanf("%d", &a[i]);
    }

    printf("Array =  ");

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("[ %d,", a[i]);
        }
        else if ( i == (n-1))
        {
            printf(" %d ]", a[i]);
        }
        else 
        {
            printf(" %d,", a[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        
        printf("\nThe address of elments %d is: %d\n", a[i], &a[i]);
    }
    
}

int main()
{
    int n = 0;

    do
    {
        printf("Type the number of element of array: ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 16 );

    create_array(n); 

    return 0;
}
