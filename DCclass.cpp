// Final1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Riley Earles

#include <iostream>
#include <cmath>
using namespace std;

class Dc
{
private:
    float ratedPower, ratedVoltage, armatureResistance, fieldResistance, adjustableResistance;
public:
    void setRatedPower(float);
    void setRatedVoltage(float);
    void setArmatureResistance(float);
    void setFieldResistance(float);
    void setAdjustableResistance(float);
    
    float getRatedPower();
    float getRatedVoltage();
    float getArmatureResistance();
    float getFieldResistance();
    float getAdjustableResistance();
};
void Dc::setRatedPower(float s)
{
    ratedPower = s;
}
void Dc::setRatedVoltage(float v)
{
    ratedVoltage = v;
}
void Dc::setArmatureResistance(float Ra)
{
    armatureResistance = Ra;
}
void Dc::setFieldResistance(float Rf)
{
    fieldResistance = Rf;
}
void Dc::setAdjustableResistance(float Radj)
{
    adjustableResistance = Radj;
}
float Dc::getRatedPower()
{
    return ratedPower;
}
float Dc::getRatedVoltage()
{
    return ratedVoltage;
}
float Dc::getArmatureResistance()
{
    return armatureResistance;
}
float Dc::getFieldResistance()
{
    return fieldResistance;
}
float Dc::getAdjustableResistance()
{
    return adjustableResistance;
}


int main()
{
    Dc dc_1;
    dc_1.setRatedPower(10000);
    dc_1.setRatedVoltage(250);
    dc_1.setArmatureResistance(.1);
    dc_1.setFieldResistance(5);
    dc_1.setAdjustableResistance(45);

    Dc dc_2;
    dc_1.setRatedPower(12000);
    dc_1.setRatedVoltage(300);
    dc_1.setArmatureResistance(.12);
    dc_1.setFieldResistance(5.7);
    dc_1.setAdjustableResistance(67);

    float I_field = dc_1.getRatedVoltage() / (dc_1.getFieldResistance() + dc_1.getAdjustableResistance());
    float I_line = dc_1.getRatedPower() / dc_1.getRatedVoltage();
    float I_armature = I_line - I_field;
    float CEMF = dc_1.getRatedVoltage() - I_armature * dc_1.getArmatureResistance();

    cout << "Field Current = " << I_field << endl;
    cout << "Line Current = " << I_line << endl;
    cout << "Armature Current = " << I_armature << endl;
    cout << "Induced Electro-Motive Force = " << CEMF << endl;
}