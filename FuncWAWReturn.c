#include<stdio.h>
int sum(int ,int );
int main()
{
    int x,y,c;
    printf("Entert x&y\n");
    scanf("%d %d",&x,&y);
    c=sum(x,y);
    printf("Sum=%d",c);
}
int sum(int a,int b)
{
    int s=0;
    s=a+b;
    return s;
}