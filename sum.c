#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n=5,k=1;
    for(i=1;i<=n;i++)
    {
       for(j=n;j>=i;j--)
       {
        printf("%d ",j);
        }
        for(j=1;j<i;j++)
        printf("    ");
        for(j=i;j<=n;j++)
        printf("%d ",j);
        printf("\n");
    }
}