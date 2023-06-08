#ifndef MY_CAR_DEALER_MYCAR_H
#define MY_CAR_DEALER_MYCAR_H

#include <iostream>

using namespace std;

class MyCar {

public:
    MyCar(int licenseNumber, char *model, double cost, int year, char *color, int engineVolume, bool transKind,
          char *country, int hand);

public:
    void setColor(char *color);

private:
    int licenseNumber;
    char *model;
    double cost;
    int year;
    char *color;
    int engineVolume;
    bool transKind;
    char *country;
    int hand;
public:

    MyCar();

    void print();

    bool compare(MyCar &other);

    int getLicenseNumber() const;

    void setLicenseNumber(int licenseNumber);

    char *getModel() const;

    void setModel(char *model);

    double getCost() const;

    void setCost(double cost);

    int getYear() const;

    void setYear(int year);

    const char *getColor() const;

    int getEngineVolume() const;

    void setEngineVolume(int engineVolume);

    bool isTransKind() const;

    void setTransKind(bool transKind);

    char *getCountry() const;

    void setCountry(char *country);

    int getHand() const;

    void setHand(int hand);

    virtual ~MyCar();


};


#endif
