#include<stdio.h>
    
 void functionA(int n, int m[n][n])
 {
    int i,j,count=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(m[i][j]!=0)
            count++;
        }
    }
    printf("\nTotal number of non zero numbers : %d",count);

}

void functionB(int n, int m[n][n])
{
    int i,j,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j>i){
                sum+=m[i][j];
            }
        }
        
    }
    printf("\nLeading diagonal sum = %d\n",sum);

}

void functionC(int n, int m[n][n])
{
    int i,j;
    printf("\nMinor diagonal : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j>=3)
            printf("%d ",m[i][j]);
        }
    }

}

void functionD(int n, int m[n][n])
{
    int i,j,prod=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==i)
            {
                prod*=m[i][i];
            }
        }
        
    }printf("\nProduct of diagonal elements : %d\n",prod);


}


int main()
{
    int m[3][3],i,j;
    
    printf("Enter the elements : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    printf("\nMatrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    functionA(3,m);
    functionB(3,m);
    functionC(3,m);
    functionD(3,m);

    return 0;
}
