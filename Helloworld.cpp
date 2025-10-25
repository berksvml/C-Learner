#include <iostream>

int main(){

    using namespace std;
    int columns;
    int rows;
    char symbol;

    cout << "Enter number of columns: ";
    cin >> columns;

    cout << "Enter number of rows: ";
    cin >> rows;
    
    cout << "Enter a symbol to use: ";
    cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            cout << symbol;
        }
        cout << '\n';
    }
    
    return 0;

}