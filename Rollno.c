//write a program to store and display roll no and marks of phy chem and maths And transpose of given matrix

#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int roll[n], marks[n][3];


    for (i = 0; i < n; i++) {
        printf("Enter Roll No and marks (Phy Chem Maths) for Student %d: ", i + 1);
        scanf("%d %d %d %d", &roll[i], &marks[i][0], &marks[i][1], &marks[i][2]);
    }

    printf("\nRoll No | Physics | Chemistry | Maths\n");
    for (i = 0; i < n; i++)
        printf("%7d | %7d | %8d | %5d\n", roll[i], marks[i][0], marks[i][1], marks[i][2]);

    printf("\nTransposed Marks Matrix:\n");
    for (j = 0; j < 3; j++) {
        if (j == 0) printf("Physics    : ");
        else if (j == 1) printf("Chemistry  : ");
        else printf("Mathematics: ");
        
        for (i = 0; i < n; i++) 
            printf("%d ", marks[i][j]);
        
        printf("\n");
    }

    return 0;

}
