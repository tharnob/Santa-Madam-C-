#include<iostream>
using namespace std;
class comp
{
    int real,img;
public:
    void get()
    {
        cin>>real>>img;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i";
    }
    friend comp sum(comp c1,comp c2);
};
comp sum(comp c1,comp c2)
{
    comp obj;
    obj.real=c1.real+c2.real;
    obj.img=c1.img+c2.img;
    return obj;
}
int main()
{
    comp c1,c2,c3,obj;
    cout<<"Enter 1st comp no.:";
    c1.get();
    cout<<"Enter 2nd comp no.:";
    c2.get();
    cout<<"The 1st comp no. is=";
    c1.display();
    cout<<"\nThe 2nd comp no. is=";
    c2.display();
    sum(c1,c2);
    cout<<"\nThe reasult compno. is=";
    obj.display();

}
