#include <stdio.h>
#include <math.h>
void prime()
{
    int n,i,c=1;
    printf("Enter a number to check whelther it is a prime");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c=0;
            break;
        }
    }
    if(c==0)
    printf("Not Prime");
    else
    printf("Prime");
}
void main()
{
    prime();
}