/*
* Fizz Buzz
* Write a program that prints the numbers from 1 to 100.
* But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”.
* For numbers which are multiples of both three and five print “FizzBuzz”.
*/

#include <iostream>

int main()
{

    for (int i = 1; i <= 100; i++)
    {
        if ((i % 5 == 0) && (i % 3 == 0))
        {
            std::cout << "FizzBuzz\n";
        }
        else if (i % 5 ==0)
        {
            std::cout << "Buzz\n";
        }
        else if (i % 3 == 0)
        {
            std::cout << "Fizz\n";
        }
        else
        {
            std::cout << i << '\n';
        };
    };

    return 0;

}
