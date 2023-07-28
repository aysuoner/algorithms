#include <vector>
#include <string>
#include <iostream>

std::string caesarCipher(std::string s, int k)
{
	int i = 0;
	k %= 26;
	while (s[i])
	{
		if (isalpha(s[i]))
		{
			if ((islower(s[i]) && !islower(s[i] + k)) //
				|| (isupper(s[i]) && !isupper(s[i] + k)))
			{
				s[i] = s[i] - (26 - k);
			}
			else 
				s[i] += k;
		}
		i++;
	}
	std::cout << s << std::endl;
	return s;
}

int main()
{
	std::string s = "Pz-/aI/J`EvfthGH";
	int k = 66;
	caesarCipher(s, k);
}