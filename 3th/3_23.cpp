#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::vector;
using std::endl;

int main()
{
	vector<int> vec(10, 1);
	for (auto it = vec.begin(); it != vec.end(); it++)
		*it *= 2;
	for (auto value : vec)
		cout << value << " ";
	cout << endl;
	return 0;
}
