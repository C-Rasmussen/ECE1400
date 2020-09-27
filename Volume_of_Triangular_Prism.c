/***********************************
Function Title: Volume of Tiangular Prism
Name: Connor Rasmussen
Class: ECE 1400, September 15th 2020
************************************/
/****************
Pseudocode

Begin
	Assign Base as a flaot
	Assign Length as a float
	Assign Height as a float
	Assign Volume as a float
	Print "Enter value of Base:"
	Get Value of Base
	Print "Enter value of Length"
	Get value of Length
	Print "Enter value of Height"
	Get value of Height
	Multiply Height*Length*Base 
	Divide this number by 2 to get Volume
	Print "Volume of Triangular Prism= the answer"
End
******************///////////////


#include <stdio.h>
int main()
{																// Begin
	float Base, Length, Height, Volume;						    // Assign Base, Length, Height, and Volume as a float
	printf("Enter value of Base:");							    // Print "Enter value of Base:"
	scanf_s("%f", &Base);										// Get Value of Base
	printf("Enter value of Length: ");							// Print "Enter value of Length"
	scanf_s("%f", &Length);										// Get value of Length
	printf("Enter value of Height:");							// Print "Enter value of Height"
	scanf_s("%f", &Height);									    // Get value of Height
	Volume = (Base * Length * Height) / 2;						// Multiply Height*Length*Base and Divide this number by 2 to get Volume
	printf("Volume of Triangular Prism: %.3f", Volume);		    // Print "Volume of Triangular Prism= the answer"


	return 0;
}																 //End