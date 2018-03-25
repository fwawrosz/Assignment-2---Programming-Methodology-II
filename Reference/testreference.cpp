/*
 * testreference.cpp
 *
 *  Created on: Feb 9, 2018
 *      Author: Felix
 */
using namespace std;
#include <iostream>
#include <string>
#include "reference.h"

int main(){
	// call default constructor
	Reference ref1;

	//outputs ref1 details
	cout << "Default Constructor output: " << endl;
	ref1.print();

	//blank lines for output
	cout << endl << endl;

	//call input constructor
	Reference ref2{45782,"Felix Wawrosz", "Introduction to Special Relativity for Kids", 2018};

	//outputs ref2 details using getters
	cout << "Input Constructor Details: " << endl;
	cout << "Reference Identification: " << ref2.getID() << endl;
	cout << "Name of the Author: " << ref2.getAuthor() << endl;
	cout << "Name of the Publication: " << ref2.getTitle() << endl;
	cout << "Year of Publication: " << ref2.getYear() << endl;

	//done testing Reference
}




