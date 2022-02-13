#pragma once

#include<vector>

namespace pins 
{
    class Pin
    {
        protected:
            enum pinStates {OFF = 0, ON = 1};
            enum pinTypes {INPUT, OUTPUT};

            int state;
            pinTypes pinType;

            std::vector<Pin*> outconnections;

        public:
            Pin();

            bool getState();
            void receiveStateSignal(pinStates instate);
            void addConnection(Pin * pintoadd);
            void removeConnection(Pin * pintoremove);
    };
};