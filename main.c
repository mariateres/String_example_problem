#include <stdio.h>
#include <stdlib.h>
int add(int a,int b);
int sub(int a,int b);
int main()
{
    int x=80,y=30;
    int choice=2;
    int (*ptr)(int,int)=add;
    int (*ptr1)(int,int)=sub;
    switch(choice)
    {
    case 1:
        return ptr(x,y);
        break;
    case 2:
        return ptr1(x,y);
        break;
    }
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
