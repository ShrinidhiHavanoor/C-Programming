#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0;
    printf("enter n: ");
    scanf("%d",&n);
    for(;n!=0;i++)
    {
        n=n/10;
    }
    printf("%d",i);
    return 0;
}