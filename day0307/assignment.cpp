/*
2024년 3월 7일
남경남
문제해결프로그래밍
동적메모리 할당 과제
*/
//#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

int main() {
	int sum = 0;
	int* p;
	int n = 0;
	printf("정수 입력 : ");
	scanf("%d", &n);

	p = (int*)calloc(n, sizeof(n));

	//for (int k = 0; k < n; k++) {
	//	printf("p[i] : %d", p[k]);
	//}
	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}
	for (int j = 0; j < n; j++) {
		printf("%d", p[j]);
		sum += p[j];
	}
	printf("\n%d %d\n", sum, sum/n);

}