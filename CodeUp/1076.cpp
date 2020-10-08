//CodeUp 1076
#include <iostream>
using namespace std;

int main() {
	char a;
	int b = 97;
	scanf("%c", &a);
	do {
		printf("%c\n", b++);
	} while (a + 1 > b);
	return 0;
}
