#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("RIGHT ANGLED TRIANGLE 180 ROTATION\n");
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
        }
        return 0;
}