void bubbleSort(int* array, int array_size, bool asc) {
    bool swapped = false;
    //erste Schleife daher O(n) wird höchstens n mal aufgerufen
    do {
        swapped = false;
        //zweite Schleife daher O(n^2) wird höchstens n mal n mal aufgreufen
        for(int i=0; i<array_size-1;i++){
            if(array[i] > array[i+1]){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swapped = true;
            }
        }
    } while (swapped == true);

}
//Die Komplexität vom BubbleSort ist O(n^2)