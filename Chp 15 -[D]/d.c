#include<stdio.h>

int main()
{
	char str[100];
	int i, num, fin = 0;

	printf("Enter a string of numbers : ");
	gets(str);

	for (i = 0; str[i] != '\0'; i++){
		num = str[i] - 48;
		fin = fin * 10 + num;
	}

	printf("Number : %d", fin);

	return 0;
}
