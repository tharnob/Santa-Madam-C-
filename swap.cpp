#include<iostream>
using namespace std;
class B;

class A
{
    int x;
public:
    A(int a)
    {
        x=a;
    }

    void swapp(B b);
};

class B
{
  int y;
 public:
     B(int b)
     {
         y=b;
     }
     friend void A::swapp(B b);
};
void A::swapp(B b)
{
    x=x+b.y;
    b.y=x-b.y;
    x=x-b.y;

    cout<<x<<" "<<b.y;
}
int main()
{
    int b;
    int r,s;
    cin>>r>>s;

    A a1(r);
    B b1(s);
    a1.swapp(b1);
    return 0;
}
