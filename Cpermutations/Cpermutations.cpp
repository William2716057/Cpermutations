// Cpermutations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

//int main()
//{
//    std::cout << "Hello World!\n";
//}
//C code to output permutations of a given number
//swap values of two variables using temp variable 
void swap(char *x, char* y) {
	char temp = *x;
	*x = *y;
	*y = temp;
}

void perms(char* lst, int start, int end) {
	if (start == end) {
		printf("%s\n", lst);
	}
	else {
		for (int i = start; i <= end; i++) {
			swap(&lst[start], &lst[i]);
			perms(lst, start + 1, end);
			swap(&lst[start], &lst[i]);
		}
	}
}

int main() {
	char lst[] = "123456";
	int n = strlen(lst);
	perms(lst, 0, n - 1);
	return 0;
}