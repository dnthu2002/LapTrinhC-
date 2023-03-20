#include "Temperature.h"
Temperature :: Temperature(){}
bool Temperature::isEthylFreezing (){
    if(this->temperature <= -173){
        return true;
    }
    return false;
}
bool Temperature::isEthylBoiling(){
    if(this->temperature >= 172){
        return true;
    }
    return false;
}
bool Temperature::isOxygenFreezing(){
    if(this->temperature <= -362){
        return true;
    }
    return false;
}
bool Temperature::isOxygenBoiling(){
    if(this->temperature >= -306){
        return true;
    }
    return false;
}
bool Temperature::isWaterFreezing(){
    if(this->temperature <= 32){
        return true;
    }
    return false;
}
bool Temperature::isWaterBoiling(){
    if(this->temperature >= 212){
        return true;
    }
    return false;
}
void Temperature::setTemperature(int temperature){
    this->temperature = temperature;
}
int Temperature::getTemperature(){
    return this->temperature;
}