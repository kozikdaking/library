#pragma once
#include<vector>
#include<iostream>
#include<string>
#include"Book.h"
class Logic
{
private:

	int choose;
	std::vector<Book>library;
	std::string add;
	std::string title;
	std::string author;
	std::string borrowerName;
	std::string expireDate;
public:

	void addBook();
	void returnBook();
	void stats();
	void choice();
	
};

