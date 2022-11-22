// 삽입 정렬
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int arr[MAX_SIZE];

void insertion_sort() 
{
	int key, i, j;
	for (i = 1; i < MAX_SIZE; i++) { // i가 1부터 시작하는 것에 유의
		key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--) // key 값의 위치 찾기
			arr[j + 1] = arr[j];
		arr[j + 1] = key; // key 값 삽입
	}
}

int main() {
	int n = MAX_SIZE;
	
	srand(time(NULL)); // 씨드 변경 함수
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100; // 랜덤 값 반환 함수
	}

	printf("정렬 전 : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	insertion_sort();
	printf("정렬 후 : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return  0;
}
