#include<iostream>
#include<string.h>
using namespace std;

class publication
{
    char *title;
    int price;
public:
    publication(){}
    publication(char *t,int p)
    {
        title=new char[strlen(t)+1];
        strcpy(title,t);
        price=p;
    }
    void print()
    {
        cout<<title<<" "<<price<<endl;
    }


};
class book:public publication
{
    int acn;
public:
    book(int an,char *t,int p):publication(t,p)
    {
        acn=an;
    }
    void print()
    {
        publication::print();
        cout<<acn<<endl;
    }
};
class Magazine : public publication
{
    int vln;
public:
    Magazine(int vn)
    {
        vln=vn;
    }
    void print()
    {
        book::print();
        cout<<vln<<endl;
    }
};
class Journal: (public book, public Magazine )
{
    char *jname;
public:
    void getdata (char *jnm,char *t,int p,int an, int vn):book(t,p,an):Megazine(vn)
    {
        jname= new char [strlen(jnm)+1];
        strcpy(jname,jnm);
    }

    void print()
    {
        Magazine::print();
        cout<<jname<<endl;
    }


};

int main()
{
    Journal obj;
    obj.getdata();
    obj,print();


}
