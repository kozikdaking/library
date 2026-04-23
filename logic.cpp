#include "logic.h"
void Logic::choice(std::vector<Book>& books)
{
	do
	{
		std::cout << "Witaj w bibliotece" << std::endl;
		std::cout << "1.Dodaj ksiazke" << std::endl;// done
		std::cout << "2.Usun ksiazke" << std::endl;// to do
		std::cout << "3.Wypozycz ksiazke" << std::endl; //to do
		std::cout << "4.Oddaj ksiazke" << std::endl;//to do
		std::cout << "5.Sprawdz stan" << std::endl;//to do
		std::cout << "6.Lista Wypozyczonych ksiazkek" << std::endl;// to do
		std::cout << "7.Szukaj ksiazki" << std::endl;//to do, inside sort func
		std::cout << "8.Szukaj autora" << std::endl;//to do, inside sort func
		std::cout << "9.Sortuj po tytule" << std::endl;//done
		std::cout << "10.Sortuj po autorze" << std::endl;//done
		std::cout << "11.Terminy zwrotow" << std::endl;//done
		std::cout << "12.Statystyki" << std::endl;//to do
		std::cout << "13.Wyjdz" << std::endl;//done
		std::cin >> choose;
		std::cin.ignore();

		switch (choose)
		{
		case 1:
		{
			addBook(books);
			break;
		}
		case 2:
		{
			deleteBook(books);
			break;
		}
		case 3:
		{
			std::cout << "";
			break;
		}

		case 4:
		{
			returnBook(books);
			break;
		}
		case 5:
		{
			checkBooks(books);
			break;
		}

		case 6:
		{
			std::cout << "";
			break;
		}
		case 7:
		{
			std::cout << "";
			break;
		}
		case 8:
		{
			std::cout << "";
			break;
		}
		case 9:
		{
			sortByBookTitle(books);
			checkBooks(books);
			break;
		}
		case 10:
		{
			sortByAuthor(books);
			checkBooks(books);
			break;
		}
		case 11:
		{
			std::cout << "";
			break;
		}
		case 12:
		{
			std::cout << "";
			break;

		}
		}
	} while (choose != 13);
}



void Logic::addBook(std::vector<Book>& books)
{
	system("cls");

	std::cout << "Podaj id: ";
	std::getline(std::cin, id);

	std::cout << "Podaj tytul: ";
	std::getline(std::cin,title);

	std::cout << "Podaj autora: ";
	std::getline(std::cin,author);

	std::cout << "Podaj rok wydania: ";
	std::getline(std::cin,issueDate);

	std::cout << "Podaj numer seryjny: ";
	std::getline(std::cin,serialNumber);

	Book newBook(id,title, author,issueDate,serialNumber);
	books.push_back(newBook);
	system("cls");

}

void Logic::deleteBook(std::vector<Book>& books)
{
	std::cout << "Podaj numer seryjny ksiazki ktora chcesz usunac: ";
	std::getline(std::cin, id);
	auto it = std::find_if(books.begin(), books.end(),
		[&](const Book& b)
		{
			return b.id == id;
		});
	if (it != books.end())
	{
		books.erase(it);
		std::cout << "Usunieto ksiazke" << std::endl;;
	}
	else
	{
		std::cout << "Nie znaleziono ksiazki!" << std::endl;
	}
}

void Logic::returnBook(std::vector<Book>& books)
{
	system("cls");

	std::cout << "Podaj tytul: ";
	std::getline(std::cin, title);

	std::cout << "Podaj autora: ";
	std::getline(std::cin, author);

	std::cout << "Podaj rok wydania: ";
	std::getline(std::cin, issueDate);

	std::cout << "Podaj numer seryjny: ";
	std::getline(std::cin, serialNumber);

	std::cout << "Podaj imie" << std::endl;
	std::getline(std::cin, borrowerName);

	std::cout << "Podaj nazwisko" << std::endl;
	std::getline(std::cin, borrowerLastName);

	std::cout << "Podaj date urodzenia" << std::endl;
	std::getline(std::cin, borrowerDateOfBirth);
}

void Logic::checkBooks(std::vector<Book>& books)
{
	system("cls");
	alg.showData(books);
	std::cout << "" << std::endl;
}

void Logic::sortByAuthor(std::vector<Book>&books)
{
	alg.bubbleSortAuthorAsc(books);
}

void Logic::sortByBookTitle(std::vector<Book>&books)
{
	alg.bubbleSortTitleAsc(books);
}



