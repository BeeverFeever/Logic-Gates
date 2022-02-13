#include<string>
#include<iostream>
#include<vector>

#include"pins.hpp"

class Circuit
{
    protected:
        std::string name;

        std::vector<pins::InPin> in_pins;
        std::vector<pins::OutPin> out_pins;

    public:
        Circuit();
        ~Circuit();

        std::string getname();
        std::string setname(std::string newname);

        void addPin(std::vector<Pin> &vectorToAddTo, pins::);

        void 
}