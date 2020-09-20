/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief gets the maximum, minimum, mean, and median of
 * the data set and reorder this data set from large to small.
 *
 * This program can analyze an array of unsigned char data items
 * and report analytics on the maximum, minimum, mean, and median of
 * the data set. In addition,it reorders this data set
 * from large to small. All statistics are rounded down to the 
 * nearest integer. After analysis and sorting is done, it prints
 * that data to the screen in nicely formatted presentation. 
 * 
 * @author Khalid Kamel
 * @date   14/8/2020
 *
 */

/* Preprocessors*/

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE  40



/*The main function*/
int main() {

  unsigned char test[40] =   { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  
  print_array(test);
  print_statistics(test);

}




/* Functions Definitions*/

/*Given an array of data and a length, prints the array to the screen*/

void print_array(unsigned char *test)
{
	unsigned char i;
	printf("\nArray's Elements are:\n---------------------\n\n");
	for(i=0;i<SIZE;i++)
	{	
		printf("%d\t", test[i]);
	}

}


/*Given an array of data and a length, returns the maximum*/

int find_maximum (unsigned char*test)
{
	unsigned char i;

	int Maximum= test[0];
	for(i=1;i<SIZE;i++)
    {	
    	if(test[i]>Maximum)
        	Maximum = test[i];
    }
	
	return Maximum;
}


/*Given an array of data and a length, returns the minimum*/

unsigned char find_minimum(unsigned char *test)
{
	unsigned char i;
	unsigned char Minimum= test[0];
	for(i=1;i<SIZE;i++)
    {
    	if(test[i]<Minimum)
        	Minimum = test[i];
    }
	return Minimum;

}

/*Given an array of data and a length, returns the mean*/

float find_mean(unsigned char*test)
{	
	unsigned char i;
	float Mean=0;
	unsigned int Sum=0;
	for (i=0;i<SIZE;i++)
	{	
		Sum=Sum+test[i];
	}

	Mean=Sum/SIZE;
	return Mean;

}


 /*Given an array of data and a length, sorts the array from largest to smallest*/
 
 void sort_array(unsigned char *test)
{ 
    
    int i, j; 
    int temporary;
    
    for(i=0; i<SIZE; i++)
    {
        for(j=i+1; j<SIZE ; j++)
        {
            if(test[i]<test[j])
            {
                temporary  = test[i];
                test[i]    = test[j];
                test[j]  = temporary;
            }
        }
    
   }
}
	

/*Given an array of data and a length, returns the median value */

float find_median(unsigned char *test)
{
    sort_array(test);
    float median=0;
    
    // if number of elements are even
    if(SIZE%2 == 0)
        median = (test[(SIZE-1)/2] + test[SIZE/2])/2.0;
    // if number of elements are odd
    else
        median = test[SIZE/2];
    
    return median;
}



/*A function that prints the statistics of an array including minimum, maximum, mean, and median.*/

void print_statistics(unsigned char*test)
{
    printf("\n\nArray's statistics:\n-------------------\n");
    printf("\nThe Maximum Value is: %d",find_maximum (test));
    printf("\nThe Minimum Value is: %d",find_minimum (test));
    printf("\nThe Mean Value is: %0.1f",find_mean (test));
    printf("\nThe Median is: %0.1f",find_median (test));

}