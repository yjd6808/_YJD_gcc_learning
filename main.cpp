#include <stdio.h>

#include "add.h"
#include "sub.h"

int main() {
	printf("5 + 10 = %d\n", __add(5, 10));
	printf("5 - 10 = %d\n", __sub(5, 10));
	return 0;
}

