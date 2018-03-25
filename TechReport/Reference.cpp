//============================================================================
// Name        : Reference.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Reference.h"
#include <iostream>
#include <string>
using namespace std;

Reference::Reference() // default constructor
{
	ID = 0;
	author = "null";
	title = "null";
	yearPublication = 0;

}
Reference::Reference(int id, string authorRef, string titleRef, int year) // input given constructor
{
	ID = id;
	author = authorRef;
	title = titleRef;
	yearPublication = year;
}

//getters
int Reference::getID() // returns the ID
{
	return ID;
}
string Reference::getAuthor() // return the authors name
{
	return author;
}
string Reference::getTitle() // returns the title
{
	return title;
}
int Reference::getYear() // returns the publication date
{
	return yearPublication;
}

//Display Reference Vars.
void Reference::print()
{
	cout << "Unique Identification number is: " << ID << endl;
	cout << "Name of the Author: " << author << endl;
	cout << "Title of the Publication: " << title << endl;
	cout << "Year of Publication: " << yearPublication << endl;
}


