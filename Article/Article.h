/*
 * Article.h
 *
 *  Created on: Feb 9, 2018
 *      Author: Felix
 */

#ifndef ARTICLE_H_
#define ARTICLE_H_
#include "Reference.h"
using namespace std;
#include <iostream>
#include <String>

class Article:public Reference{
public:
	//default constructor
	Article();
	//input constructor
	Article(int id, string authorRef, string titleRef, int yearRef, string journalRef, int start, int end);

	//getters
	string getJournal(); // return name of the journal
	int getStartPage(); // return start page
	int getEndPage(); // return the end page
	int getNumberOfPages(); // returns the number of pages

	//outputs all info
	void print();

private:
	string journal;
	int startPage;
	int endPage;

};





#endif /* ARTICLE_H_ */
