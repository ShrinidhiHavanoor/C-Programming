#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=1;
    printf("enter the number to check if it is prime\n");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){
            c=0;
            break;
        }
    }if(c==0)
        printf("%d is not a prime number\n",n);
        else printf("%d is a prime number\n",n);
        return 0;
}