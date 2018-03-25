/*
 * testBook.cpp
 *
 *  Created on: Feb 9, 2018
 *      Author: Felix
 */
#include <iostream>
#include "Book.h"
#include <string>
using namespace std;

int main(){
	//invoking the default Constructor
	Book book1;

	//outputting the info in the default constructor
	book1.print();

	//blacnk space
	cout << endl << endl;

	//invoking the input given constructor
	Book book2{264875,"Nikky Tiewishaw","The biggest Empty book ever", 2018, "Penguin Publishing",1000000000};

	//outputtinf the book info using getters
	cout << "Outputting book info:"<<endl;
	cout << "Publisher: " << book2.getPublisher() << endl;
	cout << "NUmber of Pages: " << book2.getNumberOfPages() << endl;

	//blank space
	cout << endl << endl;

	//all info of book 2
	book2.print();


	return 0;
}



