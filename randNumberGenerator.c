#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random float between min and max
float randomFloat(float min, float max) {
    return min + ((float)rand() / RAND_MAX) * (max - min);
}

int main() {
    int n = 1000; // Number of rows
    int i;

    float matrix[n][3];
    srand(time(NULL)); // Seed the random number generator

    // Fill the matrix with random numbers
    for (i = 0; i < n; i++) {
        matrix[i][0] = randomFloat(0.1, 100.0);               // Random positive float (min: 0.1, max: 100)
        matrix[i][1] = randomFloat(matrix[i][0] + 0.1, 200.0); // Second number > first
        matrix[i][2] = randomFloat(0.1, 50.0);               // Random positive float for time
    }

    printf("%d", n);
    printf("\n");

    // Print the generated matrix
    for (i = 0; i < n; i++) {
        printf("%.1f %.1f %.1f\n", matrix[i][0], matrix[i][1], matrix[i][2]);
    }

    return 0;
}
