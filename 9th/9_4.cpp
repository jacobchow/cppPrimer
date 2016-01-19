#include <vector>
#include <iostream>
#include <string>

using std::string;
using std::vector;
using std::iterator;
using std::cin;
using std::cout;
using std::endl;

bool find( vector<int>::iterator beg, vector<int>::iterator end, int value )
{
	for( auto iter = beg; iter != end; ++iter)
		if( *iter == value ) return true;
	return false;
}
int main()
{
	std::vector<int> vec;
	int value;
	while( cin >> value)
		vec.push_back(value);
	if( find( vec.begin(), vec.end(), 10 ) )
		cout << "YES!" << endl;
	else
		cout << "NO!" << endl;

	return 0;
}
