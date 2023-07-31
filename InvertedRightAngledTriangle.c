#include<stdio.h>
#include<math.h>
int main()
{
    int n,j,i;
    printf("INVERTED RIGHT ANGLED TRIANGLE");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
         printf("*");
        }
        printf("\n");
    }
}
         
         /*OR*/
         
         
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("INVERTED RIGHT ANGLED TRIANGLE");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}