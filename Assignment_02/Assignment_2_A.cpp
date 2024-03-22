#include <iostream>
using namespace std;
 
class Volume
{
  private:
    int length;
    int width;
    int height;

 public:
    Volume()   // parameterless constructor
    {
        this->length=2;
        this->width=2;
        this->height=4;
        
    }

    Volume(int a,int b,int c)
    {
        this->length=a;
        this->height=c;
        this->width=b;

        
    }
    Volume(int a)
    {
        this->length=a;
        this->height=a;
        this->width=a;
       
        
    }

    void displayVolume()
    {
        int a=length*width*height;
        cout<<"the volume is :" <<a<<endl;

    }

    
};



int main()
{  
    Volume v1; // parameterless constructor call // Calculate Default values
    Volume v2(10,20,30); // parameterised const call // different values
    Volume v3(2);// single parameter const call


    int choice;
    do
    {
        cout<<"0 - EXIT"<<endl;
        cout<<"1 - Display delfault Volume "<<endl;
        cout<<"2 - Enter Values to Calculate Volume with Diferent values "<<endl;
        cout<<"3 - Single Value volume"<<endl;
        cout<<"enter Choice:"<<endl;
        cin>>choice;

       switch (choice)
       {
       case 0:
            cout<<"Thank you....................."<<endl;
        break;
        case 1:
              // parameterless constructor call // Calculate Default values
             v1.displayVolume();
        break;
         case 2:
              // parameterised const call // different values
             v2.displayVolume();
        break;
        
        case 3:
             // single parameter const call
             v3.displayVolume();
        break;

       default:
            cout<<"Please Enter the Correct Choice"<<endl;
        break;
       }
    } while (choice !=0);
    
    
    
    return 0;

}
