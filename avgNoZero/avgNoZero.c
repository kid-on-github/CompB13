/**
* This function returns the average of the numbers in array,
* not counting zeroes. Returns zero if size <= 0.
*
* @param array an array of doubles
* @param size the number of doubles in array to average
* @return the average of the numbers in array, not counting zeroes,
* or zero if size <= 0.
*/

double avgNoZero(double array[], int size){
    if (size <= 0){return 0;}

    double sum = 0;
    int numberOfZeros = 0;

    // get a sum of all the numbers in the array
    for (int i=0; i < size; i++){
        sum += array[i];
        if (array[i] == 0){ numberOfZeros++; }
    }

    return sum / (size-numberOfZeros);
}