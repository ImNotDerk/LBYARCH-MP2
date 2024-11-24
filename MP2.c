#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int computeAcceleration(float initV, float finalV, float time);

int main() {
	int i, j;
	int n = 0;
	
	scanf("%d", &n);
	
	int* funcOutputs = (int*)malloc(n*sizeof(int));
	float inputs[n][3];

	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%f", &inputs[i][j]);
		}
	}

    clock_t start = clock();

	for (i = 0; i < n; i++) {
		funcOutputs[i] = computeAcceleration(inputs[i][0], inputs[i][1], inputs[i][2]);
	}

    clock_t end = clock();

    double execution_time = (double)(end - start) / CLOCKS_PER_SEC;
	
	for (i = 0; i < n; i++) {
		printf("\n%d\n", funcOutputs[i]);
	}

    printf("\nTotal execution time: %f seconds\n", execution_time);
	
	return 0;
	
}