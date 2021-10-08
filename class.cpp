#include<iostream>
#include<string>
using namespace std;
class info{
private:
int rollno;
string name;
int marks1,marks2,marks3;
public:
void getdata(int rno,string n,int m1,int m2,int m3);
   void putdata()
  {
  cout<<"Roll number : "<<rollno<<endl;
  cout<<"Name of the student : "<<name<<endl;
  cout<<"Physics marks : "<<marks1<<endl;
  cout<<"Chemistry marks : "<<marks2<<endl;
  cout<<"Maths marks : "<<marks3<<endl;
  }
  
  };
  
  void info::getdata(int rno,string n,int m1,int m2,int m3)
  {
    rollno=rno;
    name=n;
    marks1=m1;
    marks2=m2;
    marks3=m3;
  }  
  int main()
  {
    info i;
    i.getdata(682,"Saurabh Thapliyal",78,90,77);
    i.putdata();
    return 0;
  }
    
