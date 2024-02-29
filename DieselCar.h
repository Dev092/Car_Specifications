#ifndef DIESELCAR_H
#define DIESELCAR_H

#include"CarSpecification.h"
#include<cstring>
#include <iostream>
class DieselCar: public CarSpecification{
    char* ratedFuelConsumption;
    char* rated_co2_emission;
    CarSpecification csf;

    public:
    DieselCar();
    DieselCar(char*,char*);
    ~DieselCar();

    const char* getRatedFuelConsumption() const { return ratedFuelConsumption; }
    void setRatedFuelConsumption(char* ratedFuelConsumption_) { strcpy(ratedFuelConsumption ,ratedFuelConsumption_); }

    const char* ratedCo2Emission() const { return rated_co2_emission; }
    void setRatedCo2Emission(char* ratedCo2Emission) { strcpy(rated_co2_emission, ratedCo2Emission); }

    friend std::ostream &operator<<(std::ostream &os, const DieselCar &rhs);
     friend std::istream &operator>>(std::istream &os,  DieselCar &rhs);


};


#endif // DIESELCAR_H
