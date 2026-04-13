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
 * @file static.h 
 * @brief Define headers for WK1 Peer Assigment
 *
 * You are to write a couple of functions that can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set. 
 *
 * @author Augustine Pimentel
 * @date 03/16/2026
 *
 */

#ifndef STATS_H
#define STATS_H

#include <stdio.h>

/* Size of dataset */
#define SIZE 40

/* Prints the statistics of the dataset */
void print_statistics(unsigned char *array, unsigned int length);

/* Prints the array */
void print_array(unsigned char *array, unsigned int length);

/* Returns the median value of the dataset */
unsigned char find_median(unsigned char *array, unsigned int length);

/* Returns the mean value of the dataset */
unsigned char find_mean(unsigned char *array, unsigned int length);

/* Returns the maximum value */
unsigned char find_maximum(unsigned char *array, unsigned int length);

/* Returns the minimum value */
unsigned char find_minimum(unsigned char *array, unsigned int length);

/* Sorts array from largest to smallest */
void sort_array(unsigned char *array, unsigned int length);

#endif