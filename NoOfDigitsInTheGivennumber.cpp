#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,c=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        n=n/10;
        c++;
    }
    printf("The number of digits i the given number:%d\n",c);
}