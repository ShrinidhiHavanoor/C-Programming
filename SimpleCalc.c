#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,i;
    while(1)
    {
        printf("\n1.ADDITION\n");
        printf("2.substraction\n");
        printf("3.multiplication\n");
        printf("4.division\n");
        printf("enter your choice:\n");
        scanf("%d",&i);
        
        printf("enter two numbers:\n");
        
        switch(i)
        {
            case 1:
    scanf("%d %d",&a,&b);
            n=a+b;
            printf("ADDITION=%d",n);
            break;
            
            case 2:
    scanf("%d %d",&a,&b);
            n=a-b;
            printf("substraction=%d",n);
            break;
            
            case 3:
            
    scanf("%d %d",&a,&b);
            n=a*b;
            printf("multilication=%d",n);
            break;
            
            case 4:
            scanf("%d %d",&a,&b);
            n=a/b;
            printf("division=%d",n);
            break;
            
            default:
            {printf("invalid operation\n");
            break;}
        }
    }
}