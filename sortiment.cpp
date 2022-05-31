
#include "sortiment.h"

void Sortiment::addWare(Ware* ware){
    if (size == 10){
        std::cout << "Array ist voll" << std::endl;
    } else {
    for (int i = 0; i < 10; ++i) {
        if (waren[i] == nullptr) {
            waren[i] = ware;
            size++;
            break;
        }
    }
    }

}

Sortiment::Sortiment() : waren(){
    for (int i = 0; i < 10; ++i) {
        waren[i] = nullptr;
    }
}

void Sortiment::sort(int modus){
    Algorithms algorithms;
    if (modus == 1){
        algorithms.quickSort(this->waren, 0, size-1);
        std::cout << "Geordnet nach Seriennummer: ";
    }
    else if (modus == 2){
        algorithms.bubbleSort(this->waren, size);
        std::cout << "Geordnet nach Gewicht: ";
    }
    else if (modus == 3){
        algorithms.mergeSort(this->waren, 0, size-1);
        std::cout << "Geordnet nach Bezeichnung: ";
    }
    else if (modus == 4){
        algorithms.insertionSortBase(this->waren, size, true);
        std::cout << "Geordnet nach Einkaufspreis: ";
    }
    else if (modus == 5){
        algorithms.insertionSortBase5(this->waren, size, true);
        std::cout << "Geordnet nach Verkaufspreis: ";
    }
    for (int i = 0; i < size; ++i) {
        if (waren[i] != nullptr){
            std::cout << " Seriennummer: " << waren[i]->getSeriennummer() << " Gewicht: " << waren[i]->getGewicht() << " Bezeichnung: " << waren[i]->getBezeichnung() << " Einkaufspreis: " << waren[i]->getEinkaufspreis() << " Verkaufspreis: " << waren[i]->getVerkaufspreis() << std::endl;
        }

    }
}
