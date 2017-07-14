#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
class convert
{
int number;
char *num_string;
public:
void set_number(int n)
{
    number=n;
} // Assign n to number
void set_num_string(char *a)
{
    num_string=new char [strlen(a+1)];
    strcpy(num_string,a);
} // Assign string a to num_string
char *get_num_string()
{
    return num_string;
} // Return num_string
void reverse_num_string()
{
    strrev(num_string);
    //cout<<num_string<<endl;
} // Reverse num_string
void concate_to_num_string(int n)
{
    char a[100];
    int i;
    for(i=0;n!=0;i++)
    {
        a[i]=n%10+48;
       n= n/10;
    }
    a[i]='\0';

    strrev(a);
    strcat(num_string,a);
    cout<<num_string<<endl;

 }// Convert n to a string then concate it with num_string
bool check_palindrome()
{
    int r;
    char *s;
   s=new char [strlen(s+1)];
    strcpy(s,num_string);
    strrev(s);
    return r;
}

// Check if num_string is a palindrome
};
int main()
{
    int r;
    convert a;
    a.set_num_string("madam");
    a.reverse_num_string();
   /* cout<<a.get_num_string()<<endl;
    a.set_num_string("madam");
    cout<<a.get_num_string()<<endl;
    cout<<a.check_palindrome()<<endl;
    a.set_number(11);
    a.concate_to_num_string(11);
    a.reverse_num_string();*/

     if(a.check_palindrome()==1)
 {
     cout<<"palindrome"<<endl;
 }
else
 {
     cout<<"not palindrome"<<endl;
 }

     a.concate_to_num_string(123);

     a.reverse_num_string();

   return 0;

}
