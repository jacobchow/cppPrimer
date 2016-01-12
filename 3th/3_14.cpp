#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;
	int i;
	while(std::cin >> i) vec.push_back(i);
	i = 0;
	while(vec[i])
	{
		std::cout << vec[i] ;
		i++;
	}
	return 0;

}
