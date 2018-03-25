/*
 * testarticle.cpp
 *
 *  Created on: Feb 9, 2018
 *      Author: Felix
 */
#include "Article.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

	//invoking deafult constructor
	Article article1;

	//print out default constructor info
	article1.print();

	//add some lines
	cout << endl << endl;

	//invoking input constructor
	Article article2{8765,"Felix Wawrosz","Why YOU Should Teach Your Kids Special Relativity at a Young Age!",2018,"Early Childhood Education",5,19};

	//print Journa; info using getters
	cout << "Info On this Journal: " << endl;
	cout << "Journal Name: " << article2.getJournal() << endl;
	cout << "Start Page of article in the journal: " << article2.getStartPage() << endl;
	cout << "End Page of article in the journal: " << article2.getEndPage() << endl;
	cout << "Number og Pages this article is: " << article2.getNumberOfPages() << endl;

	//clear space
	cout << endl << endl;
	//prints all info
	article2.print();


	return 0;
}




