#include <stdio.h>

int main()
{
    FILE * inputFile = fopen("input.txt", "r");
    FILE * outputFile = fopen("output.txt", "w");
    if(inputFile==NULL){
        printf("input file not found\n");
        return 0;
    }
    int n, last = 0, sum = 0;
    fscanf(inputFile, "%d", &n);
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        fscanf(inputFile, "%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        last = a[i] % 10;
        sum += last;
    }

    fprintf(outputFile, "Sum = %d\n", sum);
    return 0;
}