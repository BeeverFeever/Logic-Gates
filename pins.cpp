#include "pins.hpp"

pins::Pin::Pin()
{
    state = OFF;
}

bool pins::Pin::getState()
{
    return state;
}

void pins::Pin::receiveStateSignal(pinStates state)
{
    state = state;
}

void pins::Pin::addConnection(Pin *pintoadd)
{
    outconnections.push_back(pintoadd);
}


//TODO finish this function. need to get some other things down first though.
void pins::Pin::removeConnection(Pin *pintoremove)
{
    for (Pin *i : outconnections)
    {
        if (outconnections[i] == pintoremove)
            delete i;
            i = 
    }
}
