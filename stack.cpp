#include<stdio.h>
#include<stdlib.h>
struct stack {
	int size,data;
	void push(int value);
	void pop();
	void empty();
	void set_size();
	void creat_size();
	void top();
};
struct stack* stptr = (stack*)malloc(1 * sizeof(stack));
int main() {
	stptr->size = 1;
	stptr->push(1);
	//stptr->push(2);
	//stptr->push(3);
	stptr->pop();
	//stptr->pop();
	//stptr->top();
}
void stack::set_size() {
	(stack*)realloc(stptr, sizeof(int) * size);
}

void stack::push(int value) {
	stptr->set_size();
	stptr->size++;
	
}
void stack::pop() {

}
void stack::top() {

}

void stack::empty() {
}

