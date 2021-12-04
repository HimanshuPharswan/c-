//Virtual Function:

#include<iostream>
using namespace std;

class A
{
    public:
    void x()
       {
           cout<<"I am Bot"<<endl;
       }
};

class B:public A
{
    public:
    void x()
    {
        cout<<"I am Professional"<<endl;
    }
};
int main()
{
B obj;
B*ptr=&obj;
ptr->x ();
}
