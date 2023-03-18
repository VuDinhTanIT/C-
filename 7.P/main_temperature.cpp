#include <cstdlib>
#include <iostream>
#include "temperature.h"
 
using namespace std;
//https://sourcecodeera.com/blogs/Samath/Freezing--Boiling-Points-(Temperature-Class)-in-C.aspx
int main(int argc, char *argv[])
{
    
   int my_temp;
   cout<<"Enter a Temperature: ";
   cin>>my_temp;
 
   Temperature temp(10);
   temp.setTemperature(my_temp);
 
   if(temp.isEthylFreezing())
   {
	   cout<<"Ethyl Alcohol will Freeze at this Temperature.\n";
   }
 
   if(temp.isOxygenFreezing())
   {
	   cout<<"Oxygen will Freeze at this Temperature.\n";
   }
 
   if(temp.isWaterFreezing())
   {
	   cout<<"Water will Freeze at this Temperature.\n";
   }
 
   if(temp.isEthylBoiling())
   {
	   cout<<"Ethyl Alcohol will Boil at this Temperature.\n";
   }
 
   if(temp.isOxygenBoiling())
   {
	   cout<<"Oxygen will Boil at this Temperature.\n";
   }
 
   if(temp.isWaterBoiling())
   {
	   cout<<"Water will Boil at this Temperature.\n";
   }
 
    system("PAUSE");
    return 0;
}