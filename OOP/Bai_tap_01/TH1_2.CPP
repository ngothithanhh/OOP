#include<bits/stdc++.h>

using namespace std;

class Diem{
    private:
        float hoanh_do;
        float tung_do;

    public:
        Diem(){

        };

        Diem(float x, float y){
            hoanh_do = x;
            tung_do = y;
        }

        void nhap(){
            cout << "Nhap hoanh do, tung do: ";
            cin >> hoanh_do >> tung_do;
        }

        void xuat(){
            cout << "Diem: (" << hoanh_do << ", " << tung_do << ")\n";
        }

        float kc(){
            return sqrt(pow(hoanh_do,2) + pow(tung_do,2));
        }

        float kc(Diem d){
            return (sqrt(pow(hoanh_do - d.hoanh_do, 2) + pow(tung_do - d.tung_do, 2)));
        }

        friend float kc(Diem d1, Diem d2){
            return (sqrt(pow(d1.hoanh_do - d2.hoanh_do, 2) + pow(d1.tung_do - d2.tung_do, 2)));

        }

};

main(){
    Diem d1 = Diem(2,3);
    Diem d2;
    d2.nhap();
    d1.xuat();
    d2.xuat();

    float kc1 = d1.kc();
    float kc2 = d2.kc();
    cout << "Khoang cach 1: " << kc1 << "\n";
    cout << "Khoang cach 2: " << kc2 << "\n";

    cout << "Khoang cach tu diem 1 toi diem 2: " << d1.kc(d2) << "\n";
    cout << "Khoang cach tu diem 1 toi diem 2 bang ham ban: " << kc(d1, d2) << "\n";
}