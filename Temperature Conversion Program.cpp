//This is a C++ program that converts user entered temperature from Celsius to Fahrenheit and vice versa. 
#include<iostream> 
using namespace std; 
//Function for conversion. This first checks for edge cases and then proceeds to calculations 
double Temp_Conversion(double& temp, bool& CtoF) { 
 double result; 
 if (CtoF && temp < -237.15) { 
  cout << "ERROR: Invalid temperature!\n"; 
  cout << "The temperature is below the Absolute zero value for Celsius Scale\n"; } 
 else if (!CtoF && temp < -459.67) { 
  cout << "ERROR: Invalid temperature!\n"; 
  cout << "The temperature is below the Absolute zero value for Fahrenheit Scale\n"; } 
 else if (CtoF) {  
  result = temp * (9.0 / 5.0) + 32;  //formula for conversion 
  cout << temp << " in " << "Fahrenheit is: " << result << endl; //displaying the converted value 
  return result; } 
 else { 
  result = (temp - 32) * 5 / 9; 
  cout << temp << " in " << "Celsius is: " << result << endl; 
  return result; } 
 } 
int main() {   
 int choice; double temp; bool CtoF; 
 cout << "____________ TEMPERATURE CONVERSION PROGRAM ____________\n"; 
 cout << "What do you want to proceed with? \n"; 
 cout << "\nEnter 1 to convert from Degree Celsius to Fahrenheit.\n"; 
 cout << "Enter 2 to convert from Fahrenheit to Degree Celsius.\n"; 
 cout << "Enter 3 to exit the program. \n"; 
 //This loop is to make sure user chooses at least one of these options 
 while (true) { 
  cout << "Your choice? (1/2/3): "; cin >> choice; 
 
  if (choice == 1) { 
   cout << "\nEnter the temperature in Celsius: "; 
   cin >> temp; 
   CtoF = true; 
   Temp_Conversion(temp, CtoF); //calling the function  
   break; } 
 
  else if (choice == 2) { 
   cout << "\nEnter the temperature in Fahrenheit: "; 
   cin >> temp; 
   CtoF = false; 
   cout << endl; 
   Temp_Conversion(temp, CtoF); //calling the function  
   break; } 
  else if (choice == 3) { 
   cout << "You are exiting the program!\n"; 
   break; } 
  else { 
   cout << "Invalid response!\n"; 
   cout << "Please choose between 1-3 to perform desired operation!\n"; } 
 } 
 cout << "_________________________________________________________"; 
 return 0; 
}
