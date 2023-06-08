#include "MyCar.h"
#include "iostream"

#ifndef MY_CAR_DEALER_MANAGECAR_H
#define MY_CAR_DEALER_MANAGECAR_H


class ManageCar {

public:
    MyCar **values;
    int numberOfCars;

    ManageCar();

    virtual ~ManageCar();

    void addCar(const MyCar &m);

    void removeCar(int number);

    int *CarsFromToYear(int domain, int range, int size);

    int *CarsFromToPrices(int domain, int range, int size);

    void printCar(int number, int size);

    void deleteAll();

    void printAll();

    void printBetweenYears(int domain, int range);

    void printBetweenPrices(int domain, int range);

};


#endif //MY_CAR_DEALER_MANAGECAR_H
