/*
 * Book.h
 *
 *  Created on: Feb 9, 2018
 *      Author: Felix
 */

#ifndef BOOK_H_
#define BOOK_H_
#include "Reference.h"
#include <iostream>
#include <string>

class Book:public Reference{
public:
	//default constructor
	Book();
	//input given constructor
	Book(int id, string authoRef, string titleRef, int year, string publisherRef, int numPages);

	//getters
	int getNumberOfPages();//return the numbeer of pages
	string getPublisher(); // returns the name of the publisher

	//outputs the book info
	void print();

private:
	string publisher;
	int numberPages;
};




#endif /* BOOK_H_ */
