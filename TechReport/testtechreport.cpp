/*
 * testtechreport.cpp
 *
 *  Created on: Feb 9, 2018
 *      Author: Felix
 */
#include "TechReport.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	//invoking the default Constructor
	TechReport techReport1;

	//outputting the info in the default constructor
	techReport1.print();

	//blanck space
	cout << endl << endl;

	//invoking the input given constructor
	TechReport techReport2{3892618,"Felix Wawrosz","Statistical Analysis of childhood education by province", 2018, "Education","Concordia University","http://www.educatemychild.com"};


	//outputting the Tech report info using getters
	cout << "Outputting Tech report info:"<<endl;
	cout << "URL: " << techReport2.getURL() << endl;

	//blank space
	cout << endl << endl;

	//all info of book 2
	techReport2.print();

		return 0;

}



