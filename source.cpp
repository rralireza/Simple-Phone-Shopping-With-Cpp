// shopping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int number, total, result;
    std::cout << "Hello and welcome to our shop! \n";
    std::cout << "Please Select a number: \n [Samsung is 1] [Apple is 2] [Sony is 3]\n";
    std::cin >> number;
    std::cout << "Please tell us how many devices do you want?\n [Samsung Price is 750$] [Apple is 1500$] [Sony is 950$]\n";
    std::cin >> total;
    if (number == 1)
    {
        result = 750 * total;
        std::cout << "Total Price is: " << result << "$" << "\n";
    }
    else if (number == 2)
    {
        result = 1500 * total;
        std::cout << "Total Price is: " << result << "$" << "\n";
    }
    else if (number == 3)
    {
        result = 950 * total;
        std::cout << "Total Price is: " << result << "$" << "\n";
    }

    std::cout << "Thank for your shoping :)" << "\n";
    system("pause");

}

