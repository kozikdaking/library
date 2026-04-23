#include<iostream>
#include<vector>
#include"Logic.h"
#include"Book.h"

int main()
{
	Logic logic;
	std::vector<Book> books;
	books.emplace_back("1","Matematyka", "Jerzy S", "21", "200");
	books.emplace_back("2","Fizyka", "Kamil P", "231", "240");
	books.emplace_back("3","Chemia", "Filip F", "214", "260");
	books.emplace_back("4","Biologia", "Kacper R", "215", "210");
	logic.choice(books);

}