//CodeUp 1025
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int num;
	int a = 0;
	cin >> num;
	for (int i = 5; i > 0; i--) {
		cout << "[" << ((int)(num / pow(10, i - 1)) * pow(10, i - 1)) - a << "]" << endl;
		a = (int)(num / pow(10, i - 1)) * pow(10, i - 1);
	}
	return 0;
}