#include <locale>
#include<iostream>
class Palindrome
{
public:
    static bool isPalindrome(const std::string& word)
    {
        std::locale loc;
        for (int i = 0; i < word.size(); i++)
            if (std::tolower(word[i], loc) != std::tolower(word[word.size() - i - 1], loc))
                return false;
        return true;
    }
};
int main()
{
    std::cout << Palindrome::isPalindrome("Deleveled");
}

