#include "MyUnorderedArray.h"
#include "MyOrderedArray.h"
#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main()
{
	MyUnorderedArray<int> ua(5);
	MyOrderedArray<float> oa(2, 2);

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		ua.push(rand() % 100 + 1);
		oa.push(rand() % 100 + 1);
	}

	cout << "Unordered array contents: ";

	for (int i = 0; i < ua.GetSize(); i++)
	{
		cout << ua[i] << " ";
	}

	cout << "\nOrdered array contents: ";

	for (int i = 0; i < oa.GetSize(); i++)
	{
		cout << oa[i] << " ";
	}

	cout << endl;

	ua.clear();
	oa.clear();

	int duplicate = rand() % 100 + 1;
	oa.push(duplicate);
	oa.push(duplicate);
	ua.push(duplicate);
	ua.push(duplicate);

	cout << "Ordered array does not allow for duplicate values: ";

	for (int i = 0; i < oa.GetSize(); i++)
	{
		cout << oa[i] << " ";
	}

	cout << "\nUnordered array does allow for duplicate values: ";

	for (int i = 0; i < ua.GetSize(); i++)
	{
		cout << ua[i] << " ";
	}

	return 0;
}