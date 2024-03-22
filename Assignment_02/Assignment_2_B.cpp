# include <iostream>
using namespace std;

class toolboot
{
    private :
    unsigned int no_cars;
    double money_colle;

    public :

    toolboot()
    {
        // default values
        no_cars=0;
        money_colle=0;
    }
    void payCar()
    {

        no_cars++;// total no of cars pay
        money_colle = money_colle+ 0.5;//money paid
        
    }
    void no_pay()
    {
        no_cars++;

    }

    void display()
    {
        cout<<"the No.cars ="<<no_cars<<endl;
        cout<<"the money Collected ="<<money_colle<<endl;
        cout<<"the No.of Cars who paid="<<money_colle/0.5<<endl;
        cout<<"the No.of Cars who not paid="<<no_cars-(money_colle/0.5)<<endl;

    }


};

int main()
{
    toolboot d1;
    d1.payCar();
    d1.payCar();
    d1.display();
    d1.no_pay();
    d1.no_pay();
    d1.display();


    return 0;
}