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



void Algorithms::bubbleSortAuthor(std::vector<Book>& books)
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


void Algorithms::bubbleSortTitle(std::vector<Book>& books)
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


int Algorithms::binarySearchAuthor(std::vector<Book>& books, const std::string author)
{
    int left = 0;
    int right = books.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (books[mid].author == author)
        {
            return mid;
        }
        else if (books[mid].author > author)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}

int Algorithms::binarySearchTitle(std::vector<Book>& books, std::string title)
{
    int left = 0;
    int right = books.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (books[mid].title == title)
        {
            return mid;
        }
        else if (books[mid].title > title)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}

int Algorithms::binarySearchSerialNumber(std::vector<Book>& books, std::string serialNumber)
{
    int left = 0;
    int right = books.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (books[mid].serialNumber == serialNumber)
        {
            return mid;
        }
        else if (books[mid].serialNumber > serialNumber)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}


void Algorithms::showData(std::vector<Book>& books)
{
    for (const auto& book : books)
    {
        std::cout << "Id: " << book.id + ", " << "Tytul: " << book.title + ", " << "Autor : " << book.author + ", " << "Data wydania : " << book.issueDate + ", " << "Numer seryjny : " << book.serialNumber + ", " << std::endl;
    }
}
