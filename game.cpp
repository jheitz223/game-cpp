#include "stdafx.h"
#include <iostream>
#include <string>

//	Build 1000
//	
//	by JONATHAN HEITZ
//	Manually translated from Java
//	fueled by dubstep
//
//	To-Do: Everything.

using namespace std;

int main(){
    
	cout << "Build 1000\n(Please don't enter a letter or symbol when a number is expected.)\n\n";

//	Input variables:
	int depositAmt, withdrawAmt;

//	Items:
	int location, money, moneyInBank, ingredients, meals, mLofWater, sodas, beer, cigarettes, cigarettesSmoked;
	bool newspaperIsOwned, devComEnabled;

//	Locations:
	int home, store, work, bank, downtown, restaurant, homeAlt, kitchen, kitchenAlt,
		livingRoom, yard, bedroom;

//	Player status variables:
	newspaperIsOwned = false; devComEnabled = false; location = 0; money = 3000; moneyInBank = 0;
	ingredients = 0; meals = 0; mLofWater = 0; sodas = 0; beer = 1; cigarettes = 0; cigarettesSmoked = 0;

//	Locations:
	home = 0; store = 1; work = 2; bank = 3; downtown = 4; restaurant = 5; homeAlt = 6;
	kitchen = 7; kitchenAlt = 8; livingRoom = 9; yard = 10; bedroom = 11;
	
	cout << "\nHello. Please tell me your name.";
	string name;
	cin >> name;
	cout << "\nNice to meet you, " + name + "!";

	cout << "Please enter your age (years):";
	string age;
	cin >> age;
	
	bool devComSet = false;
EnableDeveloperCommentary:
	while (!devComSet) {
		cout << "\nEnter 1 to enable developer commentary";
		int devCom;
		cin >> devCom;
		if (devCom == 1) {
			devComEnabled = true;
			devComSet = true;
		}else {
			devComEnabled = false;
			devComSet = true;
		}
	}

	cout << "\nYou have $" + money + " in pocket and $" + moneyInBank + " in the bank.";
	
	return 0;

}

