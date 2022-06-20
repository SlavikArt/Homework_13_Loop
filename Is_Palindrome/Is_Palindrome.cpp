#include <iostream>

int main()
{
    int num;
    int current_num = 0;
    int old_num;
    
    std::cout << "Enter a number: ";
    std::cin >> num;

    old_num = num;

    while (num > 0)
    {
        current_num = current_num * 10 + num % 10;
        num /= 10;
    }
    if (current_num == old_num)
    {
        std::cout << old_num << " - is a palindrome\n";
    }
    else
    {
        std::cout << old_num << " - is not a palindrome\n";
    }
}