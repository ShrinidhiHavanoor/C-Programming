#include <stdio.h>
void main()
{
    int n,i,c=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("The factors %d are:\n",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        printf(" %d , ",i);
        }
    }
}