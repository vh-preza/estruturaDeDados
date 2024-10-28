#include <stdio.h>

void sort(int a[], int n)
{
    int aux = 0;
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if( a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}


int main()
{
    int a[5];

    printf("insira os valores da array\n");
    scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);

    sort(a, 5);

    for(int i=0; i<5;i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}