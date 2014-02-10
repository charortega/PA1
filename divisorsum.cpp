#include <iostream>
using namespace std;

int main()
{
	for (int i = 2; i <= 1000; i++)
	{
		int sum = 0;
		cout << "the proper divisor sum for " << i << "is ";

		for (int j = 1; j <= i; j++)
		{
			if ((j <= i) && (i % j) == 0 && (j != i))
			{
				sum += j;
				cout << j <<"+";
			}
			if (j == i)
					cout << " = " << sum << ".\n";
			}
			
		}
	}
