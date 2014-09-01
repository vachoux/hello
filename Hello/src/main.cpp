/*
 * main.cpp
 *
 *  Created on: Aug 30, 2014
 *      Author: pcoo0
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Entrez votre prénom: " << endl;
	string first_name;
	cin >> first_name;
	cout << "Bonjour " << first_name
	     << ", bienvenue dans le monde de C++!!" << endl;
	return 0;
}
