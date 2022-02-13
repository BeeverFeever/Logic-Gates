#pragma once

#include<vector>

class Pin
{
    protected:
        enum pinState {OFF = 0, ON = 1};
        enum pinType {INPUT, OUTPUT};
        
        int state;
        pinType type;
        
    public:
        Pin(pinStates state);
        ~Pin();

        bool getState();

        void addConnection(Pin &pintoadd);
        void removeConnection(Pin &pintoremove);
        
        void broadcastStateSignal(pinState state);
        void receiveStateSignal(pinState instate);
};