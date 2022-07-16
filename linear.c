#include <stdio.h>
#include <stdlib.h>

int linear_search(int *arry, int size, int target)
{

   printf("inside linear search\n");  
   for (int index = 0 ; index < size; index++)
    {
        if (arry[index] == target)
        {
            printf("index=, %d\n", index);
            return index; 
        }      
          
    }
    return -1; 
   
}

int main()
{
  int *arry,size,target;
  int searched_element =0 ;

  printf("Enter the size of array\n");
  scanf("%d", &size); 

  arry = (int *)malloc(sizeof(int)* size);
  printf("Enter the element in the array\n");
  
  for (int index=0; index < size; index++)
    scanf("%d",&arry[index]);

printf("Enter the target element to search\n");
scanf("%d",&target);

 searched_element = linear_search(arry, size, target); 
 printf("Search element fount at index, %d \n", searched_element);


return 0;
}





