/*
* Reverse a String
* Enter a string and the program will reverse it and print it out.
*/

#include <iostream>
#include <algorithm>

int main()
{
    std::string userString{};

    std::cout << "Enter a strign to reverse: ";
    std::getline(std::cin, userString);    

    std::reverse(userString.begin(), userString.end());
    
    std::cout << userString;

    return 0;

}
