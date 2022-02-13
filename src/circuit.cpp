#include"circuit.hpp"

Circuit::Circuit() {
    this->name = "Default";
}

Circuit::~Circuit() {
    for(std::vector<InPin*>::iterator pObj = outconnections.begin(); pObj != outconnections.end(); pObj++) {
        delete *pObj;
    }

    outconnections.clear();
}

Circuit::getname() {
    return name;
}

Circuit::setname(std::string newname) {
    name = newname;
}
