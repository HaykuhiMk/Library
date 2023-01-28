#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>

class Library
{
public:	
	Library();
	std::string getLibName();
	void setLibName(const std::string&);
	void takeBook(Student&, Book&);
	void giveBook(Student&, Book&);
	void showLibBooks();
private:
	std::string libName;
	std::vector<Book> libBooks;
};

#endif	//LIBRARY_H	
