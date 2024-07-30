#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
void selectionsort(int A[size],int n)
{
    int i,j,temp,min;
    for(i=0;i<=n-2;i++)
    {
        min=i;
        for(j=i+1;j<=n-1;j++)
        {
            count++;
            if(A[j]<A[min])
                min=j;
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
}
int main()
{
    int A[size],n,i;
    printf("\n Enter the size of an array:");
    scanf("%d",&n);
    printf("\n Enter the elements of an array");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    selectionsort(A,n);
    printf("\n sorted elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\n Number of comparisons is %d\n",count);
    return 0;
}
