// 버블 정렬
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int arr[MAX_SIZE];

void Bubble_sort() 
{
	int temp;

	for (int i = MAX_SIZE - 1; i >= 1; i--) { // 총 단계는 배열 사이즈-1 수행됨
		for (int j = 0; j <= i - 1; j++) { // 뒤에서부터 거품처럼 정렬되는 구조
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
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
	
	Bubble_sort();
	printf("정렬 후 : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
