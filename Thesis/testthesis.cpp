/*
 * testthesis.cpp
 *
 *  Created on: Feb 9, 2018
 *      Author: Felix
 */

#include <iostream>
#include <string>
#include "Thesis.h"
using namespace std;

int main(){
	//invoking the default Constructor
	Thesis thesis1;

	//outputting the info in the default constructor
	thesis1.print();

	//blanck space
	cout << endl << endl;

	//invoking the input given constructor
	Thesis thesis2{272,"Felix Wawrosz","99% efficient AC to DC transformer", 2018, "Electrical and Computer Engineering","Concordia University",50,"Maria Fasciano","PhD in Electrical and Computer Engineering"};


	//outputting the Thesis report info using getters
	cout << "Outputting Thesis info:"<<endl;
	cout << "Thesis number of pages: " << thesis2.getNumberPages() << endl;
	cout << "Supervisor: " << thesis2.getSupervisor() << endl;
	cout << "Degree: " << thesis2.getDegree() << endl;

	//blank space
	cout << endl << endl;

	//all info of book 2
	thesis2.print();


	return 0;
}


