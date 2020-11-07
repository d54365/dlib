#include <iostream>

#include "DynamicArray.h"

using namespace std;
using namespace DLib;

int main(int argc, char* argv)
{
	DynamicArray<int> s1(10);
	for (int i = 0; i < s1.length(); i++)
	{
		s1[i] = i;
	}

	for (int i = 0; i < s1.length(); i++)
	{
		cout << s1[i] << endl;
	}

	DynamicArray<int> s2(10);
	s2 = s1;
	for (int i = 0; i < s2.length(); i++)
	{
		cout << s2[i] << endl;
	}

	s2.resize(20);
	cout << s2.length() << endl;
	s2[19] = 1000;
	cout << s2[19] << endl;

	return 0;
}
