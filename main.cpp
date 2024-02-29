#include "DieselCar.h"
#include "ElectricCar.h"
#include "CarSpecification.h"
#include <iostream>
enum choice
{
    ElectricCarr = 1,
    DieselCarr

};
int main()
{
    int n;
    std::cout << "Enter 1 for ElectricCar and 2 for DieselCar:" << std::endl;
    std::cin>>n;
    switch (n)
    {
    case ElectricCarr:
    {
        ElectricCar *c1 = new ElectricCar();
        std::cin >> *c1;
        std::cout << *c1;

        delete c1;
        break;
    }

    case DieselCarr:
    {
        DieselCar *dc1 = new DieselCar();
        std::cin >> *dc1;
        std::cout << *dc1;

        delete dc1;
        break;
    }

    default:
        std::cout << "Enter the valid choice";
        break;
    }
    return 0;
}