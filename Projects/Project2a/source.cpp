/*
 * source.cpp
 *
 *  Created on: Sep 22, 2015
 *      Author: dillon
 */
#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

//this method tells you if a vector contains and integer
bool contains(vector<int>& x, int value);
//this method creates a vector of length 4 which is used for a game
vector<int> createGame();
//this method asks theuser to input 4 numbers, then it returns a vector of length four with this numbers
vector<int> quariePlayer();
//this method checks the input, throws error if its bad
void checkInput(int input);
int main() {
	vector<int> round;
	while (true) {
		//create the game
		round = createGame();
		vector<int> roundOut = round;
		while (true) {
			//get the user input
			vector<int> testCase;
			testCase = quariePlayer();

			//run the check for bulls and cows....thought about putting this into a method but
			//i dont want to have to copy each of the arrays...i dont know if my computer has
			//enough memory...cpu powe...magic
			int bulls = 0;
			int cows = 0;
			for (int i = 0; i < 4; i++) {
				if (testCase[i] == round[i]) {
					bulls++;
					round[i] = -100; //impossible value
					testCase[i] = 100; //impossible value
				}
			}
			for (int i = 0; i < 4; i++) {
				if (contains(round, testCase[i])) {
					cows++;
				}
			}
			cout << "Bulls: " << bulls << " Cows: " << cows;
			cout
					<< "\nIf you want to stop guessing enter 1, otherewise enter any number to continue";
			int exit;
			cin >> exit;
			if (exit == 1)
				break;

		}
		cout << "The case for the last round was: ";
		for (int i = 0; i < round.size(); i++)
			cout << roundOut[i];

		cout
				<< "\nIf you want to quit the game press 1, or enter any number to play another round";
		int i = 0;
		cin >> i;
		if (i == 1)
			break;
	}
}
vector<int> createGame() {
	vector<int> game(4);
	game[0] = rand() % 9 + 1;
	game[1] = rand() % 9 + 1;
	game[2] = rand() % 9 + 1;
	game[3] = rand() % 9 + 1;
	return game;
}
vector<int> quariePlayer() {
	vector<int> testCase;
	for (int i = 0; i < 4; i++) {
		cout << "Please input your guess for position:" << i;
		int temp;
		cin >> temp;
		try {
			checkInput(temp);
		} catch (exception& e) {
			cout << "Their has been an error in your guess\n";
			cout << e.what();
		}
		testCase.push_back(temp);
	}
	return testCase;
}
//makes sure the user input is okay
void checkInput(int input) {
	if (input < 0 || input > 9) {
		//throw some sort of error
		throw new exception;
	}
}
//checks if the sent vrcor contains the value, if it does it sets the value in the sent vector to equal -100 so it is not
//checked again in th efuture
bool contains(vector<int>& x, int value) {
	for (int i = 0; i < x.size(); i++) {
		if (x[i] == value){
			x[i] = -100;
			return true;
		}
	}
	return false;
}

