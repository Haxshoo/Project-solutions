/*
* Check if Palindrome 
* Checks if the string entered by the user is a palindrome. That is that it reads the same forwards as backwards like “racecar”
*/

#include <iostream>
#include <string>

int main()
{
    std::string userString{};
    std::string revString{};

    std::cout << "Enter a strign to reverse: ";
    std::getline(std::cin, userString);

    revString = std::string(userString.rbegin(), userString.rend());
    
    if (revString == userString)
    {
        std::cout << "'" << userString << "' is a palindrome.";
    }
    else
    {
        std::cout << "'" << userString << "' is not a palindrome.";
    };

    return 0;

}
