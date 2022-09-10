#include <stdio.h>
#include <stdlib.h>

int trap (int *array , int n )
{

        int left = 0;
        int right = n-1;
        int sum = 0 ; 
        int leftbar = array[0];
        int rightbar = array[n-1];
    
        while (left<= right )
        {
            
            //which bar is limiting bar ?
            //left,right ?
            if (leftbar < rightbar)
                {
                   if (array[left]> leftbar)
                    leftbar = array[left];
                    else 
                    {

                        sum += leftbar - array[left];
                        left++;
                    }  

                }
           
            else
            {
                    if (array[right]> rightbar)
                    rightbar = array[right];
                    else 
                    {

                        sum += rightbar - array[right];
                        right--;
                    }  



            }
              

        }


      return sum;      
}



int main()
{
  int *arry,size,target;
  int sum_of_water_trap =0 ;

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
