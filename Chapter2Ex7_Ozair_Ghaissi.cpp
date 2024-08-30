// Chapter2Ex7_Ozair_Ghaissi.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
* Title: Chapter 2 Excercise 7
File name: Chapter2Ex7_Ozair_Ghaissi.cpp
Programer: Ozair Ghaissi
Requirements:
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
The number of millimeters higher than the current level that the ocean’s level will be in 5 years.
The number of millimeters higher than the current level that the ocean’s level will be in 7 years.
The number of millimeters higher than the current level that the ocean’s level will be in 10 years.
Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so
that the user can enter the number of the number of millimeters the ocean level rises per year
*/

#include <iostream>
using namespace std;
const double levelRise = 1.5;

int main()
{

	double levelRise;
	double yearLevel5;
	double yearLevel7;
	double yearLevel10;
	cout << "Please enter the millimeter rise you expect each year";
	cin >> levelRise;
	yearLevel5 = levelRise * 5;
	yearLevel7 = levelRise * 7;
	yearLevel10 = levelRise * 10;
	cout << "After 5 years the Ocean will have risen" << yearLevel5 << "millimeters" << endl;
	cout << "After 7 years the Ocean will have risen" << yearLevel7 << "millimeters" << endl;
	cout << "After 10years the Ocean will have risen" << yearLevel10 << "millimeters" << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
