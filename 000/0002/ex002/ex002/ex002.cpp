// ex002.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MAXIMUM 4000000

int fib(int val)
{
    int sumOfEven = 0;
    int previous1 = 1, previous2 = 1;
    int sumOfPrevious = 1;
    for (int i = 0; i < val; i++)
    {
        sumOfEven += sumOfPrevious % 2 == 0 ? sumOfPrevious : 0;
        sumOfPrevious = previous1 + previous2;
        if (sumOfPrevious > MAXIMUM)
            return sumOfEven;
        previous1 = previous2;
        previous2 = sumOfPrevious;
    }
    return sumOfEven;
}

int main()
{
    std::cout << "Sum of even is " <<fib(33);
}