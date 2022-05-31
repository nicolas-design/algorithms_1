//
// Created by gadne on 28.05.2022.
//

#include "algorithms.h"


using namespace std;

int Algorithms::teilen(Ware* arr[], int start, int end)
{
    //inspo von: https://www.geeksforgeeks.org/cpp-program-for-quicksort/

    Ware* teilen = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i]->getSeriennummer() <= teilen->getSeriennummer())
            count++;
    }


    int teilIndex = start + count;
    swap(arr[teilIndex], arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < teilIndex && j > teilIndex) {

        while (arr[i]->getSeriennummer() <= teilen->getSeriennummer()) {
            i++;
        }

        while (arr[j]->getSeriennummer() > teilen->getSeriennummer()) {
            j--;
        }

        if (i < teilIndex && j > teilIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return teilIndex;
}

void Algorithms::quickSort(Ware* arr[], int start, int end)
{

    // base case
    if (start >= end)
        return;

    // partitioning the array
    int p = teilen(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, end);
}


void Algorithms::bubbleSort(Ware* array[], int array_size) {
    bool swapped = false;
    do {
        swapped = false;
        for(int i=0; i<array_size-1;i++){
            if(array[i]->getGewicht() > array[i+1]->getGewicht()){
                Ware* temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swapped = true;
            }
        }
    } while (swapped == true);

}


void Algorithms::merge(Ware* array[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    Ware* leftArray[n1];
    Ware* rightArray[n1];

    for(int i= 0; i < n1; i++) {
        leftArray[i] = array[left + i];
    }
    for(int j = 0; j < n2; j++) {
        rightArray[j] = array[middle + j + 1];
    }

    int k = 0, l = 0, m = left;
    while(k < n1 && l < n2){
        if(leftArray[k]->getBezeichnung().front() <= rightArray[l]->getBezeichnung().front()) {
            array[m] = leftArray[k];
            k++;
        } else {
            array[m] = rightArray[l];
            l++;
        }
        m++;
    }

    while(k<n1){
        array[m] = leftArray[k];
        k++;
        m++;
    }

    while(l<n2){
        array[m] = rightArray[l];
        l++;
        m++;
    }
}

void Algorithms::mergeSort(Ware* array[], int left, int right) {
    if(left < right) {
        int middle = left+(right-left)/2;
        mergeSort(array, left, middle);
        mergeSort(array, middle+1, right);
        merge(array, left, middle, right);
    }
}

void Algorithms::insertionSortBase(Ware* array[], int array_size, bool asc) {
    int i = 0;
    while(i<array_size){
        int j = i;
        while(j > 0 && array[j-1]->getEinkaufspreis() > array[j]->getEinkaufspreis()){
            Ware* currentValue = array[j];
            array[j] = array[j-1];
            array[j-1] = currentValue;
            j--;
        }
        i++;
    }
}

void Algorithms::insertionSortBase5(Ware* array[], int array_size, bool asc) {
    int i = 0;
    while(i<array_size){
        int j = i;
        while(j > 0 && array[j-1]->getVerkaufspreis() > array[j]->getVerkaufspreis()){
            Ware* currentValue = array[j];
            array[j] = array[j-1];
            array[j-1] = currentValue;
            j--;
        }
        i++;
    }
}

