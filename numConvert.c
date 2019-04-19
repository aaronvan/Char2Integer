#include <stdio.h>
#include <stdlib.h>

int firstDigit(int n) {
	while (n > 10) {
		n /= 10;
	}
	return n;
}

int lastDigit(int n) {
	return n % 10;
}

int middleDigit(int n) {
	return (n - (firstDigit(n) * 100) - lastDigit(n)) / 10;
}

int main(int argc, char *argv[]) {
	char *num = NULL;
	int first, second, last, value = 0;

	if (argc == 1) { 
		printf("Enter an integer less than 1000.\n");
	} else {
		num = argv[1];
		value = atoi(num);
	}
	first = firstDigit(value);

	switch(first)
	{
		case 9:
			printf("Nine hundred");
			break;
		case 8:
			printf("Eight hundred");
			break;
		case 7:
			printf("Seven hundred");
			break;
		case 6:
			printf("Six hundred");
			break;
		case 5:
			printf("Five hundred");
			break;
		case 4:
			printf("Four hundred");
			break;
		case 3:
			printf("Three hundred");
			break;
		case 2:
			printf("Two hundred");
			break;
		default:
			printf("One hundred");
	}

	printf(" and ");

	second = middleDigit(value);

	switch(second)
	{
		case 9:
			printf("ninety ");
			break;
		case 8:
			printf("eighty ");
			break;
		case 7:
			printf("seventy ");
			break;
		case 6:
			printf("sixty ");
			break;
		case 5:
			printf("fifty ");
			break;
		case 4:
			printf("forty ");
			break;
		case 3:
			printf("thirty ");
			break;
		case 2:
			printf("twenty ");
			break;
		default:
			printf(" ");
	}

	last = lastDigit(value);

	switch(last)
	{
		case 9:
			printf("nine");
			break;
		case 8:
			printf("eight");
			break;
		case 7:
			printf("seven");
			break;
		case 6:
			printf("six");
			break;
		case 5:
			printf("five");
			break;
		case 4:
			printf("four");
			break;
		case 3:
			printf("three");
			break;
		case 2:
			printf("two");
			break;
		default:
			printf("one");
	}

	printf("\n");

	return 0;
}
