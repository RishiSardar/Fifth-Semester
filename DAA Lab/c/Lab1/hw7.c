#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int a[n];
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nBefore swapping : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nAfter swapping : ");

        if(n%2==0)
        {
            for(i=0;i<n;i+=2)
            {
            int temp;
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;   
            }         
        }
        else
        {  
            for(i=0;i<n-1;i+=2)
            {
            int temp;
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;   
            }

        }
        
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}