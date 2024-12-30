#ifndef AUTOMATIC_H
#define AUTOMATIC_H

#include "device.h"

class Automatic : public Device{
    public:
        Automatic(long int id, std::string name, float energyConsumption, std::string cicleTime) : Device(id, name, energyConsumption), cicleTime(cicleTime) {};
        void setTimer(std::string time) override;
        void removeTimer() override;
        ~Automatic() {};

    private:
        std::string cicleTime;
	
};

#endif