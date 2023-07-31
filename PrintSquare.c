#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("PRINT A SQUARE");
    printf("enter the number n\n");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {printf("*");}
        printf("\n");
    }
    return 0;
}