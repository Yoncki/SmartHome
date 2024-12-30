#include "manual.h"

void Manual::setTimer(std::string time) {
    switchOffTime = time;
}
void Manual::removeTimer() {
    if(status){
        switchOnTime = "";
    }else{
        switchOffTime = "";
    }
}