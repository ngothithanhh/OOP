#include <bits/stdc++.h>

using namespace std;

class Diem{
private:
    float x,y;
public:
    void nhap(){
        cout <<"Nhap hoanh do: "; cin >> x;
        cout <<"Nhap tung do: "; cin >> y;
    }
    void xuat(){
        cout <<"Diem (" << x << ", " << y << ")" <<"\n";
    }
    float khoangCach(Diem d);
};

float Diem::khoangCach(Diem d){
    return sqrt(pow(x - d.x, 2) + pow(y - d.y, 2));

}

main(){
    Diem d1, d2;
    d1.nhap(); d2.nhap();
    d1.xuat(); d2.xuat();

    float a = d1.khoangCach(d2);
    cout <<"Khoang cach giua 2 diem d1 va d2 la: " << a;
}
