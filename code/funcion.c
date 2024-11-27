#include <stdio.h>

void func1(int x){ //pass by value, yg dikasih itu cuman nilainya
	x = x + 1;
	printf("%d",x);
}

void func2(int a[]){ //pass by reference, yg dikasih itu address dari arraynya
	a[0] = 5;
}

int main(){
	int x = 5;
	int a[] = {1,2};
	func1(x);
	func2(a);
	printf("%d\n",x);
	printf("%d %d", a[0], a[1]);
}
