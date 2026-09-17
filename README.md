# Hospital Patient Priority Queue

## Description
This project implements a Hospital Patient Priority Queue using C programming.

Each patient is given a priority number:

- 1 = Emergency
- 2 = Urgent
- 3 = Routine

The patient with the lowest priority number is treated first. If two patients have the same priority, the patient who arrived earlier is treated first.

## Functions

### 1. addPatient()
Adds a patient to the priority queue with their name and priority.

### 2. treatNext()
Selects and removes the patient with the highest priority (lowest priority number).

## Test Data

| Patient | Priority |
|--------|----------|
| P1 | 3 |
| P2 | 1 |
| P3 | 2 |
| P4 | 1 |
| P5 | 3 |
| P6 | 2 |

## Treatment Order

P2 → P4 → P3 → P6 → P1 → P5

## Second Test

After treating 2–3 patients, a new emergency patient P7 with priority 1 is added.

The new emergency patient is treated before the remaining Urgent and Routine patients.

## Technology Used

- C Programming
- Priority Queue
- Data Structures and Algorithms

## Conclusion

The program successfully manages hospital patients according to their priority. Emergency patients are always treated before Urgent and Routine patients.
