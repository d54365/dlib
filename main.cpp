#include <iostream>

#include "StaticArray.h"

using namespace std;
using namespace DLib;

int main(int argc, char* argv)
{
	StaticArray<int, 10> array;

	for (int i = 0; i < array.length(); i++)
	{
		array[i] = i * i;
	}

	for (int i = 0; i < array.length(); i++)
	{
		cout << array[i] << endl;
	}

	StaticArray<int, 10> array2;
	array2 = array;
	for (int i = 0; i < array2.length(); i++)
	{
		cout << array2[i] << endl;
	}
	array2[10] = 100;

	return 0;
}
