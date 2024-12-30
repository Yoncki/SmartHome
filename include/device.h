#ifndef DEVICE_H
#define DEVICE_H

#include <string>

class Device{
    public:
        Device(const Device&) = delete;
        Device& operator=(const Device&) = delete;
        std::string getName() const;
        bool getStatus() const;
        float getComsumption() const;
        void seton();
        void setoff();
        void setTodayConsumption();
        virtual void setTimer(std::string time) = 0;
        virtual void removeTimer() = 0;
        virtual ~Device() {};

    protected:
        Device() {}
        Device(long int id, std::string name, float energyConsumption) : id(id), name(name), energyConsumption(energyConsumption) {};
        std::string switchOnTime; // Time Class needed
        bool status = false;

    private:
        long int id;
        std::string name;
        float energyConsumption; // KW/h
        float todayConsumption = 0; // KW

};

#endif