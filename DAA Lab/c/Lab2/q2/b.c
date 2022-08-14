// ALGO-2 Consecutive integer algorthim
#include <stdio.h>
int count=0;

int main(){
    int a, b, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);

   for(int i =1; i <= a && i <= b; ++i)
   {    
        count++; 
        if(a%i==0 && b%i==0){             
            gcd = i; 
        }
    }
     printf("GCD of Two Numbers is: %d\nSteps taken is %d",gcd,count); 
    return 0;
}