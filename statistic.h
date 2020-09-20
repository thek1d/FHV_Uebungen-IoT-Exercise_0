/*
 * statistic.h
 *
 *  Created on: Sep 18, 2020
 *      Author: thek1d
 */

#ifndef STATISTIC_H_
#define STATISTIC_H_

typedef struct STATISTICAL_VALUES
{
	int    min;
	int    max;
	float  mean;
} STATISTICAL_VALUES_t;

/* function prototypes */
int    Get_Statistical_Values (int *array, unsigned int size, STATISTICAL_VALUES_t *values);
int    Find_Minimum			  (int *array, unsigned int size);
int    Find_Maximum			  (int *array, unsigned int size);
float  Calc_Mean   			  (int *array, unsigned int size);

#endif /* STATISTIC_H_ */
