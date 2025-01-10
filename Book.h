#pragma once
class Book
{
private:
	std::string title, author;
public:
	Book(const std::string& title, const std::string& author)
		: title(title), author(author)
	{
	}
};

