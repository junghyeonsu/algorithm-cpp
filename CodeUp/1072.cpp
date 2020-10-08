//CodeUp 1072
#include <iostream>
using namespace std;

int main() {
	int a, b;
	scanf("%d", &a);
turn:
	scanf("%d", &b);
	if (a != 0) {
		printf("%d\n", b);
		a--;
		goto turn;
	}

	return 0;
}