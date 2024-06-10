#include <iostream>

using namespace std;

int Add(int A, int B)
{
	A = A + B;

	return A;
}

int main()
{
	int A = 10;
	int B = 20;
	int C = Add(A, B);
	cout << A << ", " << B << ", " << C;

	return 0;
}