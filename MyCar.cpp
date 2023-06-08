#include "MyCar.h"


int MyCar::getLicenseNumber() const {
    return licenseNumber;
}

void MyCar::setLicenseNumber(int licenseNumber) {
    if (licenseNumber >= 0)
        this->licenseNumber = licenseNumber;
    else
        cout << "Invalid license number " << endl;
}

char *MyCar::getModel() const {
    return model;
}

void MyCar::setModel(char *model) {
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
}

double MyCar::getCost() const {
    return cost;
}

void MyCar::setCost(double cost) {
    if (cost >= 0)
        this->cost = cost;
    else
        cout << "Invalid cost " << endl;
}

int MyCar::getYear() const {
    return year;
}

void MyCar::setYear(int year) {
    if (year >= 0)
        this->year = year;
    else
        cout << "Invalid year " << endl;
}

const char *MyCar::getColor() const {
    return color;
}

int MyCar::getEngineVolume() const {
    return engineVolume;
}

void MyCar::setEngineVolume(int engineVolume) {
    if (engineVolume > 0)
        MyCar::engineVolume = engineVolume;
    else
        cout << "Invalid engine volume  " << endl;
}

bool MyCar::isTransKind() const {
    return transKind;
}

void MyCar::setTransKind(bool transKind) {
    MyCar::transKind = transKind;
}

char *MyCar::getCountry() const {
    return country;
}

void MyCar::setCountry(char *country) {
    this->country = new char[strlen(country) + 1];
    strcpy(this->country, country);
}

int MyCar::getHand() const {
    return hand;
}

void MyCar::setHand(int hand) {
    if (hand >= 0)
        MyCar::hand = hand;
    else
        cout << "Invalid hand" << endl;
}

bool MyCar::compare(MyCar &other) {
    return this->year < other.year;
}

void MyCar::print() {
    cout << "license number: " << licenseNumber << endl <<
         " model: " << model << endl <<
         " cost " << cost << endl <<
         " year : " << year << endl <<
         " color: " << color << endl <<
         " engine volume: " << engineVolume << endl <<
         " transmission kind " << transKind << endl <<
         " country: " << country << endl <<
         " hand: " << hand << endl;

}

MyCar::MyCar(int licenseNumber, char *model, double cost, int year, char *color, int engineVolume, bool transKind,
             char *country, int hand) {
    setLicenseNumber(licenseNumber);
    setModel(model);
    setCost(cost);
    setYear(year);
    setColor(color);
    setEngineVolume(engineVolume);
    setTransKind(transKind);
    setCountry(country);
    setHand(hand);
}

void MyCar::setColor(char *color) {
    this->color = new char[strlen(color) + 1];
    strcpy(this->color, color);

}

MyCar::~MyCar() {
//    delete[] country;
//    delete[] model;
//    delete[] color;
}

MyCar::MyCar() {}
