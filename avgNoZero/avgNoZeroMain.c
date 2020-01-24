/*
 * This program takes doubles as input and prints the quantity and average of
 * the inputted numbers.
 *
 * Compile with:
 * gcc -g -Wall HelloWorld.c -o HelloWorld
 *
 * @author:     Michael Peterson
 * Course:      Comp B13
 * Created on:  Jan 21, 2020
 * Source File: avgNoZeroMain.c
*/

#include <stdio.h>

int main(int argc, char **argv){
    double array [1000];
    int arraySize = 0;
    double input = 1;

    while (scanf("%lf", &input) == 1)
    {
        printf("Input: %lf\n",input);
        arraySize++;
    }
}