//CodeUp 1087
#include <iostream>
using namespace std;

int main() {
	int a;
	int sum = 0;
	int count = 1;
	scanf("%d", &a);
	while (sum < a) {
		sum += count++;
	}
	printf("%d", sum);

	return 0;
}