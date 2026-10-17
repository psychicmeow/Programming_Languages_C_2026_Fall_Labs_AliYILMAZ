// week5_task1_file_io.c
// Name: Ali  Surname: Yilmaz  Student ID: 260ADM045
//
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// TODO: Fill in the missing parts marked below.
//
// Build: make lab5   Run: ./bin/week5_task1_file_io

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *filename = "data.txt";

    printf("Writing lines to %s...\n", filename);
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    fprintf(fp, "Hello, file I/O in C!\n");
    fprintf(fp, "This is another line.\n");
    fclose(fp);

    printf("Reading contents:\n");
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    char buffer[256];
    int lines_read = 0;
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
        lines_read++;
    }

    fclose(fp);
    printf("Lines read: %d\n", lines_read);

    return 0;
}