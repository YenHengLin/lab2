#include"BMI.h"
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
     void BMI::setBMIheight(float i)
     {
         height=i;
     }
     void BMI::setBMImass(float j)
     {
         mass=j;
     }

     float BMI::getheight()
     {
         return height;
     }
     float BMI::getmass()
     {
         return mass;
     }
     float BMI::BMIValue(float height,float mass)
     {
	float bmi;
         bmi=mass/((height/100)*(height/100));
         return bmi;
     }

     string BMI::getBMICategory(float bmi)
     {
	string str;
         if(bmi<15.0)
         str="Very severely underweight";
         else if(bmi>=15.0&&bmi<16.0)
         str="Severely underweight";
         else if(bmi>=16.0&&bmi<18.5)
         str="Underweight";
         else if(bmi>=18.5&&bmi<25.0)
         str="Normal";
         else if(bmi>=25.0&&bmi<30.0)
         str="Overweight";
         else if(bmi>=30.0&&bmi<35.0)
         str="Obese Class I (Moderately obese)";
         else if(bmi>=35&&bmi<40)
         str="Obese Class II (Severely obese)";
         else if(bmi>=40)
         str="Obese Class III (Very severely obese)";
         return str;
     }
