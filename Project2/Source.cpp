#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main() {
	
	int numbers[5] = { 1, 2, 3, 4, 5 };
	
	int guessNo = -1;
	while (guessNo != numbers[2]) {
		cout << "Guess a number: ";
		cin >> guessNo;
	}

	cout << "You guessed correct." << endl;

	system("Pause");
	return 0;
}