//GuessMyNumber - The classic number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  //Seed the random number generator
  srand(static_cast<unsigned int>(time(0)));

  //get a random number between 1-100
  int secretNumber = rand() % 100 + 1;
  int tries = 0;
  int guess;

  cout << "\tWelcome to Guess My Number\n\n";

  do {
    cout << "Enter a guess (1-100): ";
    cin >> guess;
    ++tries;

    if(guess > secretNumber) {
      cout << "Too high!\n\n";
    } else if(guess < secretNumber) {
      cout << "Too low!\n\n";
    } else {
      cout << "\nThat's it! You got it in " << tries << " guesses!\n";
    }
  } while(guess != secretNumber);
  return 0;
}

