#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
	char c;

	int x;
	int y;
	int res;

	char n;
	//var

		system("title Simple Calculator");

	while (1) {
		printf("Please select a symbol.\n");
		printf("+, -, x, /\n");
		printf("=> ");
		scanf(" %c", &c);

		system("cls");

		switch (c) {
		case '+':
			printf("Please enter the numbers to add (up to two numbers can be entered) ");
			scanf("%d %d", &x, &y);

			res = x + y;

			printf("%d + %d = %d\n\n", x, y, res);
			break;

		case '-':
			printf("Please enter the numbers to subtract (up to two numbers can be entered) ");
			scanf("%d %d", &x, &y);

			res = x - y;

			printf("%d - %d = %d\n\n", x, y, res);
			break;

		case 'X':
			printf("Enter numbers to multiply (up to two numbers can be entered) ");
			scanf("%d %d", &x, &y);

			res = x * y;

			printf("%d x %d = %d\n\n", x, y, res);
			break;

		case 'x':
			printf("Enter numbers to multiply (up to two numbers can be entered) ");
			scanf("%d %d", &x, &y);
			res = x * y;

			printf("%d x %d = %d\n\n", x, y, res);
			break;

		case '/':
			printf("Enter numbers to divide (up to two numbers can be entered) ");
			scanf("%d %d", &x, &y);

			res = x / y;

			printf("%d / %d = %d\n\n", x, y, res);
			break;
		}	

		printf("Are you continue?(Y/N) ");
		scanf(" %c", &n);

		if (n == 'y' || n == 'Y') {
			system("cls");
			continue;
		}
		else if (n == 'n' || n == 'N') {
			system("cls");
			printf("\n\nProgram is over...\n\n");
			system("exit");
			break;
		}
	}
}