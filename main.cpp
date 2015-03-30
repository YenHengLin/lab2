#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"BMI.h"
using namespace std;
int main()
{
   float  mass;
   float  height;
   BMI family;
   ifstream inFile("file.in",ios::in);
   if(!inFile)
   {
      cerr<<"Failed opening"<<endl;
      return -1;
   }
   ofstream outFile("file.out",ios::out);

   while(inFile>>height>>mass)
   {
       if(family.getheight()==0&&family.getmass()==0)
       {
          break;
       }
       family.setBMIheight(height);
       family.setBMImass(mass);
       outFile<<family.BMIValue(family.getheight(),family.getmass())<<"\t" <<family.getBMICategory(family.BMIValue(family.getheight(),family.getmass()))<<endl;
   }
 
}
