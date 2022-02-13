#include<string>
#include<iostream>
#include<vector>

class Circuit 
{
    protected:
        std::string name = "Default";

        std::vector<Pin> in_pins;
        std::vector<Pin> out_pins;

    public:
        // getters and setters
        std::string getname(){
            return name;
        }

        std::string setname(std::string newname){
            name = newname;
        }




};