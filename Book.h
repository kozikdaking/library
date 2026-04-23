#pragma once
#include <iostream>
#include<string>
class Book
{
private:
public:
	std::string id, title, author, issueDate, serialNumber;
	Book(const std::string id, const std::string& title, const std::string& author, const std::string& issueDate, const std::string& serialNumber)
		: id(id),title(title), author(author), issueDate(issueDate), serialNumber(serialNumber)
	{
	}
};

