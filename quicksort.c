#include <stdio.h>
#define MAX_NUM 100

int numbers[MAX_NUM];

void quickSort(int first, int last){
    int pivot;
    int i, j, temp;

    if (first < last){
        pivot = first;
        i = first;
        j = last;

        while (i < j){
            while (numbers[i] <= numbers[pivot] && i < last)
                i++;
            while (numbers[j] > numbers[pivot])
                j--;
            // number[i] >= number[pivot] > number [j]
            if (i < j){
                //make number[i] < number[pivot] <= number[j]
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }

        // in this positin , i >= j and number[i] > number[pivot] >= number[j]

        temp = numbers[pivot];
        numbers[pivot] = numbers[j];
        numbers[j] = temp;

        quickSort(first, j - 1);
        quickSort(j + 1, last);
    }
}
