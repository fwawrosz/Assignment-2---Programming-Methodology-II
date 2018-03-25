/*
 * Thesis.h
 *
 *  Created on: Feb 9, 2018
 *      Author: Felix
 */

#ifndef THESIS_H_
#define THESIS_H_
#include <string>
#include "Report.h"
using namespace std;

class Thesis:public Report{
public:
	//default constructor
	Thesis();
	//input given constructor
	Thesis(int id, string author, string title, int year, string institution, string departement, int pages, string supervidor, string degree);

	//getters
	int getNumberPages();
	string getSupervisor();
	string getDegree();

	//prints all info
	void print();
private:
	int numberPages;
	string supervisor;
	string degree;
};





#endif /* THESIS_H_ */
