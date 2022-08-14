//WAP to swap using pointers
#include<stdio.h>
void Swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

int main()
{
    int a=3,b=6;
    printf("before swap:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    Swap(&a,&b);

    printf("After swap:\n");
    printf("a=%d\n",a);
    printf("b=%d",b);

    return 0;
}