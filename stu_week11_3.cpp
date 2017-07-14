#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    protected:
    int roll;
  //declare student roll_no as protected variable of this class.
public:
    void set_num(int r)
    {
        roll=r;
    }
    void get_num()
    {
        cout<<"Roll="<<roll<<endl;
    }
 //write methods to set and get roll_number;
};
class test:public student  // class test inherits class student publicly.
{
protected:
    float marks;
//declare student's marks as protected variable
public:
     void set_marks(float m)
     {
         marks=m;
     }
     void get_marks()
     {
         cout<<"Marks="<<marks<<endl;
     }
//write methods to set and get student's marks;

};
class sports
{
protected:
    float score;
//declare sports_score as a protected variable;
public:
    void set_score(float s)
    {
        score=s;
    }
    void get_score()
    {
        cout<<"Score="<<score<<endl;
    }
 //write methods to set and get sport's score;

};
class result:public test,public sports //this class inherits  test and sports class as publicly
{
 float total;
public:
 void display(void)
 {
   total=marks+score;// add student's marks and score and save it in total.
   cout<<"Total"<<"="<<total<<endl;// display the total marks;
        get_num();
        get_marks();
        get_score();//implement this function so that it can show the student's roll_no,marks and sport's score.

 }
};
int main()
{
 result stu;
 stu.set_num(12);
 stu.set_marks(87.6);
 stu.set_score(5.5);
 stu.display();

}
