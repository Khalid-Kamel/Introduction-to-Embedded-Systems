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
 * @file stats.h 
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
#ifndef __STATS_H__
#define __STATS_H__
#endif


void print_array(unsigned char *test);

/**
 * @brief Given an array of data and a length, prints the array to the screen.
 *
 * This function prints the array to the screen.
 *
 * @param *test  Pointer to The array of given length and data.
 *
 * @return void
 */

int find_maximum (unsigned char *test);

/**
 * @brief Given an array of data and a length, returns the maximum.
 *
 * This function returns the maximum value of array's elements.
 *
 * @param *test  Pointer to The array of given length and data.
 *
 * @return The maximum value of the array.
 */

unsigned char find_minimum(unsigned char *test);

/**
 * @brief Given an array of data and a length, returns the minimum.
 *
 * This function returns the minimum value of array's elements.
 *
 * @param *test  Pointer to The array of given length and data.
 *
 * @return The maximum value of the array.
 */

float find_mean(unsigned char *test);

/**
 * @brief Given an array of data and a length, returns the mean.
 *
 * This function returns the mean value of array's elements.
 *
 * @param *test  Pointer to The array of given length and data.
 *
 * @return The mean value of the array.
 */

 void sort_array(unsigned char *test);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest.
 *
 * This function sorts the array from largest to smallest.
 *
 * @param *test  Pointer to The array of given length and data.
 *
 * @return void
 */


float find_median(unsigned char *test);

/**
 * @brief Given an array of data and a length, returns the median.
 *
 * This function returns the mean value of array's elements.
 *
 * @param *test  Pointer to The array of given length and data.
 *
 * @return The median value of the array.
 */



void print_statistics(unsigned char*test);

 /**
 * @brief prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function prints the statistics of an array including minimum, maximum, mean, and median. 
 *
 * @param *test  Pointer to The array of given length and data.
 *
 * @return void
 */

