#include <iostream>

int main()
{
	int k = 0;

	for (int i = 2; i <= 10000000; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				k++;
		}
		if (k == 2)
			std::cout << i << "\t";
		k = 0;
		if (i % 100 == 0)
			std::cout << "\n";
	}
}