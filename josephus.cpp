#include<iostream>
#include<cmath>
using namespace std;
//	DONE
// JOSEPHUS PROBLEM SOLVED

int main() {
	int x, print, up;
	cin >> x;
	up = (floor(log(x * 1.0) / log(2)));
	print = (2 * (x - (pow(2,up))) + 1);
	if ((print > x) || (print < 1)) {
		cout << "something went wrong ... i have no fucking clue who stays alive\n";
		return 0;
	}
	cout << "the survivor is in position ";
	cout << print << endl;
	return 0;
}
