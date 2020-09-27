/**************************************************************************************************
Function Title: EAN Computing Program
Summary:  Evaluates the check digit of an EAN 
Name: Connor Rasmussen
Class: ECE 1400, 9/22/20
*****************************************************************************************/
/****************************************************************************************************
Pseudocode
Begin
	Assign Int for 19 variables
	Print"Enter the first 12 digits of an EAN:"
	Get value of EAN
	Add B+D+F+H+J+L
	Multiply the result by 3
	Add A+C+E+G+I+K to the value gained in previous line
	Subtract 1
	Find the remainder by % 10
	Subtract the result from 9
	Print "Check digit: "
End
************************************************************************************************************************/
#include <stdio.h>

int main()
{																										//Begin
	int A, B, C, D, E, F, G, H, I, J, K, L, Value1, Value2, Value3, Value4, Value5, Value6, ValueFin;	
	//Assign Int for 19 variables
	printf("Enter the first 12 digits of an EAN: ");									//Print"Enter the first 12 digits of an EAN:"
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",\
		&A,&B,&C,&D,&E,&F,&G,&H,&I,&J,&K,&L);											//Get value of EAN
	Value1 = B + D + F + H + J + L;														//Add B+D+F+H+J+L
	Value2 = Value1 * 3;																//Multiply the result by 3
	Value3 = A + C + E + G + I + K;														//Add A+C+E+G+I+K to the value gained in previous line
	Value4 = Value2 + Value3;															//Add A+C+E+G+I+K to the value gained in previous line
	Value5 = Value4 - 1;																//Subtract 1
	Value6 = Value5 % 10;																//Find the remainder by % 10
	ValueFin = 9 - Value6;																//Subtract the result from 9
	printf("Check digit: %d", ValueFin);												//Print "Check digit: "
	return 0;
}																						//end