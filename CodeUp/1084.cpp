//CodeUp 1084
#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	int count = 0;
	scanf("%d%d%d", &a, &b, &c);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			for (int z = 0; z < c; z++) {
				printf("%d %d %d\n", i, j, z);
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}