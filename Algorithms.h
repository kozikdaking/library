#pragma once
#include<vector>
#include<algorithm>
#include"Book.h"
class Algorithms
{
public:
	void bubbleSortAsc(std::vector<Book>& books);
	void bubbleSortDesc(std::vector<Book>& books);
	void bubbleSortAuthorAsc(std::vector<Book>& books);
	void ShowbubbleSortAuthorAsc(std::vector<Book>& books);
	void bubbleSortTitleAsc(std::vector <Book>& books);
	void showData(std::vector <Book>& books);
};

