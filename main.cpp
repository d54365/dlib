#include <iostream>

#include "DynamicList.h"

using namespace std;
using namespace DLib;

int main(int argc, char* argv)
{
	DynamicList<int> l;
	
	for (int i = 0; i < l.capacity(); i++)
	{
		l.insert(0, i * i);
	}

	for (int i = 0; i < l.capacity(); i++)
	{
		cout << l[i] << endl;
	}

	return 0;
}
