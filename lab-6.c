/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num_of_students = 0;
    printf("Please enter the number of students in your class: ");
    scanf("%d", &num_of_students);
    
    float marks[num_of_students];
    
    // Receiving the marks of students
    for (int i = 0; i < num_of_students; i++) {
        printf("\nStudent %d ", i + 1);
        scanf("%f", &marks[i]);
    }
    
    // Printing out the marks of the students
    printf("\nStudent values\n");
    for (int i = 0; i < num_of_students; i++) {
        printf("\nStudent %d: %0.2f", i + 1, marks[i]);
    }
    
    // Mean mark calculation
    /* Please note that I don't remember the 
    formula for mean mark, I am just guesing */
    
    // mean = sum_of_marks / num_of_students;
    float sum_of_marks = 0;
    float mean = 0;
    for (int i = 0; i < num_of_students; i++) {
        sum_of_marks += marks[i];
    }
    mean = sum_of_marks / num_of_students;
    printf("\n\nMean mark of students is %0.2f\n", mean);
    
    // Sorting of the arrays
    for (int i = 0; i < num_of_students; i++) {
        for (int j = i + 1; j < num_of_students; j++) {
            if (marks[i] > marks[j]) {
                float value_to_switch = marks[i];
                marks[i] = marks[j];
                marks[j] = value_to_switch;
            }
        }
    }
    
    // Printing out the content of the sorted array
    printf("\nSorted values\n");
    for (int i = 0; i < num_of_students; i++) {
        printf("\nSort %d %0.2f", i + 1, marks[i]);
    }
    

    return 0;
}