#include<iostream>
using namespace std;


class Date
{
    private:
    int day;
    int month;
    int year;
    
    public:
    Date()
    {
    day=31;
    month=12;
    year=1969;
        
    }
    
    void acceptDate()
    {
        cout<<"Enter the Date :"<<endl;
        cin>>day;
        cout<<"Enter the Month :"<<endl;
        cin>>month;
        cout<<"Enter the Year :"<<endl;
        cin>>year;
    }

    void displayDate()
    {
        cout<<"The Date is : "<<day<<"/"<<month<<"/"<<year<<endl;

    }
};


class Person
{   
    private:
    string name;
    string addr;
    Date dob;

    public:
    Person()
    {
        this->name="  ";
        this->addr=" ";
        Date dob;    

    }

    void acceptPerson()
    {
        cout<<"Enter the Person name :"<<name<<endl;
        cin>>name;
        cout<<"Enter the Person address :"<<addr<<endl;
        cin>>addr;
        cout<<"Enter the Person DOB :"<<endl;
        dob.acceptDate();
    }
    void displayPeron()
    {
        cout<<"The Person details are :"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<addr<<endl;
        cout<<"Date of Birth : "<<endl;
        dob.displayDate();
    }
};


class Employee
{
    private:

    int id;
    double sal;
    Date doj;

    public:

    Employee()
    {
        this->id=00;
        this->sal=0.0000;
        Date doj;
        
    }
    void acceptEmployee()
    {
        cout<<"Enter Employee Details :"<<endl;
        cout<<"ID : ";
        cin>>id;
        cout<<"Salary : ";
        cin>>sal;
        doj.acceptDate();
        

    }
    void displayEmployee()
    {
        cout<<"The Employee Detail are :"<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Salary : "<<sal<<endl;
        doj.displayDate();


    }


};

int main()
{
    Person p;
    

    Employee e1;
   
    int choice;
    do
    {
        cout<<"0 - EXIT"<<endl;
        cout<<"1 - Enter & Display PERSON Details"<<endl;
        cout<<"2 - Enter & Display EMPLOYEE Details"<<endl;
        cout<<"Enter your Choice"<<endl;
        cin>>choice;

    switch (choice)
    {
    case 0:
        cout<<"Thank you ..........................."<<endl;
        break;
    case 1:
        p.acceptPerson();
        p.displayPeron();
        break;
    case 2:
       e1.acceptEmployee();
       e1.displayEmployee();
        break;

    
    default:
        cout<<"Enter Correct Choice"<<endl;
        break;
    }

    } while (choice!=0);
    
    return 0;

}