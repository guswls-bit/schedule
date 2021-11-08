#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#include<string>
void bubble_sort();
void selection_sort();
void insertion_sort();
int arr[50],temp=NULL;
int Size = sizeof(arr) / sizeof(int);
int main() {
	int n;
	while (1) {
		printf("버블정렬을 할거면 3, 선택정렬을 할거면 2, 삽입정렬을 할거면 1 골라 : ");
		scanf("%d", &n);
		if (n < 1 || n>3) {
			printf("잘못된 값입니다.\n");
			continue;
		}
		break;
	}
	srand(time(NULL));
	for (int i = 0; i < 50; i++) {
		arr[i] = rand()%300;
	}
	switch (n) {
	case 3: bubble_sort(); break;
	case 2: selection_sort(); break;
	case 1: insertion_sort(); break;
	}
	for (int i = 0; i < 50; i++) {
		printf("%3d", arr[i]);
	}
	return 0;
}
void bubble_sort() {
	for (int i = 0; i < Size-1; i++) {
		for (int j = 0; j < Size - i-1; j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void selection_sort() {
	for (int i = 0; i < Size-1; i++) {
		for (int j = i; j < Size; i++) {
			if (arr[i] > arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
				temp = NULL;
			}
		}
	}
}
void insertion_sort() {

}