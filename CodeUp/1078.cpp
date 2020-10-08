//CodeUp 1078
#include <iostream>
using namespace std;

int main() {
	int a, sum = 0;
	scanf("%d", &a);
	for (int i = 0; i < a + 1; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}
