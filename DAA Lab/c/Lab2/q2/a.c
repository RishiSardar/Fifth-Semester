// ALGO-1 Euclidean algorithm
#include <stdio.h>
int count=0;

int main(){
    int a, b, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    while(b)
    {
       count++;
       gcd = b; 
       b = a % b; 
       a = gcd;
    }
    
    printf("GCD of Two Numbers is: %d\nSteps taken is %d", a,count);
    return 0;
}