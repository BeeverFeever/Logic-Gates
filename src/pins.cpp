#include "pins.hpp"

pins::Pin::Pin(){
    this->state = OFF;
}

bool pins::Pin::getState(){
    return state;
}

void pins::Pin::addConnection(Pin &pintoadd){
    outconnections.push_back(pintoadd);
}

void pins::InPin::receiveStateSignal(pinStates state){
    state = state;
}

// Out pins

pins::OutPin::~OutPin(){
    for(std::vector<InPin*>::iObjterator p = outconnections.begin(); pObj != outconnections.end(); pObj++) {
        delete *pObj;
    }

    outconnections.clear();
}

void pins::OutPin::broadcastStateSignal(pinStates state) {
    for(std::vector<InPin*>::iterator pObj = outconnections.begin(); pObj != outconnections.end(); pObj++) {
        pObj->recieveStateSignal(state);
    }
}



//TODO finish this function. need to get some other things down first though.
void pins::Pin::removeConnection(Pin &pintoremove){
    for (Pin *i : outconnections)
    {
        if (outconnections[i] == pintoremove)
            delete i;
            i = 
    }
}
