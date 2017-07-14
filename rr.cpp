#include<iostream>
using namespace std;
int main ()
{
  int a,b;
  cin>>a>>b;
  if(a>b)
  {
    cout<<a<<"is max and"<<b<<"is min";
  }
  else if(a==b)
  {
    cout<<"equal";
  }
  else
  {
    cout<<b<<"is max and"<<a<<"is min";
  }
  return 0;
}
