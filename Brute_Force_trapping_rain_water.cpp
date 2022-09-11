#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int trap(int *a, int n)
{
    
    int res  =  0;
    int left = 0;
    int right = 0;
    int min_n = 0;
    for (int i =1; i<n; i++)
    {
        for (int j =0; j<i; j++)
            left = max(left,a[j]);

        for (int j = i+1; j<n; j++)
            right = max(right,a[j]);
    
        min_n = std::min(left,right);
        res = res + min_n - a[i]; 
    }
    return res;
}




int main()
{
  int *arry,size,target;
  int sum_of_water_trap = 0 ;

  printf("Enter the size of array\n");
  scanf("%d", &size); 

  arry = (int *)malloc(sizeof(int)* size);
  printf("Enter the element in the array\n");
  
  for (int index=0; index < size; index++)
    scanf("%d",&arry[index]);


 sum_of_water_trap = trap(arry, size); 
 printf("sum of trapped water , %d is \n", sum_of_water_trap);


return 0;
}