#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book
{
public:
	std::string getTitle();
	void setTitle(const std::string&);
	std::string getAuthor();
	void setAuthor(const std::string&);
private:
	std::string title;
	std::string author;
};

#endif	//BOOK_H
