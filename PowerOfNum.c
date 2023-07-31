#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,power;
    printf("enter the number n=");
    scanf("%d",&n);
    printf("\n");
    printf("enter the power i=");
    scanf("%d",&i);
    printf("\n");
    power=pow(n,i);
    printf("the power of the number is=%d",power);
    return 0;
}