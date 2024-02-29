#ifndef CARSPECIFICATION_H
#define CARSPECIFICATION_H

#include<cstring>
#include <iostream>
class CarSpecification{
    char* name;
    char* acceleration;
    char* topSpeed;
    public:
    CarSpecification();
    CarSpecification(char*,char*,char*);

    ~CarSpecification();

    const char* getName() const { return name; }
    void setName(char* name_) { 
        name = new char[20];
        strcpy(name,name_);
    }

    const char* getAcceleration() const { return acceleration; }
    void setAcceleration(char* acceleration_) {
        acceleration = new char[20];
         strcpy(acceleration, acceleration_); 
         }

    const char* getTopSpeed() const { return topSpeed; }
    void setTopSpeed(char* topSpeed_) { 
        topSpeed = new char[20];
        strcpy(topSpeed,topSpeed_); }

    friend std::ostream &operator<<(std::ostream &os, const CarSpecification &rhs);
    friend std::istream &operator>>(std::istream &is,  CarSpecification &);
};


#endif // CARSPECIFICATION_H
