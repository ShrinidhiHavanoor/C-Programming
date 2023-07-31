#include <stdio.h>
int main()
{
    int n,i,j;
    int number=1;
    printf("Enter the length of pyrmid:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
       printf("%d",number);
       printf(" ");
       number++;
        }
        printf("\n");
    }
    return 0;
}