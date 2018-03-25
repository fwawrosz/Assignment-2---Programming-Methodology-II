
#include <iostream>
#include "Report.h"
#include <String>
using namespace std;

//default constructor
Report::Report():Reference()
{
	departement = "null";
	institution = "null";

}
//input given constructor
Report::Report(int id, string authorRef, string titleRef,int year, string departementRef,string institutionRef):Reference(id,authorRef,titleRef,year)
{
	departement = departementRef;
	institution = institutionRef;

}

//getters
string Report::getDepartement()//returns name of departement
{
	return departement;
}
string Report::getInstitution()//returnt name of institution
{
	return institution;
}

//print info of the Report
void Report::print()
{
	cout << "Info on the Report: " << endl;
	cout << "Departemenet: " << departement << endl;
	cout << "institution: " << institution << endl;
	Reference::print();
}

