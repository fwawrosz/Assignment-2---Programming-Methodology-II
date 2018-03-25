/*
 * Report.h
 *
 *  Created on: Feb 9, 2018
 *      Author: Felix
 */

#ifndef REPORT_H_
#define REPORT_H_
#include "Reference.h"
#include <String>
using namespace std;

class Report:public Reference{
public:
	//default constructor
	Report();
	//input given constructor
	Report(int id, string authorRef, string titleRef,int year, string departementRef,string institutionRef);

	//getters
	string getDepartement();//returns name of departement
	string getInstitution();//return name of institution

	//print info of the Report
	void print();
private:
	string departement;
	string institution;
};





#endif /* REPORT_H_ */
