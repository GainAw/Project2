// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

constexpr int sub(int curyear, int year)
{
	return(curyear - year);
}

int main()
{

	string title, author;
	int	pages, year, curyear;

	cout << "Please type in the title of a book: ";
	getline(cin, title);
	cout << "Please type in the title of the author: ";
	getline(cin, author);
	cout << "When was this book published: ";
	cin >> year;
	cout << "How many pages does this book have: ";
	cin >> pages;
	cout <<"What year is it: ";
	cin >> curyear;
	const int bage = sub(curyear, year);
	if (bage < 10) {
		cout << "This book is younger than ten years old!!!!" << endl;
	}
	else {
		cout << "This book is aleast ten years old!" << endl;
	}
	if (pages < 100) {
		cout << "This is a short book!" << endl;
	}
	else if (100 <= pages < 300) {
		cout << "This book is an average book!" << endl;
	}
	else {
		cout << "This is a long book!!!!!!" << endl;
	}
	return(0);
}
