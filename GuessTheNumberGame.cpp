#include <iostream>

int main() {

    using namespace std;

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));

    num = (rand() % 100) + 1;

    do{
        cout << "Enter you guess between (1 to 100): ";
        cin >> guess;
        tries++;

        if(guess > num) {

            cout << "Guess is bigger than the number. Try again.\n";
        }
        else if (guess < num) {
            cout << "Guess is smaller than the number. Try again.\n";
        }
        else {
            cout << "Congratulations! You found the number " << num << " in " << tries << " tries.\n";
        }

    }while(guess != num);

    return 0;
}