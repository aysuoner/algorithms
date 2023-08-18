#include <iostream>

using namespace std;

bool	canConstruct(string ransomNote, string magazine)
{
	int arr[26] = {0};  //SC O(26);
	for(int i=0; i<magazine.size(); i++) //TC O(magazine.size());
	{
		arr[magazine[i] - 'a']++;
	}
	for(int i=0; i<ransomNote.size(); i++) //TC O(ransom.size());
	{
		if(arr[ransomNote[i] - 'a'])
			arr[ransomNote[i] - 'a']--;
		else
			return false;
	}
	return true;
}

int main()
{
	string rans = "ax";
	string mag = "baaaaammaksddfdeefe";
	cout << "res:" << canConstruct(rans, mag);
}