void insertionSortBase(int array[], int array_size, bool asc) {
    int i = 0;
    //erste Schleife O(n) wird höchsten n mal aufgerufen
    while(i<array_size){
        int j = i;
        //zweite Schleife O(n^2) wird höchstens n mal n mal aufgerufen
        while(j > 0 && array[j-1] > array[j]){
            int currentValue = array[j];
            array[j] = array[j-1];
            array[j-1] = currentValue;
            j--;
        }
        i++;
    }
}
//Komplexität O(n^2)

void insertionSortOptimized(int array[], int array_size, bool asc) {
    int i = 0;
    //Erste Schleife O(n)
    while(i<array_size){
        int x = array[i];
        int j = i-1;
        //zweite Schleife O(n^2)
        while(j >= 0 && array[j] > x){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = x;
        i++;
    }
}
//Komplexität O(n^2)

void insertionSortRecursive(int array[], int array_size, bool asc) {
    if(array_size > 0) {
        //rekrusiver Aufruf der Funktion O(n)
        insertionSortRecursive(array, array_size-1, true);
        int x = array[array_size-1];
        int j = array_size-2;
        // Zweite Schleife O(n^2)
        while( j >= 0 && array[j] > x){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = x;
    }
}
// Komplexität O(n^2)