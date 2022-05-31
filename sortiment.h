
#ifndef ALG_SORTIMENT_H
#define ALG_SORTIMENT_H

#include "ware.h"
#include <iostream>
#include "algorithms.h"

class Sortiment {
private:
    Ware* waren[10];
    int size=0;

public:
    Sortiment();

    void addWare(Ware* ware);

    void sort(int modus);
};


#endif //ALG_SORTIMENT_H
