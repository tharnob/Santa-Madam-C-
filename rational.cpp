#include<iostream>
using namespace std;
class rational
{
    int p,q;
   public:
       void set(int r1,int r2)
       {
           p=r1;
           q=r2;
       }
       void  out()
       {
           cout<<"sum is= ";
           cout<<p<<"/"<<q;
       }
     friend  rational  add(rational  r1,rational  r2);
};
rational add(rational r1,rational r2)
{
    rational  a;
    a.p=((r1.p*r2.q)+(r2.p*r1.q));
    a.q=r1.q*r2.q;
    return a;
}
int main()
{
 rational  s,t,obj;
 int p,q,a,b;
 cin>>p>>q;
 cin>>a>>b;
 s.set(p,q);
 t.set(a,b);
 obj=add(s,t);
 obj.out();
 return 0;

 }
