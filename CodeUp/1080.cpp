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

55�� �ԷµǸ�,
sum�� 1, 2, 3 ,4 �� �� ���ϴٰ�
55���� ���ų� Ŀ���� �� ���������� ���� �� ?

*/