#include <iostream>
#include "book.h"
#include "user.h"
#include "library.h"

int main()
{
	Student adequate;
	Book prof;
	Book prata;
	Library unknown;
	adequate.setName("Tom");
	prof.setTitle("Professional");
	prata.setTitle("C++ Primer Plus");
	unknown.showLibBooks();
	adequate.showStBooks();
	unknown.giveBook(adequate, prof);
	unknown.giveBook(adequate, prata);
	unknown.showLibBooks();
	adequate.showStBooks();
	unknown.takeBook(adequate, prata);
	unknown.takeBook(adequate, prof);
	unknown.showLibBooks();
	adequate.showStBooks();
}
