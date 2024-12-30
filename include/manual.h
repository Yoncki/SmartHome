#ifndef MANUAL_H
#define MANUAL_H

#include "device.h"

class Manual : public Device {
    public:
        Manual(long int id, std::string name, int energyConsumption) : Device(id, name, energyConsumption) {};
        void setTimer(std::string time) override;
        void removeTimer() override;
        ~Manual() {};

    private:
        std::string switchOffTime;
};

#endif