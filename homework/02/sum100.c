#include <stdio.h>

void sum100() {
	int sum = 0;
	for (int i=1; i<101; i++) {
		sum += i;
	}
	printf("%d\n", sum);
}
