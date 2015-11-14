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
	KFU::Matrix<Complex> M(3, 3);
	KFU::Vector<Complex> v(3);
	in >> M >> v;
	cout << M * v;
	return 0;
}
