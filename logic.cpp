#include "logic.h"
void Logic::choice(std::vector<Book>& books)
{
	do
	{
		std::cout << std::endl;
		std::cout << "Witaj w bibliotece" << std::endl;
		std::cout << "1. Zarzadzaj ksiazkami" << std::endl;
		std::cout << "2. Wyszukaj" << std::endl;
		std::cout << "3. Sortuj" << std::endl;
		std::cout << "4. Inne" << std::endl;
		std::cout << "5. Wyjdz" << std::endl;

		std::cin >> choose;
		std::cin.ignore();

		switch (choose)
		{
		case 1: // MENAGE
		{
			std::cout << std::endl;
			std::cout << "1. Dodaj ksiazke" << std::endl;
			std::cout << "2. Usun ksiazke" << std::endl;
			std::cout << "3. Wypozycz ksiazke" << std::endl;
			std::cout << "4. Oddaj ksiazke" << std::endl;
			std::cout << "5. Sprawdz stan" << std::endl;

			std::cin >> chooseMenage;
			std::cin.ignore();

			switch (chooseMenage)
			{
			case 1:
				addBook(books);
				break;

			case 2:
				deleteBook(books);
				break;

			case 3:
				std::cout << "" << std::endl;
				break;

			case 4:
				returnBook(books);
				break;

			case 5:
				checkBooks(books);
				break;
			}

			break;
		}

		case 2: // SEARCH
		{
			std::cout << std::endl;
			std::cout << "1. Szukaj autora" << std::endl;
			std::cout << "2. Szukaj tytulu" << std::endl;
			std::cout << "3. Szukaj numeru seryjnego" << std::endl;

			std::cin >> chooseSearch;
			std::cin.ignore();

			switch (chooseSearch)
			{
			case 1:
				searchAuthor(books);
				break;

			case 2:
				searchTitle(books);
				break;

			case 3:
				searchSerialNumber(books);
				break;
			}

			break;
		}

		case 3: // SORT
		{
			std::cout << std::endl;
			std::cout << "1. Sortuj po autorze" << std::endl;
			std::cout << "2. Sortuj po tytule" << std::endl;

			std::cin >> chooseSort;
			std::cin.ignore();

			switch (chooseSort)
			{
			case 1:
				sortByAuthor(books);
				alg.showData(books);
				break;

			case 2:
				sortByBookTitle(books);
				alg.showData(books);
				break;
			}

			break;
		}

		case 4: // OTHERS
		{
			std::cout << std::endl;
			std::cout << "1. Statystyki" << std::endl;

			std::cin >> chooseOthers;
			std::cin.ignore();

			switch (chooseOthers)
			{
			case 1:
				std::cout << "Brak statystyk" << std::endl;
				break;

			}

			break;
		}

		case 5:
			std::cout << "Zamykanie programu..." << std::endl;
			break;
		}

	} while (choose != 5);
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

void Logic::searchAuthor(std::vector<Book>& books)
{
	system("cls");
	bool validTitle = true;
	std::cout << "Podaj autora: ";
	std::getline(std::cin, author);
	alg.bubbleSortTitle(books);
	int index = alg.binarySearchAuthor(books, author);

	if (index != -1)
	{
		system("cls");
		std::cout << "Znaleziono: "
			<< books[index].id << " "
			<< books[index].title << " "
			<< books[index].author << " "
			<< books[index].issueDate << " "
			<< books[index].serialNumber << " ";
	}
	else
	{
		std::cout << "Nie znaleziono takiej ksiazki" << std::endl;
	}
}

void Logic::searchTitle(std::vector<Book>& books)
{
	system("cls");
	bool validTitle = true;
	std::cout << "Podaj tytul: ";
	std::getline(std::cin, title);
	alg.bubbleSortTitle(books);
	int index = alg.binarySearchTitle(books, title);

	if (index != -1)
	{
		system("cls");
		std::cout << "Znaleziono: "
			<< books[index].id << " "
			<< books[index].title << " "
			<< books[index].author << " "
			<< books[index].issueDate << " "
			<< books[index].serialNumber << " ";
	}
	else
	{
		std::cout << "Nie znaleziono takiej ksiazki" << std::endl;
	}
}

void Logic::searchSerialNumber(std::vector<Book>& books)
{
	system("cls");
	bool validTitle = true;
	std::cout << "Podaj numer seryjny: ";
	std::getline(std::cin, serialNumber);
	alg.bubbleSortTitle(books);
	int index = alg.binarySearchSerialNumber(books, serialNumber);

	if (index != -1)
	{
		system("cls");
		std::cout << "Znaleziono: "
			<< books[index].id << " "
			<< books[index].title << " "
			<< books[index].author << " "
			<< books[index].issueDate << " "
			<< books[index].serialNumber << " ";
	}
	else
	{
		std::cout << " " << std::endl;
		std::cout << "Nie znaleziono takiej ksiazki" << std::endl;
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
	alg.bubbleSortAuthor(books);
}

void Logic::sortByBookTitle(std::vector<Book>&books)
{
	alg.bubbleSortTitle(books);
}



