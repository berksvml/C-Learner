#include <iostream>
#include <cmath>

int main(){
    
    using namespace std;

    double a;
    double b;
    double c;

    cout << "Enter A value:";
    cin >> a;

    cout << "Enter B value:";
    cin >> b;

    c = sqrt(pow(a , 2) + pow(b , 2));

    cout << "The value of C is: " << c;


    return 0;
}