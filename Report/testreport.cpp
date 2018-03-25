/*
 * testreport.cpp
 *
 *  Created on: Feb 9, 2018
 *      Author: Felix
 */
#include "Report.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	//invoking the default Constructor
	Report report1;

	//outputting the info in the default constructor
	report1.print();

	//blanck space
	cout << endl << endl;

	//invoking the input given constructor
	Report report2{40058229,"Felix Wawrosz","Why Raise your children to think like a scientist", 2018, "Education","Concordia University"};


	//outputting the report info using getters
	cout << "Outputting report info:"<<endl;
	cout << "Institution: " << report2.getInstitution()<< endl;
	cout << "Departement: " << report2.getDepartement() << endl;

	//blank space
	cout << endl << endl;

	//all info of book 2
	report2.print();

	return 0;
}




