#include<iostream>
#include<math.h>
using namespace std;
class dist{
    int p,q;
public:
    void get()
{
    cout<<"Enter the  value of a point"<<endl;
    cin>>p>>q;
}
friend void calc(distance a,distance b);
};
void calc(distance a,distance b)
{    int c;
    float d;
    c=( pow(b.p-a.p,2)  +   pow(b.q-a.q,2) );
    d=pow(c,0.5);
    cout<<"Distance between point(X1,X1) and (Y2,y2) is:"<<d <<endl;
}
int main()
{
    distance m,n;
    m.get();
    n.get();
    calc(m,n);
return 0;
}

