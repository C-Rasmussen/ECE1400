/*********************************************
Function Title: Programming Project Ch. 3
Name: Connor Rasmussen
Class: ECE 1400
Date: 9/18/2020
Summary: To display numbers 1-16 in a 4X4 arrangment and sum together the rows, columns, and diagonalls
**********************************************/
/**********************************************
Pseudocode

Begin
	Assign int to A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, R1, R2, R3, R4, C1, C2, C3, C4, D1, D2
	Print "Enter the numbers 1-16 in any order for each variable without repeating any number"
	Print "Enter values for A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P"
	Get value for A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P
	Print the values of A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P in a 4x4 arrangement
	Add Variables A+B+C+D and set as R1
	Add Variables E+F+G+H and set as R2
	Add Variables I+J+K+L and set as R3
	Add Variables M+N+O+P and set as R4
	Add Variables A+E+I+M and set as C1
	Add Variables B+F+J+N and set as C2
	Add Variables C+G+K+O and set as C3
	Add Variables D+H+L+P and set as C4
	Add Variables A+F+K+P and set as D1
	Add Variables D+G+J+M and set as D2
	Print "Row sums: R1, R2, R3, R4"
	Print "Column Sums: C1 C2 C3 C4"
	Print "Diagonal Sums: D1, D2"
End
**********************************************/
#include <stdio.h>
int main()
{																																						//Begin
	int A, B, C, D, E, F, G, H, I, J, K, L, M;																											//Assign int to A, B, C, D, E, F, G, H, I, J, K, L, M
	int N, O, P, R1, R2, R3, R4, C1, C2, C3, C4, D1, D2;																								//Assign int to N, O, P, R1, R2, R3, R4, C1, C2, C3, C4, D1, D2
	printf("Enter the numbers 1-16 in any order for each variable without repeating any number\n");														//Print "Enter the numbers 1-16 in any order for each variable without repeating any number"
	printf("Enter values for A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P:\n ");																		//Print "Enter values for A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P"
	scanf_s("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &A, &B, &C, &D, &E, &F, &G, &H, &I, &J, &K, &L, &M, &N, &O, &P);			//Get value for A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P
	printf("%d\t%d\t%d\t%d\n\%d\t%d\t%d\t%d\n\%d\t%d\t%d\t%d\n\%d\t%d\t%d\t%d\n", A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P);		//Print the values of A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P in a 4x4 arrangement
	R1 = A + B + C + D;												//Add Variables A+B+C+D and set as R1
	R2 = E + F + G + H;												//Add Variables E+F+G+H and set as R2
	R3 = I + J + K + L;												//Add Variables I+J+K+L and set as R3
	R4 = M + N + O + P;												//Add Variables M+N+O+P and set as R4
	C1 = A + E + I + M;												//Add Variables A+E+I+M and set as C1
	C2 = B + F + J + N;												//Add Variables B+F+J+N and set as C2
	C3 = C + G + K + O;												//Add Variables C+G+K+O and set as C3
	C4 = D + H + L + P;												//Add Variables D+H+L+P and set as C4
	D1 = A + F + K + P;												//Add Variables A+F+K+P and set as D1
	D2 = D + G + J + M;												//Add Variables D+G+J+M and set as D2
	printf("\nRow sums: %d, %d, %d, %d\n\n", R1, R2, R3, R4);					//Print "Row sums: R1, R2, R3, R4"
	
	printf("Column sums: %d, %d, %d, %d\n\n", C1, C2, C3, C4);				//Print "Column Sums: C1 C2 C3 C4"
	
	printf("Diagonal sums: %d, %d\n\n", D1, D2);								//Print "Diagonal Sums: D1, D2"

	return 0;
}															//End