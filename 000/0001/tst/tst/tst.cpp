// tst.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



void find_natural_dividers(int val)
{
    int how_many = 0;
    
    for (int i = 0; i < val; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            std::cout << how_many << " " << i << std::endl;
            how_many++;
        }
    }
}

int main()
{
    std::cout << "## 10 ##\n";
    find_natural_dividers(10);
    std::cout << "## 1000 ##\n";
    find_natural_dividers(1000);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
