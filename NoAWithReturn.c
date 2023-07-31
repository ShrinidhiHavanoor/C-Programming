#include <stdio.h>
void sum(void);
void main()
{
    void c;
    c=sum();
    printf("sum=%d",c);
}
void sum()
{
    int a,b,sum;
    printf("Enter te values of a & b\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    return sum;
}