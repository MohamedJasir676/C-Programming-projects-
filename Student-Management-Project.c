#include <stdio.h>

int main()
{
    int roll;
    char name[50];
    float mark;

    printf("STUDENT MANAGEMENT SYSTEM\n");

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf("%49s", name);

    printf("Enter Mark: ");
    scanf("%f", &mark);

    printf("\n--- STUDENT DETAILS ---\n");
    printf("Roll Number: %d\n", roll);
    printf("Name: %s\n", name);
    printf("Mark: %.2f\n", mark);

    return 0;
}
