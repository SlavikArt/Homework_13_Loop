#include <iostream>

int main()
{
    int height;
    int width;
    int length;

    std::cout << "Enter height: ";
    std::cin >> height;

    std::cout << "Enter width: ";
    std::cin >> width;

    std::cout << "Enter length: ";
    std::cin >> length;

    for (int i = 0; i < width / 2; i++)
        std::cout << ' ';
    for (int i = 0; i < length; i++)
        std::cout << '*';

    for (int i = 1; i < width / 2; i++)
    {
        std::cout << "\n";
        for (int j = 0; j < width / 2 - i; j++)
            std::cout << ' ';
        std::cout << '*';
        for (int j = 1; j < i; j++)
            std::cout << ' ';
        std::cout << '*';
        for (int j = 2; j < length / 2; j++)
            std::cout << ' ';
        for (int j = 0; j < length / 2 - i; j++)
            std::cout << ' ';
        std::cout << '*';
        for (int j = 1; j < i; j++)
            std::cout << ' ';
        std::cout << '*';
    }
    std::cout << "\n";
    for (int i = 0; i < length; i++)
        std::cout << '*';
    for (int i = 1; i < width / 2; i++)
        std::cout << ' ';
    std::cout << '*';

    for (int i = 2; i < height / 2; i++)
    {
        std::cout << "\n";
        std::cout << '*';
        for (int j = 1; j < width / 2; j++)
            std::cout << ' ';
        std::cout << '*';
        for (int j = 2; j < length - width / 2; j++)
            std::cout << ' ';
        std::cout << '*';
        for (int j = 1; j < width / 2; j++)
            std::cout << ' ';
        std::cout << '*';
    }

    std::cout << "\n";
    std::cout << '*';
    for (int i = 1; i < width / 2; i++)
        std::cout << ' ';
    for (int i = 0; i < length; i++)
        std::cout << '*';

    for (int i = 0; i < width / 2 - 1; i++)
    {
        std::cout << "\n";
        std::cout << '*';
        for (int j = 2; j < width / 2 - i; j++)
            std::cout << ' ';
        std::cout << '*';
        for (int j = 1; j < length - width / 2 + i; j++)
            std::cout << ' ';
        std::cout << '*';
        for (int j = 2; j < width / 2 - i; j++)
            std::cout << ' ';
        std::cout << '*';
    }
    std::cout << "\n";
    for (int i = 0; i < length; i++)
        std::cout << '*';
}
