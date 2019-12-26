#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Defines structure Item with double value and pointer next
struct Item
{
    double value;
    Item *next;
};

// Defines structure Stack with pointer top and integer size.
// Stack is empty so pointer and size are set to null and 0, respectively
struct Stack
{
    Item *top = nullptr;
    int size = 0;
};

// Prototypes
void push(Stack *stack, double num);
double pop(Stack *stack);
void printStack(const Stack *stack);

// Defines function push. Declares pointer i for Item structure.
// Through pointer, num is stored into value within Item structure
// Through pointer, item at top of stack is stored into next value in Item structure
// Through pointer, i is stored into top value
// Through pointer stack, size is incremented by 1
void push(Stack *stack, double num)
{
    Item *i = new Item;

    i->value = num;
    i->next = stack->top;
    stack->top = i;
    stack->size++;
}

// Defines pop function. If stack is null, then HUGE_VAL is returned and function ends
// Otherwise, pointer i is created and value at top of stack is stored into i
// Through pointer, value at top of stack becomes the pointer to the next item
// Value at pointer i is stored into result variable and i pointer is deleted
// Value at stack size is decremented by 1 and result variable is returned
double pop(Stack *stack)
{

    if (stack->top == nullptr)
    {
        return HUGE_VAL;
    }

    Item *i = stack->top;
    stack->top = i->next;
    double result = i->value;

    delete i;
    stack->size--;
    return result;
}

// Defines printStack function
// Declares pointer i and initializes using value at top of stack
// Prints out value at top of stack and labels accordingly
// In while loop, prints out remaining stack values until the value at next pointer is null
// Value of stack size is printed to denote total number of items in stack
void printStack(const Stack *stack)
{
    Item *i = stack->top;
    cout << i->value << setw(7) << "<= TOP" << endl;
    while (i->next != nullptr)
    {
        i = i->next;
        cout << i->value << endl;
    }

    cout << setw(5) << "--" << stack->size << " items found" << endl;
}

// Main function to call on above functions and insert values into them.
// Declared new stack is deleted afterwards

int main()
{
    Stack *stack = new Stack;

    push(stack, 20.5);
    push(stack, 60.004);
    push(stack, 10.08);
    push(stack, 40.3);
    push(stack, -160.93);
    printStack(stack);
    pop(stack);
    printStack(stack);

    delete stack;
    return 0;
}