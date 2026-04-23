#include "Algorithms.h"

void Algorithms::bubbleSortAsc(std::vector<Book>& books)
{
    int n = books.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (books[j].title > books[j + 1].title) {
                std::swap(books[j], books[j + 1]);
            }
        }
    }
}

void Algorithms::bubbleSortDesc(std::vector<Book>& books)
{
    int n = books.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (books[j].title < books[j + 1].title) {
                std::swap(books[j], books[j + 1]);
            }
        }
    }
}

void Algorithms::bubbleSortAuthorAsc(std::vector<Book>& books)
{
    int n = books.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (books[j].author > books[j + 1].author)
            {
                std::swap(books[j], books[j + 1]);
            }
        }
    }
}


void Algorithms::bubbleSortTitleAsc(std::vector<Book>& books)
{
    int n = books.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (books[j].title> books[j + 1].title)
            {
                std::swap(books[j], books[j + 1]);
            }
        }
    }
}

void Algorithms::showData(std::vector<Book>& books)
{
    for (const auto& book : books)
    {
        std::cout << "Id: " << book.id + ", " << "Tytul: " << book.title + ", " << "Autor : " << book.author + ", " << "Data wydania : " << book.issueDate + ", " << "Numer seryjny : " << book.serialNumber + ", " << std::endl;
    }
}

void Algorithms::ShowbubbleSortAuthorAsc(std::vector<Book>& books)
{
}
