class Temperature
{
private:
    int temperature;
public:
    Temperature(/* args */);
    bool isEthylFreezing();
    bool isEthylBoiling();
    bool isOxygenFreezing();
    bool isOxygenBoiling();
    bool isWaterFreezing();
    bool isWaterBoiling();
    void setTemperature(int temperature);
    int getTemperature();
};
