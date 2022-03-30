#include "../head/swap.h"

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "传值 swap a :"<<a<<"b:"<<b<<endl;
}
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "传址 swap a :"<< *a<<"b:"<<*b<<endl;
}
