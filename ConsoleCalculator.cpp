#include <iostream>

int main(){
    using namespace std;

    char op;
    double num1;
    double num2;
    double result;

    cout << "Please enter your operator (+ - / *): ";
    cin >> op;

    cout << "Enter you First number: ";
    cin >> num1;

    cout << "Enter your second number: ";
    cin >> num2;

    switch(op){

        case '+':
            result = num1 + num2 ;
            break;
        case '-':
            result = num1 - num2 ;
            break;

        case '*':
            result = num1 * num2 ;
            break;

        case '/':
            result = num1 / num2 ;
            break;
        
        default:
        cout << "Invalid operator!";
        return 1;
    }
    cout << "The result is: " << result;
    return 0;
}