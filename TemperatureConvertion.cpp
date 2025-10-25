#include <iostream>

int main(){

    using namespace std;

    double temp;
    char unit;

    cout << "Fahrenheit = F' Celcius = C \n";
    cout << "Enter the temperature you want to convert: ";
    cin >> unit; 

    if (unit == 'F' || unit == 'f'){
        cout << "Entre your temperature in Celcius: ";
        cin >> temp;
        temp = 1.8 * temp + 32;
        cout << "The temperatur is " << temp << "F\n";
        
    }

    else if(unit == 'C' || unit == 'c'){
        cout << "Enter your temperature in Fahrenheit: ";
        cin >> temp;
        temp = (temp - 32) / 1.8;
        cout << "The temperature is " << temp << "C\n";

    }

    else{
        cout << "Invalid unit entered!\n";
        return 1;   
    }

return 0;
}