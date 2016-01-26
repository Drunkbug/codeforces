#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
	int start[2];
	int end[2];
	int i;
	for(i = 0; i < 2; i++) {
		scanf("%d", &start[i]);
	}
	for(i = 0; i < 2; i++) {
		scanf("%d", &end[i]);
	}
	int a = abs(start[0] - end[0]);
	int b = abs(start[1] - end[1]);
	if (a > b) {
		printf("%d", a);
	} else {
		printf("%d", b);
	}
	
	return 0;
}
