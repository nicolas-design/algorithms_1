//
// Created by gadne on 28.05.2022.
//

#ifndef ALG_ALGORITHMS_H
#define ALG_ALGORITHMS_H

#include "ware.h"

class Algorithms {
public:
    void quickSort(Ware* arr[], int start, int end);
    int teilen(Ware* arr[], int start, int end);

    void bubbleSort(Ware* array[], int array_size);

    void merge(Ware* array[], int left, int middle, int right);
    void mergeSort(Ware* array[], int left, int right);

    void insertionSortBase(Ware* array[], int array_size, bool asc);
    void insertionSortBase5(Ware* array[], int array_size, bool asc);
};


#endif //ALG_ALGORITHMS_H
