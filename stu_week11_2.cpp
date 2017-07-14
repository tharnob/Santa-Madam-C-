#include<iostream>
using namespace std;
#include<cstring>
class Student
{
char *name;
int age;
public:
    Student()
    {

    };
Student(char *s,int a)
{
    name= new char [strlen(s)+1];
    strcpy(name,s);
    age=a;
}
void getdata()
{
    char nam[20];
    int ag;
    cin>>nam>>ag;
    name = new char [strlen(nam)+1];
    strcpy(name,nam);
    age=ag;


}
void print()
{

        cout<<name<< " " <<age <<endl;

 //print the value;
}
friend void buble_sort(Student *ob ,int n);
};
void buble_sort(Student *ob ,int n)
{

    int i,j;
    for(i=0;i<n;i++)
    {
        Student t;
       for(j=1;j<n-i;j++)
       {
           if(t.age>ob[j].age)
           {
                t=ob[i];
                ob[i]=ob[j];
                ob[j]=t;


           }
       }
    }


}
int main()
{
 //declare an array of object and take input in this,print the value of the array.
 //then
 Student obj[100];
int N,i,j;

cout<<endl<<"Enter maximum number of records u want to enter:-> ";
cin>>N;
for(i=0;i<N;i++)
{
    obj[i].getdata();

}

//take the input and save it in obj array.
cout<<endl<<"U have entered following records:\n";
//print the value of the array
for(i=0;i<N;i++)
{
    obj[i].print();
}
buble_sort(obj,N);
cout<< "After \n";
for(i=0;i<N;i++)
{
    obj[i].print();
}
}

