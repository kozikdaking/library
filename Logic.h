#pragma once
#include<vector>
#include<algorithm>
#include<iostream>
#include<string>
#include"Algorithms.h"
#include"Book.h"
class Logic
{
private:

	int choose;
	std::string id;
	std::string add;
	std::string title;
	std::string author;
	std::string serialNumber;
	std::string issueDate;
	std::string borrowerName;
	std::string borrowerLastName;
	std::string borrowerDateOfBirth;
	std::string expireDate;

	Algorithms alg;
public:

	void addBook(std::vector<Book>& books);
	void returnBook(std::vector<Book>& books);
	void checkBooks(std::vector<Book>& books);
	void sortByAuthor(std::vector<Book>& books);
	void sortByBookTitle(std::vector<Book>&books);
	void choice(std::vector<Book>& books);
	void deleteBook(std::vector<Book>& books);
	
};

