#include <iostream>
#include <string>

using namespace std;

void reverseString(vector<char>& s)
{
	int f = 0;
	int l = s.size() - 1;
	while (l > f)
	{
		swap(s[f], s[l]);
		f++;
		l--;
	}
}

int main(void)
{
	vector<char> str = {'h','e','l','l','o'};
	for (char m : str)
		cout << m << " ";
	cout << endl;
	reverseString(str);
	for (char m : str)
		cout << m << " ";
}