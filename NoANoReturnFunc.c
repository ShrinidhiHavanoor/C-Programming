#include <stdio.h>
void sum(void);
void main()
{
    sum();
}
void sum()
{
    int a,b,sum;
    printf("Enter te value sof a & b\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}