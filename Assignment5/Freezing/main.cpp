#include "Temperature.cpp"
#include <iostream>
using namespace std;
int main(){
    int temp;
    cout << "Nhap temp: "<< endl;
    cin >> temp ;
    Temperature temperature;
    temperature.setTemperature(temp);
    if(temperature.isEthylFreezing()){
        cout << "IsEthyFreezing" << endl;
    }
    if(temperature.isEthylBoiling()){
        cout << "isEthylBoiling" << endl;
    }
    if(temperature.isOxygenFreezing()){
        cout << "isOxygenFreezing" << endl;
    }
    if(temperature.isOxygenBoiling()){
        cout << "isOxygenBoiling" << endl;
    }
    if(temperature.isWaterFreezing()){
        cout << "isWaterFreezing" << endl;
    }
    if(temperature.isWaterBoiling()){
        cout << "isWaterBoiling" << endl;
    }
    return 0;
}