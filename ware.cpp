//
// Created by gadne on 28.05.2022.
//

#include "ware.h"

Ware::Ware(const std::string &bezeichnung, int seriennummer, double gewicht, double einkaufspreis, double verkaufspreis)
        : bezeichnung(bezeichnung), seriennummer(seriennummer), gewicht(gewicht), einkaufspreis(einkaufspreis),
          verkaufspreis(verkaufspreis) {}

const std::string &Ware::getBezeichnung() const {
    return bezeichnung;
}

void Ware::setBezeichnung(const std::string &bezeichnung) {
    Ware::bezeichnung = bezeichnung;
}

int Ware::getSeriennummer() const {
    return seriennummer;
}

void Ware::setSeriennummer(int seriennummer) {
    Ware::seriennummer = seriennummer;
}

double Ware::getGewicht() const {
    return gewicht;
}

void Ware::setGewicht(double gewicht) {
    Ware::gewicht = gewicht;
}

double Ware::getEinkaufspreis() const {
    return einkaufspreis;
}

void Ware::setEinkaufspreis(double einkaufspreis) {
    Ware::einkaufspreis = einkaufspreis;
}

double Ware::getVerkaufspreis() const {
    return verkaufspreis;
}

void Ware::setVerkaufspreis(double verkaufspreis) {
    Ware::verkaufspreis = verkaufspreis;
}
