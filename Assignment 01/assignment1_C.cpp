#include <iostream>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
    float marks;
public:

    void initStudent()
{
    roll_no=0;
    name="null";
    marks=0.0;
    
}
    void acceptStudent()
{
    cout<<"enter roll no. :"<<roll_no<<endl;
    cin>>roll_no;
    cout<<"enter name :"<<name<<endl;
    cin>>name;
    cout<<"enter marks :"<<marks<<endl;
    cin>>marks;
}

void printStudent()
{
    cout<<"The Student Info is :"<<roll_no<<" "<<name<<" "<<marks<<endl;

}

};

int main()
{
    Student s1;
    int choice;
    
    do
    {
    cout<<"0 - Exit"<<endl;
    cout<<"1 - Initial Values "<<endl;
    cout<<"2 - Accept & Display Info"<<endl;
    switch (choice)
    {
    case 0:
        cout<<"Thank you ...."<<endl;
        break;
    case 1:
        s1.initStudent();

        break;
    case 1:
        s1.acceptStudent();
        s1.printStudent();
        
        break;
    default:
    cout
        break;
    }
    } while (/* condition */);
    

    return 0;

}