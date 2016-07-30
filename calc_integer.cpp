#include <iostream>

using namespace std;

int add(int a,int b)
{
    int c;
    c = a + b;
    return c;
}
int subtraction(int a,int b)
{
    int c;
    c = a - b;
    return c;
}

int division(int a,int b)
{
    double c;
    if(b == 0)
    {
        return 0;
    }else{
        c = a / b;
    }
    return c;
}

int main()
{
    return 0;
}
