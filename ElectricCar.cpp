#include "ElectricCar.h"

ElectricCar::ElectricCar()
{
    batteryCapicity=45;
    timeToCharge=12;
    moterPower=500;
    maxPower=800;
    range=680;
}

ElectricCar::~ElectricCar()
{
    
}

std::ostream &operator<<(std::ostream &os, const ElectricCar &rhs) {
    os<<rhs.csf;
       os<< " batteryCapicity: " << rhs.batteryCapicity<<"\n"
       << " timeToCharge: " << rhs.timeToCharge<<"\n"
       << " moterPower: " << rhs.moterPower<<"\n"
       << " maxPower: " << rhs.maxPower<<"\n"
       << " range: " << rhs.range<<"\n";
    return os;
}

std::istream &operator>>(std::istream &is, ElectricCar &obj)
{
    is>>obj.csf;
    int bc;
    std::cout<<"Enter the batteryCapacity:"<<std::endl;
    is>>bc;
    obj.setBatteryCapicity(bc);

    float tc;
    std::cout<<"Enter the timeToCharge:"<<std::endl;
    is>>tc;
    obj.setTimeToCharge(tc);

    float mp;
    std::cout<<"Enter the moterPower:"<<std::endl;
    is>>mp;
    obj.setMoterPower(mp);

    float map;
    std::cout<<"Enter the maxPower:"<<std::endl;
    is>>map;
    obj.setMaxPower(map);

    float r;
    std::cout<<"Enter the range:"<<std::endl;
    is>>r;
    obj.setRange(r);
    
    
}
