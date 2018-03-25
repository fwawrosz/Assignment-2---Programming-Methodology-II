//============================================================================
// Name        : Book.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <String>
#include "Book.h"
using namespace std;

//default constructor
Book::Book():Reference()
{
	publisher = "null";
	numberPages = 0;
}
//input given constructor
Book::Book(int id,string authorRef, string titleRef,int year,string publisherRef,int numPages):Reference(id,authorRef,titleRef,year)
{
	numberPages = numPages;
	publisher = publisherRef;
}

//getters
int Book::getNumberOfPages()//return the numbeer of pages
{
	return numberPages;
}
string Book::getPublisher()// returns the name of the publisher
{
	return publisher;
}

//outputs the book info
void Book::print()
{
	cout << "Information about this book: " << endl;
	cout << "Publisher: " << publisher << endl;
	cout << "Number of Pages in this Book: " << numberPages << endl;
	Reference::print();
}


