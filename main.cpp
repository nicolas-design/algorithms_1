#include <iostream>
#include "ware.h"
#include "sortiment.h"

int main() {

    Sortiment sortiment;
    sortiment.addWare(new Ware("Buch", 16, 3, 20, 20));
    sortiment.addWare(new Ware("Maschine", 12, 1, 10, 30));
    sortiment.addWare(new Ware("Hund", 2, 4, 17, 13));
    sortiment.addWare(new Ware("Hantel", 109, 10, 22, 44));
    sortiment.addWare(new Ware("TV", 21, 9, 245, 35));
    sortiment.addWare(new Ware("Kasten", 133, 98, 24, 66));
    sortiment.addWare(new Ware("Mantel", 10, 4, 399, 39));
    sortiment.addWare(new Ware("Baum", 111, 101, 9, 22));
    sortiment.addWare(new Ware("Beil", 178, 408, 229, 298));
    sortiment.addWare(new Ware("Stock", 98, 98, 98, 98));
    sortiment.sort(2);
    return 0;
}
