#include <iostream>
using namespace std;

bool is_perfect(long int n)
{
	int sum = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		n % i == 0 ? sum += i : sum += 0;
	}
	return !(sum - n);
}

int main()
{
	int num;
	cout << "Enter a number to test for perfectness: ";
	cin >> num;
	if (num == 0)
	{
		cout << "Goodbye" << endl;
		return 0; 
	}
	while (!cin.eof() || num != 0)
	{
		while (is_perfect(num))
		{
			cout << num << " is perfect." << endl;
			cout << "Enter a number to test for perfectness: ";
			cin >> num;
			if (num == 0)
			{
				cout << "Goodbye" << endl;
				return 0;
			}
		}
		
		cout << num << " is not perfect" << endl;
		cout << "Enter a number to test for perfectness: ";
		cin >> num;
		if (num == 0)
		{
			cout << "Goodbye" << endl;
			return 0;
		}
	}

	
	return 0;
}

