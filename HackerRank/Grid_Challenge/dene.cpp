#include <vector>
#include <string>
#include <iostream>

std::string gridChallenge(std::vector<std::string> grid)
{
	for (int su = 0; su < grid[0].size(); su++)
	{
		for (int sa = 0; sa < grid[0].size() - 1; sa++)
		{
			sort(grid[sa].begin(), grid[sa].end());
			sort(grid[sa + 1].begin(), grid[sa + 1].end());
			std::cout << grid[sa][su] <<  " " << grid[sa + 1][su] << std::endl;
			if (grid[sa][su] > grid[sa + 1][su])
				return "NO";
		}
	}
	return "YES";
}

int main()
{
	std::vector<std::string> grid = {"kc", "iu"};
	std::cout << gridChallenge(grid) << std::endl;
}