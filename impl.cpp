#include <iostream>
#include <chrono>
#include <thread>
#include "book.h"
#include "user.h"
#include "library.h"

void waiting()
{
    for (int i = 0; i < 30; ++i)
    {
        std::cout << ". ";
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    std::cout << std::endl;
}

std::string Book::getTitle()
{
	return title;
}

void Book::setTitle(const std::string& title)
{
	this->title = title;
}

std::string Book::getAuthor()
{
	return author;
}

void Book::setAuthor(const std::string& author)
{
	this->author = author;
}

std::string Student::getName()
{
	return name;
}

void Student::setName(const std::string& name)
{
	this->name = name;
}	

void Student::addBook(Book& obj)
{
	books.push_back(obj);
	std::cout << "Student:  I'm taking '" << obj.getTitle() << "' book." << std::endl;
	waiting();
}

void Student::removeBook()
{
	books.pop_back();
	std::cout << "Student:  I'm returning the book." << std::endl;
	waiting();
}

void Student::showStBooks()
{
	if (books.empty())
	{
		std::cout << "Student:  I don't have a book." << std::endl;
	}
	else
	{
		std::cout << "Student:  I have these books : " << std::endl;
		for (auto i : books)
		{
			std::cout << i.getTitle() << std::endl;
		}
	}
	waiting();

}

Library::Library()
{
	Book mMeyers;
	Book mprof;
	Book mPrata;
	mMeyers.setTitle("Effective Modern C++");
	mprof.setTitle("Professional");
	mPrata.setTitle("C++ Primer Plus");
	libBooks.push_back(mMeyers);
	libBooks.push_back(mPrata);
	libBooks.push_back(mprof);
}

void Library::showLibBooks()
{
	if (libBooks.empty())
	{
		std::cout << "The library is closed." << std::endl;
	}
	else{
		std::cout << "Library: We have these books : " << std::endl;
		for (auto i : libBooks)
		{
			std::cout << i.getTitle() << std::endl;
		}
	}
	waiting();
}

std::string Library::getLibName()
{
	return libName;
}

void Library::setLibName(const std::string& libName)
{
	this->libName = libName;
}

void Library::takeBook(Student& st, Book& bk)
{
	st.removeBook();
	libBooks.push_back(bk);
	std::cout << "Library:  The book is returned." << std::endl;
	waiting();
}

void Library::giveBook(Student& st, Book& bk)
{
	st.addBook(bk);
	libBooks.pop_back();
	std::cout << "Library:  The book is given." << std::endl;
	waiting();
}

