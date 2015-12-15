#include <iostream>
//#include "Compare.h"
#include "max.h"
#include "max.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Hello World!" << endl ;
	//Compare cmp(3,7) ;
	Compare<int> cmp(3,7) ;
	cout << "max = "  << cmp.max() << endl ;
	cout << "min = "  << cmp.min() << endl ;
	return 0;
}