#include<iostream>
using namespace std;
int main ()
{
  int i,j,k,n;
  cin>>n;
  for(i=1;i<=n;i++)
  {
   for(j=i;j<n;j++)
   {
     cout<<" ";
   }
   for(k=1;k<=i;k++)
   {
     cout<<"*";
   }
   cout<<"\n";
  }
   for(i=1;i<=n;i++)
  {
   for(k=1;k<=i;k++)
   {
     cout<<" ";
   }
   for(j=i;j<n;j++)
   {
     cout<<"*";
   }
   cout<<"\n";
  }

  return 0;
}
