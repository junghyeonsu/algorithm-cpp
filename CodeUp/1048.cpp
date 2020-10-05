//CodeUp 1048
#include <iostream>
using namespace std;

int main() {
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", a * (1 << b));
	return 0;
}