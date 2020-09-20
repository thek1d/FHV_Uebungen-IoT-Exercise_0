#include <stdio.h>
#include "statistic.h"

#define ARRAY_SIZE 10U

/* function prototypes */
static void Quick_Sort(int *array, int first, int last);

int main(int argc, char *argv[])
{
	int		 		  	 array[ARRAY_SIZE]  = {0, -3, 10, -10, 4, 5, 7, 2, 9, 1};
	STATISTICAL_VALUES_t statistical_values = {0, 0, 0.0};

	printf("\nPrinting unsorted array:\n");

	for(int i = 0; i < 10; i++)
		printf("%i, ",array[i]);

	if(Get_Statistical_Values(array, ARRAY_SIZE, &statistical_values))
	{
		printf("\n\n------------------------------------------\n");
		printf("minimum in array: \t%i\n", statistical_values.min);
		printf("maximum in array: \t%i\n", statistical_values.max);
		printf("mean from array:  \t%f\n", statistical_values.mean);
		printf("------------------------------------------\n\n");

		Quick_Sort(array, 0, ARRAY_SIZE - 1);

		printf("Printing sorted array:\n");

		for(int i = 0; i < ARRAY_SIZE; i++)
			printf("%i, ",array[i]);
	
		printf("\n\n");
	}
	else
	{
		printf("\n\n!!!Nullpointer execption!!!");
	}

	return 0;
}

void Quick_Sort(int *array, int first, int last)
{
	int i, j, pivot, temp;

	if(first < last)
	{
	      pivot = first;
	      i = first;
	      j = last;

	      while(i < j)
	      {
	         while(array[i] <= array[pivot] && i < last)
	            i++;

	         while(array[j] > array[pivot])
	            j--;

	         if(i < j)
	         {
	            temp 	 = array[i];
	            array[i] = array[j];
	            array[j] = temp;
	         }
	      }

	      temp 		   = array[pivot];
	      array[pivot] = array[j];
	      array[j] 	   = temp;

	      Quick_Sort(array,first,j-1);
	      Quick_Sort(array,j+1,last);

	 }

}

