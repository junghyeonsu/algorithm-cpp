//CodeUp 1080
#include <iostream>
using namespace std;

int main() {
	int a;
	int b = 0;
	int sum = 0;
	scanf("%d", &a);
	while (a > sum) {
		sum += ++b;
	}
	printf("%d", b);

	return 0;
}

/*

55가 입력되면,
sum에 1, 2, 3 ,4 를 다 더하다가
55보다 같거나 커졌을 때 마지막으로 더한 값 ?

*/