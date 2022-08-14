//error output
#include<stdio.h>

void swap(int *x, int *y)
{
    int *temp;
    *temp=*x;
    *x=*y;
    *y=*temp;
}

int main()
{
    int a=10,b=20,c=30;
    printf("%d %d %d",a,b,c);
    swap(&b, &c);
    swap(&a, &b);

    printf("\n%d %d %d",a,b,c);

    return 0;

}