#include<iostream>

using namespace std;
int main()
{
	//declared as a long long incase large numbers want to be used
	long long originalNumber;
	std::cout << "Enter the Starting Number\n";
	std::cin >> originalNumber;
	while (originalNumber > 1)
	{
		switch (originalNumber % 3)
		{
		case 0:
			cout << (originalNumber = originalNumber / 3) << " 0\n";
			break;
		case 1:
			cout << (originalNumber = --originalNumber / 3) << " -1\n";
			break;
		case 2:
			cout << (originalNumber = ++originalNumber / 3) << " +1\n";
			break;
		}
	}
}