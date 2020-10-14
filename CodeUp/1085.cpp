//CodeUp 1085
#include <iostream>
using namespace std;

int main() {
	float h, b, c, s;
	scanf("%f %f %f %f", &h, &b, &c, &s);
	float bit = h * b * c * s;
	printf("%.1f MB",  bit / 8 / 1024 / 1024);
	
	return 0;
}