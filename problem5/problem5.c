#include <stdio.h>

int main()
{
    FILE * inputFile = fopen("input.txt", "r");
    FILE * outputFile = fopen("output.txt", "w");
    int i, j, n;

    fscanf(inputFile, "%d", &n);

    for (i = 1; i <= n; i++)
    {
        /* Print trailing spaces */
        for (j = 1; j <= n - i; j++)
        {
            fprintf(outputFile, " ");
        }

        /* Print hashs after spaces */
        for (j = 1; j <= n; j++)
        {
            fprintf(outputFile, "#");
        }

        /* Move to the next line */
        fprintf(outputFile, "\n");
    }

    return 0;
}