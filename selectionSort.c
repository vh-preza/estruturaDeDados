#include <stdio.h>

int maiorN(int a[],int n)
{
    int maiorEle = 0;

    for(int i=1; i<n;i++)
    {
        if(a[i]>a[maiorEle])
        {
            maiorEle = i;
        }
    }

    return maiorEle;
}

void sort(int a[], int n)
{
    int maiorEle = 0, aux;
    
    for(int i=n; i>0; i--)
    {
        maiorEle = maiorN(a, i);

        aux= a[maiorEle];
        a[maiorEle] = a[i-1];
        a[i-1] = aux;
    }


}


int main()
{
    int a[5];

    printf("insira os valores da array\n");
    scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    
    sort(a, 5);

    printf("....\n....\n");

    for(int i=0; i<5;i++)
    {
        printf("%d\n", a[i]);
    }


    return 0;
}