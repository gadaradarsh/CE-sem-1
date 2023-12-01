#include <stdio.h>

struct Address {
    char street[200];
    char city[30];
    char state[30];
};

struct EmployeeInfo {
    char name[20];
    int id;
    int age;
    struct Address add; // Nested structure for address
};

int main() {
    struct EmployeeInfo info[2];

    for (int i = 0; i < 2; i++) {
        printf("ENTER NAME: ");
        scanf("%s", info[i].name);
        printf("ENTER ID: ");
        scanf("%d", &info[i].id);
        printf("ENTER AGE: ");
        scanf("%d", &info[i].age);

        printf("ENTER STREET: ");
        scanf("%s", info[i].add.street);
        printf("ENTER CITY: ");
        scanf("%s", info[i].add.city);
        printf("ENTER STATE: ");
        scanf("%s", info[i].add.state);
    }

    // Display employee information
    for (int i = 0; i < 2; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", info[i].name);
        printf("ID: %d\n", info[i].id);
        printf("Age: %d\n", info[i].age);
        printf("Address: %s, %s, %s\n", info[i].add.street, info[i].add.city, info[i].add.state);
    }

    return 0;
}
