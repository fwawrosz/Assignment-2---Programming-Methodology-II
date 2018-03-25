/*
 * TechReport.h
 *
 *  Created on: Feb 9, 2018
 *      Author: Felix
 */

#ifndef TECHREPORT_H_
#define TECHREPORT_H_
#include "Report.h"
#include <string>
using namespace std;

class TechReport:public Report{
public:
	//default Constructor
	TechReport();
	//input given constructor
	TechReport(int id, string authorRef, string titleRef,int year, string departementRef,string institutionRef,string url);

	//getter
	string getURL(); //return the URL

	//print all info
	void print();
private:
	string URL;
};





#endif /* TECHREPORT_H_ */
