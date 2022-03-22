#include <stdio.h>
#include <stdlib.h>
int n;
int * warshall(int *B)
{
    int *A = (int *)malloc(n * n * sizeof(int));

    for (int i = 0; i < n * n; i++)
        A[i] = B[i];

    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            if (A[i*n+k] == 1) {
                for (int j = 0; j < n; j++)
                    A[i*n+j] = A[i *n + j] || A[k * n + j];
            }
    return A;
}
int main(int argc, char const *argv[])
{
    FILE *in = fopen(argv[1], "r");

    fscanf(in,"%d", &n);

    int *B = (int *)malloc(n * n * sizeof(int));

    for (int i = 0; i < n * n; i++)
        fscanf(in, "%d", B + i);
    fclose(in);
    int *A = warshall(B);

    FILE *out = fopen(argv[2], "w");
    fprintf(out, "%d\n", n);
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            fprintf(out, "%d ", A[i * n + j]);
        fprintf(out, "\n");
    }     
    free(A);
    free(B);
    fclose(out);
    return 0;
}
