#include<stdio.h>
#include<stdlib.h>
#define size 100
int count;
void merge(int a[size],int l,int m,int r)
{
    int i,j,k,b[size];
    i=l;
    j=m+1;
    k=l;
    while((i<=m) && (j<=r))
    {
        count++;
        if(a[i]<a[j])
        {
            b[k++]=a[i++];
        }
        else
        {
            b[k++]=a[j++];
        }
        }

      while(i<=m)
        b[k++] = a[i++];
       while(j<=r)
         b[k++] = a[j++];
       for(i=l;i<=r;i++)
           a[i]=b[i];
       }
 void mergesort(int a[size],int l,int r)
 {
     int m;
     if(l<r)
     {
         m=(l+r)/2;
         mergesort(a,l,m);
         mergesort(a,m+1,r);
         merge(a,l,m,r);
     }
 }
 int main()
 {
     int i,j,n,a[size];
     printf("\n enter no. of elements:");
     scanf("%d",&n);
     printf("\n enter elements:\n");
     for(i=0;i<n;i++)
         scanf("%d",&a[i]);
     mergesort(a,0,n-1);
     printf("\n sorted elements");
     for(i=0;i<n;i++)
        printf("%d\n",a[i]);
     printf("total no of comparisons=%d\n",count);
     return 0;
 }

