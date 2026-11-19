//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fput
#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    source = fopen(sourceFile, "r");

    if (source == NULL) {
        printf("Source file not found!");
        return 1;
    }

    destination = fopen(destFile, "w");

    if (destination == NULL) {
        printf("Unable to create destination file!");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s", destFile);

    return 0;
}
