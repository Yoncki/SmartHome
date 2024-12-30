#include "automatic.h"

void Automatic::setTimer(std::string time) {
    switchOnTime = time;
}
void Automatic::removeTimer() {
    if(!status){
        switchOnTime = "";
    }
}
