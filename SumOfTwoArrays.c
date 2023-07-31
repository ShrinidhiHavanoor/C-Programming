#include<stdio.h>
int main()
{
    int n,i;
    printf("-:PROGRAM TO PRINT THE SUM VALUE OF TWO ARRAYS:-\n");
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    printf("\nEnter the values of first array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nEnter the values second array:");
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("The sum value of two arrays at index %d is=%d\n",i,c[i]);
    }
}