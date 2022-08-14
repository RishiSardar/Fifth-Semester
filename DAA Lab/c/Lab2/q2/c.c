// ALGO-3 middle school procedure 
#include <stdio.h>
int count=0;

int main(){
    int a, b, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    
    int i,c,ans=1,m=0,n=0,k=0; 
    c=a>=b?b:a;
    for(i=2;i<=c;i++)
    {
        count++;
        n=0,m=0; 
        if(a%i==0)
        { 
            m=1;
            a/=i;
        }
        if(b%i==0)
        { 
            n=1; 
            b/=i; 
        }
        if(n==1 && m==1)
        { 
            ans*=i; 
        }
        if(n==1 || m==1)
        { 
            i--; 
        }
    }
    gcd=ans; 
    printf("GCD of Two Numbers is: %d\nSteps taken is %d",gcd,count);
    
    return 0;
}