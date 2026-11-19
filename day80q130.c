 //Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
 #include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    /* Writing records to file */
    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Name Roll Marks: ");
        scanf("%s %d %d", name, &roll, &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    /* Reading records from file */
    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}