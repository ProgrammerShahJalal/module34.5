#include <stdio.h>

int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    if (inputFile == NULL)
    {
        printf("No file found\n");
        return 0;
    }

    int n, a[n+5];
    fscanf(inputFile, "%d", &n);

    for (int i = 0; i < n; i++)
    {
        fscanf(inputFile, "%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(outputFile, "%d ", a[i]);
    }

    return 0;
}