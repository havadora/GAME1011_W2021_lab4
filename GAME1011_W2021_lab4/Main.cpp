#include <cstring>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Coding.h"

using namespace std;

int main()
{
	bool conti= true;
	int opt;
	
	ForString str;
	ForInteger inter;

	cout << "Welcome to the Lab 4 code " << endl;
	while (conti == true )
	{

		cout << "\n1. Checking palindrome" << endl;
		cout << "2. Quick sorting " << endl;
		cout << "3. Reverse string " << endl;
		cout << "4. Exit " << endl;
		cout << "Choose 1-4 options above : " << endl;
		cin >> opt;
		switch (opt)
		{
		case 1:
		{
			string strr;
			cout << "Enter the word: ";
			cin >> strr;
			int n = strr.length();
			if (str.Compare(strr, n+1, 0) == -1)
			{
				cout << "This is not palindrome" << endl;
			}
			if (str.Compare(strr, n+1, 0) == 0)
			{
				cout << "This is palindrome" << endl;
			}
			cout << "";
			break;
		}
		case 2:
		{
			srand(unsigned(time(NULL)));
			int num;
			cout << "Enter the size of array: ";
			cin >> num;
			int* arn = new int[num];
			for (int i = 0; i < num; i++)
			{
				arn[i] = rand() % 100;
			}
			inter.display(arn, num);
			inter.Quicksort(arn, 0, num - 1);
			inter.display(arn, num);
			delete[] arn;
			cout << "";
			break;
		}
		case 3:
		{
			string strr;
			cout << "Enter the word: ";
			cin >> strr;
			int n = strr.length();
			str.Reverse(n+1, 0, strr);
			cout << "";
			break;
		}
		case 4:
			conti = false;
		}
	}
	system("pause");
}