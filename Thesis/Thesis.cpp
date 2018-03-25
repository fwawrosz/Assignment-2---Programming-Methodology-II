//============================================================================
// Name        : Thesis.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Thesis.h"
using namespace std;

//default constructor
Thesis::Thesis():Report()
{
	numberPages = 0;
	supervisor = "null";
	degree = "null";
}
//input given constructor
Thesis::Thesis(int id, string author, string title, int year, string institution, string departement, int pages, string supervisor, string degree):Report(id,author,title,year,institution,departement)
{
	numberPages = pages;
	this->supervisor = supervisor;
	this->degree = degree;

}

//getters
int Thesis::getNumberPages()
{
	return numberPages;
}
string Thesis::getSupervisor()
{
	return supervisor;
}
string Thesis::getDegree()
{
	return degree;
}

//prints all info
void Thesis::print()
{
	cout << "Thesis information: " <<endl;
	cout << "Number of pages: " << numberPages << endl;
	cout << "Supervisor: " << supervisor << endl;
	cout << "Degree: " << degree << endl;
	Report::print();

}
