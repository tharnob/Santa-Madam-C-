#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[]="Tonia Afzal",*a;

    a=name;
   while(*a!='\0')
    {
        cout<<*a;
        a++;

    }
}
