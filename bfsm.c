#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count;
int bfsm(char T[20],char P[10])
{
    int i,j,n,m;
    n=strlen(T);
    m=strlen(P);
    for(i=0;i<=n-m;i++)
    {
        j=0;
        while(j<m&&P[j]==T[i+j])
            {
                j=j+1;
                count++;
            }
        count++;
        if(j==m)
            return i;
    }
}
int main()
{
    char T[20],P[10];
    int flag;
    printf("\n Read text\n");
    scanf("%s",T);
    printf("\n Read pattern\n");
    scanf("%s",P);
    flag=bfsm(T,P);
    if(flag==-1)
        {
            printf("\nPattern not found");
            printf("\n Number of comparions is %d",count);
        }
    else
        {
            printf("\nPattern found at %d location",flag+1);
            printf("\n Number of comparions is %d",count-1);
        }

        return 0;
}
