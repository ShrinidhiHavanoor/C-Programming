#include<stdio.h>
void main()
{
    int n,i;
    int even=0,odd=0;
    printf("-:PROGRAM TO PRINT THE TOTAL EVEN AND ODD NUMBERS:-\n");
    printf("Enter the total numbers used:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values of the array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        even=even+1;
        else
        odd=odd+1;
    }
    printf("\nEven numbers=%d",even);
    printf("\nOdd numbers=%d",odd);
}