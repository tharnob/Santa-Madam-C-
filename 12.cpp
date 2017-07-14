#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char *name;
    int roll;
public:
    student(){}
    student(char *n,int r)
    {
        name=new char[strlen(n)+1];
        strcpy(name,n);
        roll=r;
    }

    string getn()
    {
        return name;
    }
    int getr()
    {
        return roll;
    }
};

class marks:public student
{
    int exm,inm,scode;
    char *sname;
public:
    marks(char *sn,int sc, int im,int em,char *nm,int rl):student(nm,rl)
    {
        sname=new char [strlen(sn)+1];
        strcpy(sname,sn);
        scode=sc;
        inm=im;
        exm=em;
    }
    void disp()
    {
        cout<<getn()<< " "<<getr()<< " "<<sname<< " "<<scode<< " "<<inm<< " "<<exm<<endl;
    }
};

int main()
{
    marks m("CSE",206,30,40,"Rahim",201314050);
    m.disp();
}

