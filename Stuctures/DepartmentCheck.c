#include <stdio.h>
#include <string.h>

// Structure
struct student
{
    char name[20];
    char depart[20];
    int rollno;
    int rank;
};

// Function to check the department
void departmentcheck(struct student b1, struct student b2)
{
    if (strcasecmp(b1.depart, b2.depart) == 0)
        printf("SAME DEPARTMENT\n");
    else
        printf("NOT IN THE SAME DEPARTMENT\n");
}

int main()
{
    struct student boy[3];
    
    // Input
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%s %s %d %d", boy[i].name, boy[i].depart, &boy[i].rollno, &boy[i].rank);
    }
    
    departmentcheck(boy[0], boy[1]);
    
    return 0;
}
