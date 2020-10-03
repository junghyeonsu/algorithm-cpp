//CodeUp 1024
#include <iostream>
using namespace std;

int main() {
	char a[30];
	cin >> a;
	
	for (int i = 0; a[i] != NULL; i++) {
		cout << "'" << a[i] << "'" << endl;
	}
	
	return 0;
}