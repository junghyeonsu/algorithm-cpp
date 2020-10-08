//CodeUp 1071
#include <iostream>
using namespace std;

int main() {
	int a;
	reload:
	scanf("%d", &a);
	if (a != 0) {
		printf("%d\n", a);
		goto reload;
	}
	return 0;
}