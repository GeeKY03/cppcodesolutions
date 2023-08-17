#include <iostream>
using namespace std;
void numtob(int n)
{
	// array to store binary number
	int bn[32];
	int i = 0;
	while (n > 0) {
		bn[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
		cout << bn[j];
}
int main()
{
	int n = 4;
	numtob(n);
	return 0;
}