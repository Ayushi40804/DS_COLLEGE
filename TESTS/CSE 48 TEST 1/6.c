//Describe how to solve a system of linear equations represented by a sparse matrix using iterative methods such as conjugate gradient method. Implement a single version of this algorithm in c assuming the matrix is symmtric and positive-defined
#include <stdio.h>
#include <math.h>

#define N 4 // Size of the matrix (adjust as needed)
#define EPSILON 1e-6 // Convergence tolerance
#define MAX_ITER 1000 // Maximum number of iterations

// Function to perform matrix-vector multiplication
void matVecMultiply(double A[N][N], double x[N], double result[N]) {
    for (int i = 0; i < N; i++) {
        result[i] = 0;
        for (int j = 0; j < N; j++) {
            result[i] += A[i][j] * x[j];
        }
    }
}

// Function to compute dot product of two vectors
double dotProduct(double a[N], double b[N]) {
    double result = 0;
    for (int i = 0; i < N; i++) {
        result += a[i] * b[i];
    }
    return result;
}

// Conjugate Gradient method
void conjugateGradient(double A[N][N], double b[N], double x[N]) {
    double r[N], p[N], Ap[N];
    double alpha, beta, r_dot_r, r_dot_r_new;

    // Initialize x to zero
    for (int i = 0; i < N; i++) {
        x[i] = 0;
    }

    // Compute initial residual
    matVecMultiply(A, x, r);
    for (int i = 0; i < N; i++) {
        r[i] = b[i] - r[i];
    }

    // Set initial direction vector p to r
    for (int i = 0; i < N; i++) {
        p[i] = r[i];
    }

    r_dot_r = dotProduct(r, r);

    for (int k = 0; k < MAX_ITER; k++) {
        // Compute A * p
        matVecMultiply(A, p, Ap);

        // Compute alpha
        alpha = r_dot_r / dotProduct(p, Ap);

        // Update x
        for (int i = 0; i < N; i++) {
            x[i] += alpha * p[i];
        }

        // Update r
        for (int i = 0; i < N; i++) {
            r[i] -= alpha * Ap[i];
        }

        // Check for convergence
        r_dot_r_new = dotProduct(r, r);
        if (sqrt(r_dot_r_new) < EPSILON) {
            break;
        }

        // Compute beta
        beta = r_dot_r_new / r_dot_r;

        // Update p
        for (int i = 0; i < N; i++) {
            p[i] = r[i] + beta * p[i];
        }

        r_dot_r = r_dot_r_new;
    }
}

int main() {
    // Example matrix (symmetric and positive-definite)
    double A[N][N] = {
        {4, 1, 0, 0},
        {1, 4, 1, 0},
        {0, 1, 4, 1},
        {0, 0, 1, 3}
    };
    double b[N] = {15, 10, 10, 10}; // Example right-hand side vector
    double x[N]; // Solution vector

    // Solve the system
    conjugateGradient(A, b, x);

    // Print the solution
    printf("Solution vector:\n");
    for (int i = 0; i < N; i++) {
        printf("%f ", x[i]);
    }
    printf("\n");

    return 0;
}