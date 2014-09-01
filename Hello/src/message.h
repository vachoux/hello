/*
 * message.h
 *
 *  Created on: Sep 1, 2014
 *      Author: pcoo0
 */

#ifndef MESSAGE_H_
#define MESSAGE_H_

#include <iostream>
#include <string>

void welcome(std::string& first_name) {
	using namespace std;

	cout << "Bonjour " << first_name
	     << ", bien du plaisir avec C++!!" << endl;
}


#endif /* MESSAGE_H_ */
