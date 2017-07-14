#include<iostream>
using namespace std;
int main ()
{
  int a,b,c;
  cin>>a>>b>>c;
  if(a>=b && a>=c)
  {
    if(b>c)
    {
     cout<<a<<"is max"<<c<<"is min";
    }
    else
    {
     cout<<a<<"is max and"<<b<<"is min";
    }
}
  else if(b>=a && b>=c)
  {
    if(a>c)
    {
     cout<<b<<"is max"<<c<<"is min";
    }
  else
  {
    cout<<b<<"is max and"<<a<<"is min";
  }
  }
  else
  {
    if(a>b)
    {
        cout<<c<<"is max"<<b<<"is min";
    }
    else
    {
     cout<<c<<"is max"<<a<<"is min";
    }
  }
  return 0;
}

