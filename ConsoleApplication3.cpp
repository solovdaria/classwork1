

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char word[100];
	char file[200];
	cout << "Enter word: ";
	cin >> word; 
	sprintf_s(file, "C:\\words\\%s.txt", word);
	FILE*input;
	fopen_s(&input, file, "r");

	if (!input) cout << "no word";
	else {
		char per[300];
		while (fgets(per, 300, input) != NULL)
			cout << per;
		fclose(input);
	}
	
}

