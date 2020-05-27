/* Simple Stack using struct */

#include <stdio.h>

#define MAX 10

struct stack {
    int stk[MAX];
    int top;
};

struct stack *ptr, stacki;

void push (void);
int  pop(void);
void display (void);

void push() { /* Function to do PUSH to the stack */
	int num;
    if(ptr->top == (MAX - 1)) {
        printf("Stack seems to be full, Overflow detected!\n");
    } else {
        printf("\nElement to be pushed:");
        scanf("%d", &num);
        ptr->top = ptr->top + 1;
        ptr->stk[ptr->top] = num;
    }
}

int pop() { /* Function to do POP from the stack */

    int num;
    if(ptr->top == -1) {
        printf("Underflow detected!, stack is empty\n");
        return (ptr->top);
    } else {
        num = ptr->stk[ptr->top];
        printf("Poped = %d\n", ptr->stk[ptr->top]);
        ptr->top = ptr->top - 1;
    }
    return(num);
}

void display() { /* Function to display stack */

    int i;
    if (ptr->top == -1) {
        printf("Empty!, Push something to the stack to view->\n");
        return;
    } else {
        printf("\nS T A C K\n");
        for (i = ptr->top; i >= 0; i--) {
            printf("\t\t| %d |\n", ptr->stk[i]);
            printf("\t\t-----\n");
        }
    }
}

int main () {

	ptr = &stacki;

    int choice;
    int option = 1;
    ptr->top = -1;

    while (option) {
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("SELECT THE OPTION: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4:
			return 0;
            default:
            printf("\nwrong choice \n");
        }

        printf("\nWish to continue press 1 or else 0: ");
        scanf("%d", &option);
    }
    return 0;
}
