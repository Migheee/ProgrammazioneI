/* Lettura righe da file */

#include <stdio.h>
#define LINE_SIZE 255

int main() {
    FILE *fp;
    char line[LINE_SIZE];
    int i = 0;

    fp = fopen("file.txt", "r");

    if (fp != NULL) {
        fgets(line, LINE_SIZE, fp); 
        while (!feof(fp)) {
            printf("line %d: %s", i, line);
            i++;
            fgets(line, LINE_SIZE, fp);
        }

    }
    printf("Number of lines: %d\n", i);
    fclose(fp);
}   