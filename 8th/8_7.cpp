#include <fstream>
#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::string;
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;

void readFileToVec( const string& filename, vector<string>& vec )
{
	ifstream ifs( filename );
	if( ifs )
	{
		string buf;
		while ( std::getline( ifs, buf ) )
			vec.push_back( buf );
	}
}
void readVecToFile( const string& filename, vector<string>& vec )
{
	ofstream ofs( filename , ofstream::app );
	if ( ofs )
	{
		for( const auto& str : vec)
			ofs << str << endl;
	}
}
int main( int argc, char **argv )
{
	vector<string> vec;
	readFileToVec(argv[1], vec);
	readVecToFile( argv[2], vec );
	// for(const auto& str : vec)
	// 	cout << str << endl;
	 return 0;
}
