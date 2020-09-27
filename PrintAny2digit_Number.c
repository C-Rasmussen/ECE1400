/***********************************************************************
Function Title: Main
Summary: Turn any two digit number into a word 
Inputs: none
Outputs: none
Compile Instructions: gcc PrintAny2digit_Number.c -o PrintAny2digit_Number.exe
***************************************************************************/
/************************************************************************
Pseudocode
Begin
	Assign variable n
	Print"Enter a two-digit number (1-99): "
	Get values
	print "The English representation of input is "
	if (ValTen) = 1
	then
		Switch (ValOne)
			case 0: print "ten"
			case 1: print "eleven"
			case 2: print "twelve"
			case 3: print "thirteen"
			case 4: print "fourteen"
			case 5: print "fifteen"
			case 6: print "sixteen"
			case 7: print "seventeen"
			case 8: print "eighteen"
			case 9: print "nineteen"
	else
		Switch (ValTen)
			case 2: print "twenty"
			case 3: print "thirty"
			case 4: print "forty"
			case 5: print "fifty"
			case 6: print "sixty"
			case 7: print "seventy"
			case 8: print "eighty"
			case 9: print "ninety"
	
		if (ValTen>1 && ValOne>0)
		then
			print"-"
		else
		endif
		
		Switch (ValOne)
			case 1: print "one";
			case 2: print "two"
			case 3: print "three"
			case 4: print "four"
			case 5: print "five"
			case 6: print "six"
			case 7: print "seven"
			case 8: print "eight"
			case 9: print "nine"
			print "."
	endif
End
******************************************************************/
#include <stdio.h>
int main()
{												//Begin
int ValOne, ValTen;								//Assign variable ValOne and ValTen
printf("Enter a two-digit number (1-99): ");	//Print"Enter a two-digit number(1-99): "
scanf("%1d%1d", &ValTen, &ValOne);				//Get values
printf("The English representation of "); 		//print "The English representation of input is "
printf("%1d%1d is ", ValTen, ValOne);	
if (ValTen == 1)								//if (ValTen) = 1
{																	
	switch (ValOne)								//	Switch (ValOne)
	{
		case 0:				
			printf("ten");						//		case 0: print "ten"
			break;
		case 1: 
			printf("eleven");					//		case 1: print "eleven"
			break;
		case 2: 
			printf("twelve");					//		case 2: print "twelve"
			break;
		case 3:
			printf("thirteen");					//		case 3: print "thirteen"
			break;
		case 4:
			printf("fourteen");					//		case 4: print "fourteen"
			break;
		case 5:
			printf("fifteen");					//		case 5: print "fifteen"
			break;
		case 6:
			printf("sixteen");					//		case 6: print "sixteen"
			break;
		case 7:
			printf("seventeen");				//		case 7: print "seventeen"
			break;
		case 8:
			printf("eighteen");					//		case 8: print "eighty"
			break;
		case 9:
			printf("nineteen");					//		case 9: print "nineteen"
			break;
	}
}
else                                            //else
{
	switch (ValTen)								//	switch (ValTen)
	{
		case 2:															
			printf("twenty");					//		case 2: print "twenty"
			break;
		case 3:
			printf("thirty");					//		case 3: print "thirty"
			break;
		case 4:
			printf("forty");					//		case 4: print "forty"
			break;
		case 5:
			printf("fifty");					//		case 5: print "fifty"
			break;
		case 6:
			printf("sixty");					//		case 6: print "sixty"
			break;
		case 7:
			printf("seventy");					//		case 7: print "seventy"
			break;
		case 8:
			printf("eighty");					//		case 8: print "eighty"
			break;
		case 9:
			printf("ninety");					//		case 9: print "ninety"
			break;
	}											//endif
	if (ValTen>1 && ValOne>0)					//if (ValTen>1 and ValOne>0)
	{											//then
		printf("-");							//	print"-"
	}
	else {}                                     //else
												//endif
	switch (ValOne)								//switch (ValOne)
	{
		case 1:
			printf("one");						//	case 1: print "one"
			break;
		case 2:
			printf("two");						//	case 2: print "two"
			break;
		case 3:
			printf("three");					//	case 3: print "three"
			break;
		case 4:
			printf("four");						//	case 4: print "four"
			break;
		case 5:
			printf("five");						//	case 5: print "five"
			break;
		case 6:
			printf("six");						//	case 6: print "six"
			break;
		case 7:
			printf("seven");					//	case 7: print "seven"
			break;
		case 8:
			printf("eight");					//	case 8: print "eight"
			break;
		case 9:
			printf("nine");						//	case 9: print "nine"
			break;
	}
}
printf(".");									//print"."
return 0;
}												//end