# Assignment-2---Programming-Methodology-II
Assignment 2 in the class Programming Assignment II

COEN 244 – Winter 2018
Assignment 2: Class Inheritance

Introduction
This assignment consists of creating a hierarchy of classes for representing bibliographic
references, as well as a simple data structure for storing them. The hierarchy of
references has one base class called Reference.
All the References have a unique identifier, a title, an author, and a year of publication.
The implementation of the classes must follow the object-oriented principles presented
in the class.

Q1. Class Reference (15 marks)
Implement a class, called Reference, to represent the characteristics that are common to
all the References. Namely,
1. All references must have a unique identifier (of type int).
2. All references have a title and author (both of type string or char*), as well a year of
publication (of type int);
3. The class Reference has a default constructor that initializes data members to
default values.
4. The class Reference has one regular constructor: Reference(int id, char* author,
char* title, int year). Note that you can use string instead of char*. The constructor
must initialize the id, author, title and year of publication of this reference using the
given parameters.
5. int getId(): returns the unique identifier of this Reference;
6. char* getAuthor(); returns the author of this Reference;
7. char* getTitle(): returns the title of this Reference;
8. int getYear(): returns the year of publication of this Reference;
9. void print(): prints a string representation of this Reference consisting of the id
number, reference title, author and year of publication;
Deliverable: reference.h, reference.cpp, and testreference.cpp (you are free to choose
how many objects you want to create in order to test the class Reference. This applies
also to subsequent questions).

Q2. Class Article (15 marks)
Article is a specialized Reference that also has information about the journal where the
article is published, start page, and end page. More precisely,
1. An Article is a derived class of Reference:
2. It also stores information about the journal (type string or char*), and the startPage
and endPage (both of type int);
3. It has a default constructor that initializes data members, including the data
members of the base class, to default values.
4. It has one regular constructor: Article (int id, char* author, char* title, int year, char*
journal, int starPage, int endPage). It initializes all the characteristics that are
common to all References, as well as the journal, and page range. You can
assume that the parameters are valid;
5. char* getJournal(): returns the name of the journal;
6. int getStartPage(): returns the start page;
7. int getEndPage(): returns the end page;
8. It implements the member function int getNumberOfPages(), which returns the total
number of pages (computed using starPage and endPage);
9. void print(): returns a string representation of objects of Article. This member
function overrides the one defined in the class Reference.
Deliverable: article.h, article.cpp, and testarticle.cpp

Q3. Class Book (15 marks)
Book is also a specialized Reference that has information about the publisher of this
reference. More precisely,
1. Book is a derived class of Reference;
2. It stores the publisher (type string or char*) of this reference and the number of
pages of this book (type int);
3. It has a default constructor that initializes data members, including the data
members of the base class, to default values.
4. It has one regular constructor: Book(int id, char* author, char* title, int year, char*
publisher, int pages). It initializes the properties that are common to all References,
as well as the characteristics of this Book;
5. It implements the member function int getNumberOfPages(), which returns the
number of pages of this reference. In the case of Book reference, the number of
pages is a single number, therefore, the member function simply returns this
number;
6. void print(): returns a string representation of objects of Book. This member
function overrides the one defined in References.
Deliverable: book.h, book.cpp, and testbook.cpp

Q4. Class Report (15 marks)
Report is a specialized Reference that represents the characteristics that are common to
all the Reports. They are two types of reports: Technical Reports and Thesis (see Q5
and Q6). Namely,
1. A Report is a specialized kind of Reference. Therefore, it must be a derived class
of Reference.
2. All Reports must have a department and institution (both of type string or char*);
3. It has a default constructor that initializes data members, including the data
members of the base class, to default values.
4. The class Report has one regular constructor: Report(int id, char* author, char*
title, int year, char* institution, char* department ). It initializes the characteristics
common to all References, as well as the institution and department.
5. char* getInstitution(): returns the name of the institution;
6. char* getDepartment(): returns the name of the department;
7. void print(): returns a string representation of objects of Reports. This member
function overrides the one defined in the class Reference.
Deliverable: report.h, report.cpp, and testreport.cpp

Q5. Class TechReport (20 marks)
TechReport is a specialized Report. More precisely,
1. A TechReport is a specialized kind of Report. Therefore, it must be a derived class
of Report;
2. A technical report is stored on the Web at a specific URL (Uniform Resource
Locator), the URL (type string or char*) is stored in an attribute of the TechReport
class;
3. The class has a default constructor that initializes data members, including the
data members of the base classes (Report and Reference), to default values.
4. The class TechReport has one regular: TechReport(int id, char* author, char* title,
int year, char* institution, char* department, char* url). It initializes the
characteristics common to all Reports, as well as the report URL.
5. char* getUrl(): returns the URL of this document;
6. Being stored on the web, the document consists of a single page. Therefore, the
member function int getNumberOfPages() always return 1;
7. void print(): returns a string representation of objects of Reports. This member
function overrides the one defined in the class Report, which in turn overrides the
member function print() of Reference.
Deliverable: techreport.h, techreport.cpp, and testechreport.cpp

Q6. Class Thesis (20 marks)
Thesis is also a specialized Report, that has information about the supervisor and the
degree to obtain after completing the thesis. Namely,
1. A Thesis is a specialized kind of Report. Therefore, it must be a derived class of
Report;
2. All such documents have a number of pages (type int), a supervisor and degree
(both of type string or char*);
3. It has a default constructor that initializes data members, including the data
members of the base classes (Report and Reference), to default values.
4. The class Thesis has one regular constructor: Thesis( int id, char* author, char*
title, int year, char* institution, char* department, int pages, char* supervisor, char*
degree ). It initializes the characteristics common to all Reports, as well as the
ones proper to the class Thesis.
5. It implements the member function int getNumberOfPages(), which returns the
number of pages of this reference. In the case of Thesis reference, the number of
pages is a single number, therefore, the member function simply returns this
number;
6. char* getSupervisor(): returns the name of the supervisor;
7. char* getDegree(): returns the name of degree;
8. void print(): returns a string representation of objects of Reports. This member
function overrides the one defined in the class Report, which in turn overrides the
member function print() of Reference.

