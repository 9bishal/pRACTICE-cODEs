#include <stdio.h>
#include <stdlib.h>

struct student {
    char usn[20], name[20], program[20];
    int sem;
    long phno;
    struct student* link;
};
typedef struct student* STUDENT;

STUDENT start = NULL;

STUDENT create() {
    STUDENT node = (STUDENT)malloc(sizeof(struct student));
    if (!node) {
        printf("\nMemory allocation failed!");
        return NULL;
    }
    printf("\nEnter USN, Name, Program, Semester, Phone Number: ");
    scanf("%s %s %s %d %ld", node->usn, node->name, node->program, &node->sem, &node->phno);
    node->link = NULL;
    return node;
}

void insert_front() {
    STUDENT node = create();
    if (node) {
        node->link = start;
        start = node;
    }
}

void delete_front() {
    if (start) {
        STUDENT temp = start;
        start = start->link;
        printf("Deleted student USN: %s\n", temp->usn);
        free(temp);
    } else {
        printf("List is empty!\n");
    }
}

void status() {
    STUDENT temp = start;
    if (!temp) {
        printf("\nList is empty!\n");
        return;
    }
    printf("\nStudent details:\n");
    while (temp) {
        printf("%s %s %s %d %ld\n", temp->usn, temp->name, temp->program, temp->sem, temp->phno);
        temp = temp->link;
    }
}

void insert_end() {
    STUDENT node = create();
    if (node) {
        if (!start) {
            start = node;
        } else {
            STUDENT temp = start;
            while (temp->link) temp = temp->link;
            temp->link = node;
        }
    }
}

void delete_end() {
    if (!start) {
        printf("List is empty!\n");
        return;
    }
    STUDENT temp = start, prev = NULL;
    while (temp->link) {
        prev = temp;
        temp = temp->link;
    }
    if (prev) {
        printf("Deleted student USN: %s\n", temp->usn);
        free(temp);
        prev->link = NULL;
    } else {
        printf("Deleted student USN: %s\n", temp->usn);
        free(temp);
        start = NULL;
    }
}

void menu() {
    int choice;
    do {
        printf("\nMenu:\n1. Insert Front\n2. Delete Front\n3. Insert End\n4. Delete End\n5. Status\n6. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: insert_front(); break;
            case 2: delete_front(); break;
            case 3: insert_end(); break;
            case 4: delete_end(); break;
            case 5: status(); break;
            case 6: break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 6);
}

int main() {
    menu();
    return 0;
}
