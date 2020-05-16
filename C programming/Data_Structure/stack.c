#include <stdio.h>
#define MAX 10

typedef struct // stack
{
    int stk[MAX];
    int top;
}stack;

stack s;

void push (void);
int  pop(void);
void display (void);

void main ()
{
    int choice;
    int option = 1;
    s.top = -1;

    while (option)
    {
        printf("1. PUSH\n");
        printf("2  POP\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("SELECT THE OPTION: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4:
            return;
            default:
            printf("\nwrong choice \n");
        }

        printf("\nWish to continue press 1 or else 0: ");
        scanf("%d", &option);
    }
}


void push() // Function to do PUSH to the stack.
{
    int num;
    if(s.top == (MAX - 1))
    {
        printf("Stack seems to be full, Overflow detected!\n");
    }
    else
    {
        printf("\nElement to be pushed:");
        scanf("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }

}


int pop() // Function to do POP from the stack.
{
    int num;
    if(s.top == - 1)
    {
        printf("Underflow detected!, stack is empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf("Poped = %d\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}

void display() // Function to display stack.
{
    int i;
    if (s.top == -1)
    {
        printf("Empty!, Push something to the stack to view.\n");
    }
    else
    {
        printf("\nS T A C K\n");
        for (i = s.top; i >= 0; i--)
        {
            printf("\t\t| %d |\n", s.stk[i]);
            printf("\t\t-----\n");
        }
    }
}
