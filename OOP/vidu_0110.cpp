#include<bits/stdc++.h>

using namespace std;

class Shape{
    private:
        float width, lenght;
    public:
        Shape(){};
        void set_data(float w, float l){
            this->width = w;
            this->lenght = l;
        }
        float getw(){
            return width;

        }

        float getl(){
            return lenght;

        }  

        Shape(float w, float l){
            width = w;
            lenght = l;
        }    

};

class Triangle : public Shape{
    public:
        float area(){
            return ((*this).getw() * (*this).getl() / 2);

        }

        
};

class Rectangle:  Shape{
    public:
        Rectangle(): Shape(){}
        Rectangle(float w, float l): Shape(w,l){}
        float area(){
            return ((*this).getw() *(*this).getl());
        }
};

main(){
    Rectangle rect;
    Triangle tri;
    rect.set_data(5, 3);
    tri.set_data(2,5);
    cout << rect.area() <<"\n";

    cout << tri.area() <<"\n";
}

