// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age, fahrenheit;
	cout << "Please enter in your age: ";
	cin >> age;
	int agenew = age + 10;
	cout << "You will be " << agenew << " in ten years" << endl;
	cout << "What is your current locations tempurature in degrees Fahrenheit: ";
	cin >> fahrenheit;
	double celsius = ((fahrenheit - 32) * 5/9);
	cout << "Well it is " << celsius << " degrees celsius." ;
	return 0;
}