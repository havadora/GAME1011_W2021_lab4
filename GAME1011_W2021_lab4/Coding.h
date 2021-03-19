#pragma once
#include <iostream>


using namespace std;

class ForString
{
public:
	
	void Reverse(int MaxSize, int MinSize, string str)
	{
		    char temp;
			char* ch;
			ch = &str[0];
			temp = ch[MinSize];
			ch[MinSize] = ch[MaxSize];
			ch[MaxSize] = temp;
			
			if ( MaxSize - MinSize == 1)
			{
				display(ch, str);

		    }
			else if ( MaxSize - MinSize == 0)
			{
				display(ch,str );
			}
			else
			return Reverse(MaxSize - 1, MinSize + 1, str);
			
	}
	int Compare(string str, int MaxSize, int MinSize)
	{
		char* ch;
		ch = &str[0];
		
		if ((MaxSize - MinSize == 1 && str.length() > 2 ) || MaxSize - MinSize == 0  )
		{
			return 0;
		}
		if (ch[MinSize] == ch[MaxSize])
		{
				return Compare(str, MaxSize - 1, MinSize + 1);
		}
		
		else
			return -1;
	}
	void display(char* ch, string M )
	{
		int n = M.length();
		cout << "The reverse of:";
		for (int i = 0; i < n+1; i++)
		{
			cout << ch[i];
		}
	}
};

class ForInteger
{
public:
	int partition(int* a, int begin, int last)
	{
		int pivot = a[last];
		int DivideNumber = begin;
		int temp;
		for (int i = begin; i < last; i++)
		{
			if (a[i] <= pivot)
			{
				temp = a[i];
				a[i] = a[DivideNumber];
				a[DivideNumber] = temp;
				DivideNumber++;
			}
		}
		temp = a[last];
		a[last] = a[DivideNumber];
		a[DivideNumber] = temp;

		return DivideNumber;
	}
	void Quicksort(int* a, int begin, int last)
	{
		if (begin < last)
		{
			int P_index = partition(a, begin, last);
			Quicksort(a, begin, P_index - 1);
			Quicksort(a, P_index + 1, last);
		}	
	}
	void display(int* a, int last)
	{
		cout << "\nThe sorting array: ";
		for (int i = 0; i < last; i++)
		{
			cout << a[i];
			cout << " ";
		}
	}
	
};
