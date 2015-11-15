#include <iostream>
#include <fstream>
//#include "linear_system.h"
#include "complex.h"
#include "matrix.h"
#include "vector.h"

using namespace std;

int main()
{
	ifstream in("input");
	KFU::Matrix<double> M(3, 3);
	KFU::Vector<double> v1(3);
	KFU::Vector<double> v2(3);
	in >> v1 >> v2;
	cout << v1 * v2 << endl;
	return 0;
}
