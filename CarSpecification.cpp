#include "CarSpecification.h"

CarSpecification::CarSpecification()
{
}

CarSpecification::CarSpecification(char *na, char *acc, char *ts)
{
    name=new char[20];
    strcpy(name,na);

    acceleration=new char[20];
    strcpy(acceleration,acc);

    topSpeed=new char[20];
    strcpy(topSpeed,ts);
}

CarSpecification::~CarSpecification()
{
    delete name;
    delete acceleration;
    delete topSpeed;
}

std::ostream &operator<<(std::ostream &os, const CarSpecification &rhs) {
    os << "name: " << rhs.name<<"\n"
       << " acceleration: " << rhs.acceleration<<"\n"
       << " topSpeed: " << rhs.topSpeed<<"\n";
    return os;
}

std::istream &operator>>(std::istream &is, CarSpecification &obj)
{
   char* nm=new char[20];
   std::cout<<"Enter the name:"<<std::endl;
   is>>nm;
   obj.setName(nm);

   char* acc=new char[20];
   std::cout<<"Enter the acceleration:"<<std::endl;
   is>>acc;
   obj.setAcceleration(acc);

   char* ts=new char[20];
   std::cout<<"Enter the topSpeed:"<<std::endl;
   is>>ts;
   obj.setTopSpeed(ts);

   delete[] nm;
    delete[] acc;
    delete[] ts;
    return is;

}
