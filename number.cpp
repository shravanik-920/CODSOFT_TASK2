#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int randomNo;
    int guess;
    int chances = 0;
    srand(time(0)); 
    randomNo = rand() % 100 + 1; 
    cout << "\t\t\tWelcome to Guess the Number Game\n\n";

    do
    {
        cout << "Enter your guess between 1 and 100: ";
        cin >> guess;
        chances++;

        if (guess > randomNo){
            cout << "The "<<guess<<" is Too high!\n\n";
        }
        else if (guess < randomNo){
            cout << "The "<<guess<<" is Too low!\n\n";
        }
        else{
            cout << "\nYes! You got the right guess "<<guess <<"in "<< chances << " tries!\n";
        }
    } 
        while (guess != randomNo);

	return 0;
}
