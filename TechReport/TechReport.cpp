
#include <iostream>
#include "TechReport.h"
#include <String>
using namespace std;

//default Constructor
TechReport::TechReport():Report()
{
	URL = "http://www.null.com";
}
//input given constructor
TechReport::TechReport(int id, string authorRef, string titleRef,int year, string departementRef,string institutionRef,string url):Report(id,authorRef,titleRef,year,departementRef,institutionRef)
{
	URL = url;
}

//getter
string TechReport::getURL() //return the URL
{
	return URL;
}

//print all info
void TechReport::print()
{
	cout << "URL: " << URL << endl;
	Report::print();
}


