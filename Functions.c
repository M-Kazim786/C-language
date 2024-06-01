#include<stdio.h>
//declaration/prototype
void printhello();
void printGoodbye();

int main() {
	//function call
    printhello();
    printGoodbye();

    return 0;
}
//function definition
void printhello() {
	printf("Hello! \n");
	printf("my name is Kazim\n");
}
void printGoodbye() {
	printf("Goodbye, ab nikl\n");
}
