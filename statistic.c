#include "statistic.h"

int Get_Statistical_Values(int *array, unsigned int size, STATISTICAL_VALUES_t *values)
{
	if(array && values)
	{
		values->min  = Find_Minimum(array, size);
		values->max  = Find_Maximum(array, size);
		values->mean = Calc_Mean   (array, size);

		return 1;
	}
	else
		return 0;			// Nullpointer
}

int Find_Minimum(int *array, unsigned int size)
{
	int min = array[0];

	for (int i = 1; i < size; i++)
	  if (array[i] < min)
	      min = array[i];

	return min;
}

int Find_Maximum(int *array, unsigned int size)
{
	int max = array[0];

	for (int i = 1; i < size; i++)
		if (array[i] > max)
			max = array[i];

	return max;
}

float Calc_Mean(int *array, unsigned int size)
{
	int sum = 0;

	for(int i= 0; i < size; i++)
		sum += array[i];

	return sum/(float)size;
}
