#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,last;
    printf("enter the number you want to replicate:");
    scanf("%d",&n);
    while(n!=0)
    {
        last=n%10;
        n=n/10;
        sum=sum*10+last;
    }
    printf("the replicated number=%d",sum);
}