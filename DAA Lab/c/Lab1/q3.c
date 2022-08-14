//q3 even numbers followed by odds
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n;
  printf("Enter the number of elements :");
  scanf("%d",&n);
  int *arr = (int*)malloc(n*sizeof(int));
  
  printf("Enter the element of index :");
  for(int i=0; i<n; i++)
    {
      scanf("%d",&arr[i]);
    }

    int even = 0,odd = 0;
    for(int i=0; i<n; i++)
    {
      if(arr[i]%2 == 0)
        even++;
      else
        odd++;
    }

    int *ev = (int*)malloc(even*sizeof(int));
    int *od = (int*)malloc(odd*sizeof(int));
    int even_counter = 0,odd_counter = 0;
    for(int i=0; i<n; i++)
    {
      if(arr[i]%2 == 0){
        ev[even_counter] = arr[i];
        even_counter++;
      }
      else{
        od[odd_counter] = arr[i];
        odd_counter++;
      }
    }

    int m = 0;
    for(int i=0;i<even_counter;i++)
    {
        arr[m] = ev[i];
        m++;
    }

    for(int i=0;i<odd_counter;i++)
    {
      arr[m] = od[i];
      m++;
    }

    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}