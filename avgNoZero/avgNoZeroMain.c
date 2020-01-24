/*
 * This program takes doubles as input and prints the quantity and average of
 * the inputted numbers.
 *
 * Compile with:
 * gcc -Wall avgNoZeroMain.c avgNoZero.c -o avgNoZero
 *
 * @author:     Michael Peterson
 * Course:      Comp B13
 * Created on:  Jan 21, 2020
 * Source File: avgNoZeroMain.c
*/

#include <stdio.h>
#include "avgNoZero.c"

int main(int argc, char **argv){
    double array [1000];
    int arraySize = 0;
    double input;

    while (arraySize < 1000 && scanf("%lf", &input) == 1){
        array[arraySize] = input;
        arraySize++;
    }

    printf("Average = %lf\ncount = %i", avgNoZero(array,arraySize), arraySize);
}