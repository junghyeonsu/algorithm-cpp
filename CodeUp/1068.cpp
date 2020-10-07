//CodeUp 1068
#include <iostream>
using namespace std;

int main() {
	int a;
	scanf("%d", &a);
	if (a >= 90 && a <= 100) {
		printf("A");
	}
	else if (a >= 70 && a <= 89) {
		printf("B");
	}
	else if (a >= 40 && a <= 69) {
		printf("C");
	}
	else if (a >= 0 && a <= 39) {
		printf("D");
	}


	return 0;
}