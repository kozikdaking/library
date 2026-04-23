#pragma once
#include<vector>
#include<algorithm>
#include"Book.h"
class Algorithms
{
public:
	void bubbleSortAsc(std::vector<Book>& books);
	void bubbleSortDesc(std::vector<Book>& books);
	void bubbleSortAuthor(std::vector<Book>& books);
	void bubbleSortTitle(std::vector <Book>& books);
	void showData(std::vector <Book>& books);
	int binarySearchAuthor(std::vector <Book>& books, const std::string author);
	int binarySearchTitle(std::vector <Book>& books, std::string author);
	int binarySearchSerialNumber(std::vector <Book>& books, std::string id);
};

