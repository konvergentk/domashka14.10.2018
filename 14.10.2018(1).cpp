#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	cout << a << ":";
	if (a == 1) { cout << "unit"; }
	else if ((a != 2 && a % 2 == 0) || (a != 3 && a % 3 == 0)) { cout << "composite"; }
	else { cout << "prime"; }

	return 0;
}