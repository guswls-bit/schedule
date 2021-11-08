#include<stdio.h>
#include<stdlib.h>
typedef struct Stack
{
	int* data;
	int Point;
	int max;
}stack;
stack* st;
int size = 10;
int StackPush(int value);
int StackPop();
int init(int value);
int Isempty();
int StackPick();
int StackPrint();
int StackSize();
int main() {

}
int init(int value) {
	st->data = (int*)malloc(size * sizeof(int));
	st->max = size;
	st->Point = -1;
}

int StackPush(int value) {
	if (st->Point > st->max) {
		st->max+= 10;
		(int*)realloc(st->data, sizeof(int) * st->max);
	}
	st->Point++;
	st->data[st->Point];
}
int StackPop() {
	if (Isempty()) {
		printf("No stack\n");
		return -1;
	}
	printf("%d", st->data[st->Point]);
	return st->data[st->Point--];
}
int StackPick() {
	if (Isempty()) {
		printf("No stack\n");
		return -1;
	}
	
}
int StackPrint() {

}
int StackSize() {

}

int Isempty() {

}