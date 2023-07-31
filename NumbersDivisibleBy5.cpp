#include <stdio.h>
#include <math.h>
void numb(int );//To find the number of numbers divisible by 5
void divi(int );//To print the numbers divisible by 5
void main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    numb(n);
    divi(n);
}
void numb(int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(i%5==0)
        c++;
    }
    printf("There are %d numbers divisible by 5 till n",c);
}
void divi(int n)
{
    printf(" They are:\n");
    for(int i=0;i<n;i++)
    {
        if(i%5==0)
        printf("%d\n",i);
    }
}