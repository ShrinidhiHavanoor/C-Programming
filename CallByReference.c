#include <stdio.h>
#include <math.h>
void fun(int* x,int* y);
void main()
{
    int x=5,y=7;
    fun(&x,&y);
    printf("\ncallingThe value of x=%d and y=%d",x,y);
}
void fun(int* x,int* y)
{
    *x=7;*y=5;
    printf("called:-The value of x=%d and y=%d",*x,*y);
}