#include <stdio.h>
#include <stdbool.h>

void push(int st[], int num, int* top) {
    st[++(*top)] = num;
}

void pop(int stack[], int* top) {
    if (*top >= 0) {
        printf("The value popped is: %d\n", stack[*top]);
        (*top)--;
    } else {
        printf("Stack underflow, cannot pop from an empty stack!\n");
    }
}

bool isEmpty(int* top) {
    if (*top == -1) {
        printf("Stack is empty\n");
        return true;
    } else {
        printf("Stack is not empty\n");
        return false;
    }
}

int sizee(int* top) {
    printf("The size of the stack is: %d\n", *top + 1);
    return *top + 1;
}

void print(int stack[], int* top) {
    if (*top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements from top to bottom: \n");
    for (int i = *top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int stack[100];
    int top = -1;
    int choice;
       printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Check if Empty\n");
        printf("4. Get Stack Size\n");
        printf("5. Print Stack\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    do {
       
     
       

        switch (choice) {
            case 1: {
                int value;
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(stack, value, &top);
                 scanf("%d", &choice);
                break;
            }
            case 2: {
                pop(stack, &top);
                scanf("%d", &choice);
                break;
            }
            case 3: {
                isEmpty(&top);
                scanf("%d", &choice);
                break;
            }
            case 4: {
                sizee(&top);
                scanf("%d", &choice);
                break;
            }
            case 5: {
                print(stack, &top);
                scanf("%d", &choice);
                break;
            }
            case 6: {
                printf("Exit\n");
                break;
            }
            default: {
                
                break;
            }
        }
    } while (choice != 6);

    return 0;
}
