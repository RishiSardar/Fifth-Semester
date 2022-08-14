#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
    double time=0.0;
    clock_t begin=clock();
    int num, div, flag;
    printf("Enter your number:");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Zero is neither prime nor composite");
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        
        if (num % i == 0)
        {
            printf("Not prime\n");
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 0)
        printf("Prime\n");
    clock_t end=clock();
    time+=(double)(end-begin)/CLOCKS_PER_SEC;
    printf("\n\nTime elapsed: %f s",time);    
    return 0;
}