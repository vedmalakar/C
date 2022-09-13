
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define MAX 10

// Value in the array should not conatin maximun than lenght of array, So extra space is for this hash//
// Value in the array is positive
void sumPairInArray(int *a, int size, int sum)
{
   int index, temp=0;
   int hash[MAX]={0}; 

   for (index =0;index <size;index++)
   {
        temp = sum - a[index];
        if (temp >= 0 && hash[temp] == 1)
            printf("Pair with given sum %d is" "(%d,%d)\n", sum,a[index],temp);
        hash[a[index]] =1 ;    


   }
    
}




int main()
{
  int *arry,size,target;
  int sum = 0 ;
  int SumPairInArray = 0;
  
  printf("Enter the size of array\n");
  scanf("%d", &size); 

  printf("Enter the Sum value\n");
  scanf("%d",&sum);

  arry = (int *)malloc(sizeof(int)* size);
 
  
  for (int index=0; index < size; index++)
   {
    printf("Enter the element in the array: %d is:",index);
    if (arry[index] < sum )
    scanf("%d",&arry[index]);
    else
    printf("not allowed to enter the value i.e gretaer than sum or any negative values");
   } 


sumPairInArray(arry, size, sum); 
 


return 0;
}