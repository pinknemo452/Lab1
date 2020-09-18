#include<stdio.h>;

main() {
	int current, previous,n,i;
	current = 1;
	previous = 1;
	printf("Enter n ");
	scanf("%d", &n);
	for (i = 3; i < n + 2; i++) {
		current = current + previous;
		previous = current - previous;
	}
	printf("sum = %d", current-1);
	return 0;
}
