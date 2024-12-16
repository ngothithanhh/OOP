#include<bits/stdc++.h>

using namespace std;

class Diem{
    private:
        double hoanh_do, tung_do;
    public:
        void nhap();
        void xuat();
        double kc();
        double kc(Diem d);
        friend double kc(Diem d1, Diem d2);
};

void Diem::nhap(){
    cout <<"Nhap diem co hoanh do va tung do: ";
    cin >> hoanh_do >> tung_do;
}

void Diem::xuat(){
    cout <<"(" << hoanh_do <<", " << tung_do <<")" << "\n";
}

double Diem::kc(){
    
    return sqrt(pow(this->hoanh_do, 2) + pow(this->tung_do, 2));
}

double Diem::kc(Diem d){
    return sqrt(pow(hoanh_do - d.hoanh_do, 2) + pow(tung_do - d.tung_do, 2));
}

//Ham ban khong phai thanh phan cua lop, dung de xu li cac doi tuong cua cac lop khac nhau

double kc(Diem d1, Diem d2){
    return(sqrt(pow(d1.hoanh_do - d2.hoanh_do, 2) + pow(d1.tung_do - d2.tung_do, 2)));
}

main(){
    Diem d1, d2;
    d1.nhap();
    d2.nhap();
    d1.xuat();
    d2.xuat();
    cout <<"Khoang cach cua d1 toi goc toa do: " << d1.kc() << "\n";
    cout <<"Khoang cach cua d2 toi goc toa do: " <<d2.kc() << "\n";
    cout <<"Khoang cach giua 2 diem d1 va d2 la: " <<d1.kc(d2) <<"\n";
    cout <<"Khoang cach giua 2 diem d1 va d2 la: " <<kc(d1,d2);

}