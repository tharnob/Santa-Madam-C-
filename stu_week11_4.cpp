#include<iostream>
using namespace std;
#include<string.h>
class person
{
    int age;
    char *name;
//declare name and age as private variable ;
public:
    person(char *n,int a=0)
    {
        age=a;
        name=new char[strlen(n)+1];
        strcpy(name,n);
    }
    void disp()
    {
        cout<<name<<" "<<age<<endl;
    }
//write necessary methods/constructor so that the main function works perfectly.
};
int main()
{
person p1("raju"),p2("siyam",20);
person p3=p2;
p1.disp();
p2.disp();
p3.disp();
}
