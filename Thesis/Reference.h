/*
 * Reference.h
 *
 *  Created on: Feb 9, 2018
 *      Author: Felix
 */

#ifndef REFERENCE_H_
#define REFERENCE_H_
#include <string>
using namespace std;

class Reference{
public:
	Reference(); // default constructor
	Reference(int, string, string, int); // input given constructor

	//getters
	int getID(); // returns the ID
	string getAuthor(); // return the authors name
	string getTitle(); // returns the title
	int getYear(); // returns the publication date

	//Display Reference Vars.
	void print();

protected:
private:
	int ID;
	string title;
	string author;
	int yearPublication;


};





#endif /* REFERENCE_H_ */
