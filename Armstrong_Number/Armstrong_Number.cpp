#include <iostream>

bool isArmstrongNum(int num)
{
    int n = 0;
    int digit;
    int sum = 0;
    int old_num = num;

    while (old_num != 0) {
        old_num /= 10;
        n++;
    }
    old_num = num;

    while (old_num != 0) {
        digit = old_num % 10;
        sum += pow(digit, n);
        old_num /= 10;
    }

    if (sum == num)
        return true;
    else
        return false;
}

int main()
{
	for (int i = 0; i <= 10000000; i++)
	{
        if (isArmstrongNum(i))
        {
            std::cout << i << "\n";
        }
	}
}