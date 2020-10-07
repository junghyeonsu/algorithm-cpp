//CodeUp 1069
#include <iostream>
using namespace std;

int main() {
	int a;
	scanf("%d", &a);
	switch (a) {
	case 12:
	case 1:
	case 2:
		printf("winter");
		break;
	case 3:
	case 4:
	case 5:
		printf("spring");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer");
		break;
	default:
		printf("fall");
		break;
	}


	return 0;
}