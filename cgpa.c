#include <stdio.h>

int main() {
    int score[100], units[100]; // assume max 100 courses
    char letterGrade[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int gradePoint[] = {5, 4, 3, 2, 1, 0};

    int n; // number of courses
    printf("Enter number of courses: ");
    scanf("%d", &n);

    int totalUnits = 0, totalPoints = 0;

    for (int i = 0; i < n; i++) {
        printf("\nCourse %d:\n", i + 1);
        printf("Enter score: ");
        scanf("%d", &score[i]);
        printf("Enter unit: ");
        scanf("%d\n\n", &units[i]);
    }

    for (int i = 0; i < n; i++) {
        int point;
        char grade;

        if (score[i] >= 70) {
            grade = letterGrade[0]; point = gradePoint[0];
        } else if (score[i] >= 60) {
            grade = letterGrade[1]; point = gradePoint[1];
        } else if (score[i] >= 50) {
            grade = letterGrade[2]; point = gradePoint[2];
        } else if (score[i] >= 45) {
            grade = letterGrade[3]; point = gradePoint[3];
        } else if (score[i] >= 40) {
            grade = letterGrade[4]; point = gradePoint[4];
        } else {
            grade = letterGrade[5]; point = gradePoint[5];
        }

        totalUnits += units[i];
        totalPoints += point * units[i];

        printf("Course %d: Score = %d, Grade = %c, Grade Point = %d\n", i + 1, score[i], grade, point);
    }

    double cgpa = (double) totalPoints / totalUnits;
    printf("\nTotal Units: %d\nTotal Points: %d\nCGPA: %.2lf\n", totalUnits, totalPoints, cgpa);

    // Degree classification
    if (cgpa >= 4.50) printf("Class of Degree: First Class Honours\n");
    else if (cgpa >= 3.50) printf("Class of Degree: Second Class Honours (Upper Division)\n");
    else if (cgpa >= 2.40) printf("Class of Degree: Second Class Honours (Lower Division)\n");
    else if (cgpa >= 1.50) printf("Class of Degree: Third Class Honours\n");
    else if (cgpa >= 1.00) printf("Class of Degree: Pass\n");
    else printf("Advice to withdraw\n");

    return 0;
}
