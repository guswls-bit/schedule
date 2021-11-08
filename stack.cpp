#include<stdio.h>
#include<stdlib.h>
typedef struct stack {
	int data;
	int* head;
}stack;
int size=1;
void push(int value); //값을 맨위에 저장
void pop(); //맨위에 값을 출력 및 삭제 & 맨위에 메모리 해제
int empty(); //stptr에 할당되어있는 메모리가 할당되어있는지 아닌지 확인	
void set_size(); //
void creat_size();
void top();
stack* stptr = (stack*)calloc(1, sizeof(int));
int a=1;
int main() {
	push(1);
	push(2);
	push(3);
	pop();
	pop();
	top();
	free(stptr);
}
void set_size() {
	free(stptr);
	size--;
	creat_size();
}
void creat_size() {
	(stack*) realloc(stptr, sizeof(int)*size);
}

void push(int value) {
	if (a) {
		(stptr + size)->data = value;
		a = 0;
		size++;
	}
	else {
		creat_size();
		(stptr + size)->data = value;
		size++;
	}
}
void pop() {
	if (empty()) {
		throw "There is not memory"; exit(-1);
	}
	printf("%d", (stptr + size - 1)->data);
	set_size();
}
void top() {
	printf("%d", (stptr + size - 1)->data);
}

int empty() {
	return size == 0;
}
