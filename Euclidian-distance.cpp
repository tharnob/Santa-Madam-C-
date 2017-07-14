#include<iostream>
#include<math.h>
using namespace std;
class B;
class A
{
 int a;
 int b;
public:
    A(int x,int y)
    {
        a=x;
        b=y;
    }
   friend float disT(A p,B q);
};

class B
{
    int c,d;
public:
    B(int x,int y)
    {
        c=x;
        d=y;
    }
    friend float disT(A p,B q);
};
float disT(A p , B q)
{
    int x=p.a-q.c;
    int y=p.b-q.d;
    return sqrt((x*x)+(y*y));
}

int main()
{
    int w,x,y,z;
    cout<< "A : ";
    cin>>w>>x;
    cout<< "B : ";
    cin>>y>>z;
    A a(w,x);
    B b(y,z);
    cout<<disT(a,b);

}
