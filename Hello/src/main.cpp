/*
 * main.cpp
 *
 *  Created on: Aug 30, 2014
 *      Author: pcoo0
 */

#include <iostream>
#include <string>

#include "message.h"

using namespace std;

int main() {
	cout << "Entrez votre nom: " << endl;
	string first_name;
	cin >> first_name;
	welcome(first_name);
	return 0;
}
