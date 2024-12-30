#include "device.h"

// Get the name of the device
std::string Device::getName() const {
    return name;
}
// Get the status of the device
bool Device::getStatus() const {
    return status;
}
// Get the total consumption of the device on the day
float Device::getComsumption() const {
    return todayConsumption;
}
// Set on the device
void Device::seton() {
    status = true;
}
// Set off the device
void Device::setoff() {
    status = false;
}
// Add one minute of consumption to the device
void Device::setTodayConsumption() {
    todayConsumption += energyConsumption/60;
}
