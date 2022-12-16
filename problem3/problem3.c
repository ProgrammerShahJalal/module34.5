#include <stdio.h>
int main()
{
    FILE * inputFile = fopen("input.txt", "r");
    FILE * outputFile = fopen("output.txt", "w");
    if(inputFile==NULL){
        fprintf(outputFile, "inputFile not found\n");
    }

    int t, n;
    fscanf(inputFile, "%d", &t);

    for (int i = 0; i < t; i++)
    {
        fscanf(inputFile, "%d", &n);
        if (n > 0)
        {
            for (int i = n; i >= 1; i--)
            {
                fprintf(outputFile, "%d ", i);
            }
            fprintf(outputFile, "%d ", 0);
            for (int i = 1; i <=n; i++)
            {
                fprintf(outputFile, "%d ", -i);
            }
            fprintf(outputFile, "\n");
        }

        if (n < 0)
        {
            for (int i = -n; i >= 1; i--)
            {
                fprintf(outputFile, "%d ", -i);
            }
            fprintf(outputFile, "%d ", 0);
            for (int i = 1; i <=-n; i++)
            {
                fprintf(outputFile, "%d ", i);
            }
            fprintf(outputFile, "\n");
        }
    }
    return 0;
}