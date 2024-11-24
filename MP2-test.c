#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
	int n = 0;
	
	scanf("%d", &n);
	
	int* funcOutputs = (int*)malloc(n*sizeof(int));
	float inputs[n*3];
	
	
	/*
		1 - 3
		2 - 6
		3 - 9
		4 - 12
		
		3 - n
		0.0, 62.5, 10.1 loop for these
		60.0, 122.3, 5.5
		30.0, 160.7, 7.8
	*/
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%f", &inputs[i]);
		}
	}
	
	computeAcceleration(n, inputs, funcOutputs);
	
	for (i = 0; i < n; i++) {
		printf("%d", funcOutputs[i]);
		printf(", ");
	}
	
	return 0;
	
}