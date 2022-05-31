
#ifndef ALG_WARE_H
#define ALG_WARE_H

#include <string>

class Ware {

private:
    std::string bezeichnung;
    int seriennummer;
    double gewicht;
    double einkaufspreis;
    double verkaufspreis;

public:
    Ware(const std::string &bezeichnung, int seriennummer, double gewicht, double einkaufspreis, double verkaufspreis);

    const std::string &getBezeichnung() const;

    void setBezeichnung(const std::string &bezeichnung);

    int getSeriennummer() const;

    void setSeriennummer(int seriennummer);

    double getGewicht() const;

    void setGewicht(double gewicht);

    double getEinkaufspreis() const;

    void setEinkaufspreis(double einkaufspreis);

    double getVerkaufspreis() const;

    void setVerkaufspreis(double verkaufspreis);

};


#endif //ALG_WARE_H
