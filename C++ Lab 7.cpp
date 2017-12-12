#include "stdafx.h"
#include <iostream>

using namespace std;

//You asked for the shape codes to be constant but i felt as though they really were not needed
//also i feel like i am overcoding is there a way to write less code and still get the same production 

//define constant variables for the program 
//const char c, s, t, r;
const float PI = 3.14159;

//find the area of a square 
float area_sqr(float side)
{
	//define the variables 
	float aSqr;

	//get the formula for the area 
	aSqr = side * side;

	return aSqr;
}
//find the area of a triangle 
float area_tri(float height, float width)
{
	//define the variables 
	float aTri;

	//get the formula for the area of a triangle 
	aTri = height * width * 0.50;

	return aTri;
}
//get the area of a circle 
float area_cir(float radius)
{
	//Define the variables 
	float aCir;

	//get the formula for the area of a circle 
	aCir = radius * radius * PI;

	return aCir;
}
//get the area of a rectangle 
float area_rec(float height, float width)
{
	//define the variables 
	float aRec;

	//get the formuala for the area of a triangle 
	aRec = height * width;

	return aRec;
}
int main()
{
	//define the variables 
	float side, height, width, radius;
	char shape;
	float aCir, aTri, aRec, aSqr;

	//have the user input which shape it would like the area of 
	cout << "Please enter either c, s, r, or t" << endl;
	cout << "to find the area of a circle, square, rectagle or a triangle ";
	cin >> shape;
	cout << endl;

	if (shape == 'c')
	{
		//get the radius for the circle
		cout << "You have chosen a circle. Now enter the radius for the circle.. ";
		cin >> radius;

		//call the function and get the area
		aCir = area_cir(radius);

		//display the output
		cout << "The area of this circle is.. " << aCir << endl;
	}
	else if (shape == 's')
	{
		//ask the user to enter the side of the square
		cout << "You have chosen the a square. Please enter the side of the square ";
		cin >> side;

		//call the funtion and get the area of the square
		aSqr = area_sqr(side);

		//display the output
		cout << "The area of this square is.. " << aSqr << endl;
	}
	else if (shape == 'r')
	{
		//aske the user to enter the height and the width of the rectangle
		cout << "You have chosen a rectangle. Please enter the Height.. ";
		cin >> height;

		//ask for the width =
		cout << "Now enter the width of the rectangle.. ";
		cin >> width;

		//call the function and get the area of the rectangle
		aRec = area_rec(height, width);

		//display the output 
		cout << "The area of your rectangle is.. " << aRec << endl;
	}
	else if (shape == 't')
	{
		//ask the user to enter the height 
		cout << "You have chosen a triangle. Please enter the height.. ";
		cin >> height;

		//ask the user to enter the width
		cout << "Now please enter the width.. ";
		cin >> width;

		//call the function and get the area of the triangle 
		aTri = area_tri(height, width);

		//display the output
		cout << "The area of this triangle is.. " << aTri << endl;

	}
	else if (shape != 'c' || 's' || 'r' || 't')
	{
		//tell the user that it is an invalid input 
		cout << "That is an invalid input " << endl;

		//have the user reenter a character
		cin.clear();
		cin.ignore();
	}
	system("pause");
	return 0;
}
