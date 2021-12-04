//Virtual Function:

#include<iostream>
using namespace std;

class A

{
    int a;
    public:
    A(int x)
    {
        a=x;
        cout<<a;
    }
};

class B:public A

{
    int b;
    public:
    B(int y,int x):A(x)
    {
        b=y;
        cout<<b;
    }
};

class C:public B

{
    int c;
    public:
    C(int z,int y,int x):B(y,x)
    {
        c=z;
        cout<<c;
    }
};

int main()
{
C obj(10,20,30);
C*ptr=&obj;
}
