#include <stdio.h>
#define max 20
int stack[max];
int top1 = -1;
int top2 = max / 2;
void push1(int data)
{
    int last = (max / 2) - 1;
    if (top1 == last)
    {
        printf("stack OverFlow \n");
        return;
    }
    else
    {
        top1++;
        stack[top1] = data;
        printf("Push Element %d in stack first\n", stack[top1]);
    }
}
void push2(int data)
{
    if (top2 == max - 1)
    {
        printf("stack OverFlow \n");
        return;
    }
    else
    {
        top2++;
        stack[top2] = data;
        printf("Push Element %d in stack 2nd\n", stack[top2]);
    }
}
void pop1()
{
    if (top1 == -1)
    {
        printf("Stack underflow \n");
        return;
    }
    else
    {
        top1--;
        printf("%d Element pop in stack First \n",stack[top1]);
    }
}
void pop2()
{
    int initial = max / 2;
    if (top2 == initial)
    {
        printf("Stack underflow \n");
        return;
    }
    else
    {
        printf("%d Element pop in stack 2nd \n",stack[top2]);
        top2--;
    }
}
void display()
{
    int initial = max / 2 + 1;
    printf("Stack 1st Element \n");
    for (int i = 0; i <= top1; i++)
    {
        printf("%d \n", stack[i]);
    }
    printf("Stack 2nd Element \n");
    for (int i = initial; i <= top2; i++)
    {
        printf("%d \n", stack[i]);
    }
}
int main()
{
    push1(10);
    push1(20);
    push1(30);
    push1(40);
    push1(50);
    push2(11);
    push2(22);
    push2(33);
    push2(44);
    push2(55);
    display();
    pop1();
    pop1();
    pop1();
    pop2();
    pop2();
    pop2();
    display();
}