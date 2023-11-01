#include <string>
#include <iostream>

using namespace std;
bool isPalindrome(string s)
{
}

int main()
{
	std::cout << isPalindrome("A man, a plan, a canal: Panama") << std::endl;
	std::cout << isPalindrome("a,  n .    A") << std::endl;
	std::cout << isPalindrome("baab") << std::endl;
	std::cout << isPalindrome("baba") << std::endl;
	std::cout << isPalindrome("") << std::endl;
	std::cout << isPalindrome(".,") << std::endl;
}