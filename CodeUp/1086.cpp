//CodeUp 1086
#include <iostream>
using namespace std;

int main() {
	float w, h, b;
	scanf("%f %f %f", &w, &h, &b);
	float bit = w * h * b;
	printf("%.2f MB",  bit / 8 / 1024 / 1024);
	
	return 0;
}