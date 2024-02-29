#include "DieselCar.h"

DieselCar::DieselCar()
{
    ratedFuelConsumption=new char[strlen("4.5/100 km")+1];
    strcpy(ratedFuelConsumption,"4.5/100 km");

    rated_co2_emission=new char[strlen("120 g/km")+1];
    strcpy(rated_co2_emission,"120 g/km");
}
DieselCar::DieselCar(char *rfc, char *rco)
{
    ratedFuelConsumption=new char[20];
    strcpy(ratedFuelConsumption,rfc);

    rated_co2_emission=new char[20];
    strcpy(rated_co2_emission,rco);

}
DieselCar::~DieselCar()
{
}
std::ostream &operator<<(std::ostream &os, const DieselCar &rhs)
{
    os<<rhs.csf;
    os << " ratedFuelConsumption: " << rhs.ratedFuelConsumption
       << " rated_co2_emission: " << rhs.rated_co2_emission;
    return os;
}

std::istream &operator>>(std::istream &is, DieselCar &obj)
{
    is>>obj.csf;
    std::cout<<"Enter ratedFuelConsumption:"<<std::endl;
    char*rfs=new char[20];
    is>>rfs;
    obj.setRatedFuelConsumption(rfs);

    std::cout<<"Enter rated_co2_emission:"<<std::endl;
    char*co=new char[20];
    is>>co;
    obj.setRatedCo2Emission(co);

    delete[] rfs;
    delete[] co;

    
}
