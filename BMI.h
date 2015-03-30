#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
#ifndef BMI_H
#define BMI_H


using namespace std;
class BMI{
  private:
    float bmi;
    float height;
    float mass;
    string str;
  public:
     void setBMIheight(float i);
     void setBMImass(float j);
     float getheight();
     float getmass();
     float BMIValue(float height,float mass);
     string getBMICategory(float bmi);
};

#endif
