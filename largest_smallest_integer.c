/****************************************************************************
Function Title: Main
Summary: Takes 5 integers and prints out which integer 
is the largest and which is the smallest
Inputs:none
Outputs:none
Compile Instructions: gcc largest_smallest_integer.c -o largest_smallest_integer.exe
*****************************************************************************/
/****************************************************************************
Pseudocode

Begin
	Assign variables to int
	print "Enter 5 digits in any order: "
	Get 5 numbers
	if a > b and a > c and a > d and a > e
	then
		max=a
	else if b > c and b > d and b > e
	then
		max=b
	else if c > d and c > e
	then
		max=c
	else if d>e
	then
		max=d
	else 
		max=e
	Endif
	if a < b and a < c and a < d and a < e
	then
		min=a
	else if b < c and b < d and b < e
	then
		min=b
	else if c < d and c < e
	then
		min=c
	else if d<e
	then
		min=d
	else
		min=e
	Endif
	printf "Largest integer: "
	printf "Smallest integer: "
End
*****************************************************************************/
#include <stdio.h>
int main()
{												//Begin
	int a, b, c, d, e, max, min;				//Assign variables to int
	printf("Enter 5 integers in any order: ");	//print "Enter 5 digits in any order: "
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);	//Get 5 numbers
	if (a > b && a > c && a > d && a > e)		//if a > b and a>c and a > d and a > e
	{											//then
		max = a;								//	max=a
	}
	else if (b > c && b > d && b > e)			//else if b > c and b > d and b > e
	{											//then
		max = b;								//	max=b
	}
	else if (c > d && c > e)					//else if c > d and c > e
	{											//then
		max = c;								//	max=c
	}
	else if (d > e)								//else if d>e
	{											//then
		max = d;								//	max=d
	}
	else                                        //else
	{
		max = e;								//	max=e
	}
	if (a < b && a < c && a < d && a < e)		//if a < b and a < c and a<d and a < e
	{											//then
		min = a;								//	min=a
	}
	else if (b < c && b < d && b < e)			//else if b < c and b < d and b < e
	{											//then
		min = b;								//	min=b
	}
	else if (c < d && c < e)					//else if c < d and c < e
	{											//then
		min = c;								//	min=c
	}
	else if (d < e)								//else if d<e
	{											//then
		min = d;								//	min=d
	}
	else                                        //else
	{											//	min=e
		min = e;
	}
	printf("Largest integer: %d\n", max);		//printf "Largest integer: "
	printf("Smallest integer: %d", min);		//printf "Smallest integer: "
	return 0;
}												//end