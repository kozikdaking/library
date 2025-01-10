#include "logic.h"


void Logic::addBook()
{
	system("cls");

	std::cout << "Podaj tytul: " << std::endl;
	std::getline(std::cin,title);

	std::cout << "Podaj autora" << std::endl;
	std::getline(std::cin,author);

	Book newBook(title, author);
	library.push_back(newBook);




}

void Logic::returnBook()
{
	std::cout << "usunieto ksiazke";
}

void Logic::choice()
{
	std::cout << "Witaj w bibliotece" << std::endl;

	std::cout << "1.Dodaj ksiazke" << std::endl;
	std::cout << "2.Usun ksiazke" << std::endl;
	std::cout << "3.Zwroc ksiazke" << std::endl;
	std::cout << "4.Sprawdz stan" << std::endl;
	std::cin>>choose;
	switch (choose)
	{
	case 1:
	{
		addBook();
		break;
	}
	case 2:
	{
		returnBook();
		break;
	}
	}


}
