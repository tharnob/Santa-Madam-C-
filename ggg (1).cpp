#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int a;
  float b;
  char s[100];
  cin.getline(s,80);
  cin>>a>>b;
  cout<<a<<"\n";
  cout<<setprecision(3)<<b<<"\n";
  cout<<s<<endl;
  return 0;
}

