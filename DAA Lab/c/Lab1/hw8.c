#include<stdio.h>
int main()
{
    int n,i,key=1;
    printf("Enter number of elements : ");
    scanf("%d",&n);
        
    int a[n];
    printf("Enter : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        key*=a[i];
    }
    
    for(i=0;i<n;i++)
    {
        a[i]=key/a[i];
        printf("%d ",a[i]);
    }
    return 0;
}