#include <stdio.h>
#include <string.h>

#define MAX 100

struct Patient {
    char name[20];
    int priority;
    int order;
};

struct Patient queue[MAX];
int size = 0;
int count = 0;

// Add a patient
void addPatient(char name[], int priority) {
    strcpy(queue[size].name, name);
    queue[size].priority = priority;
    queue[size].order = count++;
    size++;

    printf("%s added with priority %d\n", name, priority);
}

// Treat the highest priority patient
void treatNext() {
    if (size == 0) {
        printf("No patients waiting.\n");
        return;
    }

    int pos = 0;

    // Find patient with lowest priority number
    for (int i = 1; i < size; i++) {
        if (queue[i].priority < queue[pos].priority) {
            pos = i;
        }
        // If priority is same, earlier patient comes first
        else if (queue[i].priority == queue[pos].priority &&
                 queue[i].order < queue[pos].order) {
            pos = i;
        }
    }

    printf("Treating: %s (Priority %d)\n",
           queue[pos].name, queue[pos].priority);

    // Remove patient
    for (int i = pos; i < size - 1; i++) {
        queue[i] = queue[i + 1];
    }

    size--;
}

int main() {

    // Step 3 test
    addPatient("P1", 3);
    addPatient("P2", 1);
    addPatient("P3", 2);
    addPatient("P4", 1);
    addPatient("P5", 3);
    addPatient("P6", 2);

    printf("\nTreatment Order:\n");

    while (size > 0) {
        treatNext();
    }

    return 0;
}
