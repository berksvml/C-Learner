#include <iostream>

int main(){

    using namespace std;

    srand(time(NULL));
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout << num1 << '\n' << num2 << '\n' << num3 << '\n';

    return 0;
}