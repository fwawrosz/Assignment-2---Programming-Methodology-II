#include <iostream>
#include "Article.h"
#include <string>
using namespace std;

//default constructor
Article::Article():Reference()
{
	journal = "null";
	startPage = 0;
	endPage = 0;

}
//input constructor
Article::Article(int id, string authorRef, string titleRef, int yearRef, string journalRef, int start, int end):Reference(id,authorRef,titleRef,yearRef)
{
	journal = journalRef;
	startPage = start;
	endPage = end;

}

//getters
string Article::getJournal() // return name of the journal
{
	return journal;
}
int Article::getStartPage() // return start page
{
	return startPage;
}
int Article::getEndPage() // return the end page
{
	return endPage;
}
int Article::getNumberOfPages() // returns the number of pages
{
	return endPage-startPage;
}

//outputs all info
void Article::print()
{
	cout <<"Information about the Article: " << endl;
	cout <<"Journal: " << journal << endl;
	cout <<"Number of pages: " << getNumberOfPages() << endl;
	Reference::print();
}


