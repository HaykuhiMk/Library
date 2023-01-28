#ifndef USER_H
#define USER_H

#include <vector>
#include "book.h"

class Student
{
public:
	std::string getName();
	void setName(const std::string&);
	void addBook(Book&);
	void removeBook();
	void showStBooks();
private:
	std::string name;	
	std::vector<Book> books;
};

#endif	//USER_H
