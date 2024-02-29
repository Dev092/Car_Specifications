#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include"CarSpecification.h"
#include <ostream>
class ElectricCar:public CarSpecification{
    int batteryCapicity;
    float timeToCharge;
    float moterPower;
    float maxPower;
    float range;
    CarSpecification csf;
    
    public:
    ElectricCar();
    ~ElectricCar();

    int getBatteryCapicity() const { return batteryCapicity; }
    void setBatteryCapicity(int batteryCapicity_) { batteryCapicity = batteryCapicity_; }

    float getTimeToCharge() const { return timeToCharge; }
    void setTimeToCharge(float timeToCharge_) { timeToCharge = timeToCharge_; }

    float getMoterPower() const { return moterPower; }
    void setMoterPower(float moterPower_) { moterPower = moterPower_; }

    float getMaxPower() const { return maxPower; }
    void setMaxPower(float maxPower_) { maxPower = maxPower_; }

    float getRange() const { return range; }
    void setRange(float range_) { range = range_; }

    friend std::ostream &operator<<(std::ostream &os, const ElectricCar &rhs);
    friend std::istream &operator>>(std::istream &is, ElectricCar &obj);
};



#endif // ELECTRICCAR_H
