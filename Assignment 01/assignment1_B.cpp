#include <iostream>
using namespace std;

class Date{
private:
    int day;
    int month;
    int year;
public:
    void initDate()
    {
        int day=0;
        int month=0;
        int year=0;
    cout<<"the initial DATE is"<<day<<":"<<month<<":"<<year<<endl;
    
    }
    void acceptDate()
    {
        cout<<"enter the date="<<endl;
        cin>>day>>month>>year;

        
    }

    void printDate()
    {
        cout<<"the date is:-"<<day<<":"<<month<<":"<<year<<endl;

    }
    bool Leap()
    {
        if ((year%4 == 0 && year%100 !=0 )|| year%400 ==0)
       return true;
       else
       return false;


    }

};


int main()
{
    Date d1;
    int choice;
    do
    {
        cout<<"0- Exit"<<endl;
        cout<<"1- Initial Date"<<endl;
        cout<<"2- Accept and Display Date"<<endl;
        cout<<"Enter the Choice"<<endl;
        cin>>choice;
        
        switch (choice)
        {
        case 0:
            cout<<"thank you..  :)"<<endl;
            break;
        case 1:
            d1.initDate();
            break;
        case 2:
            d1.acceptDate();
            if(d1.Leap())
            cout<<"its a Leap Year"<<endl;
            else
            cout<<"its not a leap year"<<endl;
            d1.printDate();
            break;
        default:
            cout<<"please enter the Correct choice"<<endl;
            break;
        }
    } while (choice!=0);
    
    return 0;

}