#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,mult;
    printf("PROGRAM TO PRINT A MULTIPLICATION TABLE\n");
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("\nTHE TABLE OF THE GIVEN NUMBER IS:\n");
    for(i=1;i<=10;i++)
    {
        mult=n*i;
        printf("%d*%d=%d\n",n,i,mult);
    }
}