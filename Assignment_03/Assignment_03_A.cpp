#include<iostream>
using namespace std;

class Cylinder{
    private:
        double radius;
        double height;
        double volume;
        static const double pi;
        

    public:
        Cylinder():Cylinder(radius, height)
        {
            radius = 8;
            height = 10;   
        }

        Cylinder(double radius, double height){
            this->radius = radius;
            this->height = height;
        }
        
        void setRadius(double radius){
            this->radius = radius;
        }

        double getRadius(){
            return radius;
        }

        void setHeight(double height){
            this->height = height;
        }
    
        double getHeight(){
            return height;
        }
    
        void printVolume(){
            volume = pi*radius*radius*height;
            cout<<"The volume of the Cylinder is: "<<volume<<endl;
        }

};

const double Cylinder::pi = 3.14;

int main(){

    Cylinder c1;
    Cylinder c2(5,5);
    c1.printVolume();
    c2.printVolume();
    c1.setRadius(2);
    c2.setHeight(7);
    cout<<"Radius of c1 Cylinder is set to : "<<c1.getRadius()<<endl;
    cout<<"Height of c2 Cylinder is set to : "<<c2.getHeight()<<endl;
    c1.printVolume();
    c2.printVolume();


}