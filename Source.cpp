#include <iostream>
#include "Bus.h"
#include <string>
using namespace std;
int main()
{
	Bus S1;
	cin >> S1;
	cout << S1;
	cout << "Re_assignment: " << endl;
	S1.Re_assignment();
	cout << S1;
	cout << "Change: " << endl;
	S1.Change();
	cout << S1;
}