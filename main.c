#include <stdio.h>
void func1()
{
	int x;
	printf("func1 x is at %p\n", &x);
}

int main(void)
{
	int x;
	printf("main x is at %p\n", &x);
	func1();
	
	return 0;
}
