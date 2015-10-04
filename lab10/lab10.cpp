/*
Alex Roeum
CMPSC 121
Section 003

Lab 10

Description: a program that will ask the user to enter 10 words, store the words in a two-dimensional character array
				(C-string), output this array, sort the array ascending, and then output the sorted array.
input: 10 c-string words
processing: the use of functions that will sort through the strings
output:the 10 c-string words sorted and unsorted

test data: the quick red fox jumped over the lazy brown dog
test output: brown dog fox jumped lazy over quick red the the
*/

# include<iostream>

using namespace std;

void input10words(char wordsf1[][21]);
void output10words(char wordsf1[][21]);
void sort10words(char wordsf1[][21]);
//add function prototypes


int main()
{
	char wordsmain[10][21];
	//add function call to input function
	input10words(wordsmain);
	//add function call to output function
	output10words(wordsmain);
	//add function call to sort function
	sort10words(wordsmain);
	//add function call to output function
	output10words(wordsmain);
	return 0;
}

/* Function to input 10 words into a 2-d character array
input:  the array is passed to the function and the user is prompted to input 10 words
output:  nothing is output to the screen, the filled array is sent back to the function call
processing:  use a for loop to prompt the user to enter 10 words and store the words into the array
*/

void input10words(char wordsf1[][21])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a word for the array. ";
		cin >> wordsf1[i];
	}
}


//add function to output the words in the array
void output10words(char wordsf1[][21])
{
	for (int i = 0; i < 10; i++)
	{
		cout << wordsf1[i]<< " ";
	}
	cout << endl;
}

//add function to sort the array
void sort10words(char wordsf1[][21])
{
	char temp[21];
	int passcount = 0;
	int placecount = 0;
	int size = 10;
	int minIndex;
	for (passcount = 0; passcount < size - 1; passcount++)
	{
		minIndex = passcount;
		for (placecount = passcount + 1; placecount < size; placecount++)
		{
			if (strcmp(wordsf1[placecount], wordsf1[minIndex]) < 0)
			minIndex = placecount;
		}

		strcpy_s(temp, wordsf1[minIndex]);
		strcpy_s(wordsf1[minIndex], wordsf1[passcount]);
		strcpy_s(wordsf1[passcount], temp);

	}
}