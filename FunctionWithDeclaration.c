#include<stdio.h>
#include<math.h>
void prime(int n)//function arguments
{
    int i,c=1;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){
            c=0;
            break;
        }
    }if(c==0)
        printf("%d is not a prime number\n",n);
        else printf("%d is a prime number\n",n);
}
void main(int x,int y)//Here x and y are function parameters
{
    prime(4);
}