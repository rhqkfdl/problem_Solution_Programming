/*
2024년 3월 7일
남경남
문제해결프로그래밍
동적메모리 할당 수업
*/
//#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

typedef struct tagPoint {
	int x;
	int y;
}Point;

int main() {
	Point * newpoint = (Point*)calloc(1, sizeof(Point));
	Point* mpoint = (Point*)malloc(sizeof(Point));
	printf("%d %d\n", newpoint -> x, newpoint->y);
	printf("%d %d\n", mpoint->x, mpoint->y);
	return 0;
}