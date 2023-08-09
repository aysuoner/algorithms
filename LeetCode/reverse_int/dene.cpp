#include <iostream>

using namespace std;

int reverse(int x)
{
    long ans = 0;

    while (x)
	{
      ans = ans * 10 + x % 10;
      x /= 10;
    }
    return (ans < INT_MIN || ans > INT_MAX) ? 0 : ans;
}

int main(void)
{
	int i = -123;
	i = reverse(i);
	cout << i ;
}