
#include<bits/stdc++.h>

using namespace std;

class Hang{
    private:
        int maHang;
        string tenHang;
        int sluong;
        float donGia;
    public:
        Hang(){}

        void nhap(){
            cout << "Nhap ma hang: "; cin >> maHang;
            cout << "Nhap ten hang: "; cin.ignore(); getline(cin, tenHang);
            cout << "Nhap so luong: "; cin >> sluong;
            cout << "Nhap don gia: "; cin >> donGia;
        }

        void xuat(){
            cout << "\tMa hang: " << maHang << "\n";
            cout << "\tTen hang: " << tenHang << "\n";
            cout << "\tSo luong: " << sluong << "\n";
            cout << "\tDon gia: " << donGia << "\n";
        }

        float getDonGia(){
            return donGia;
        }

        int getSoLuong(){
            return sluong;
        }

};

class Maytinh : public Hang{
    private:
        string hdh;
        float trongLuong;
        float gia;
    public:

        float getGia(){
            return gia;
        }
        void nhap(){
            Hang::nhap();
            cout << "Nhap he dieu hanh: "; cin.ignore(); getline(cin, hdh);
            cout << "Nhap trong luong: "; cin >> trongLuong;
            gia = this->getSoLuong() * this->getDonGia();
        }

        void xuat(){
            Hang::xuat();
            cout << "\tHe dieu hanh: " << hdh << "\n";
            cout << "\tTrong luong: " << trongLuong << "\n";
            cout << "\tGia: " << gia << "\n";
        }

        string getHDH(){
            return hdh;
        }

        float getTLuong(){
            return trongLuong;
        }

        // void dsMayWin(int n, Maytinh *arr){
            
        // }

//         void timMacMin(int n){

//         }
};


main(){
    int n;
    cout << "Nhap n: "; cin >> n;
    Maytinh arr[n];
    for(int i = 0; i < n ; i++){
        arr[i].nhap();
    }

    for(int i = 0; i < n ; i++){
        arr[i].xuat();
    }

    cout << "May Win co trong luong khong qua 2.5kg la: \n";
    for(int i = 0; i < n; i++){
        if(arr[i].getHDH() == "Win" && arr[i].getTLuong() <= 2.5){
            arr[i].xuat();
            cout << "\n";
        }
    }

    cout << "May Mac re nhat: \n";
    float minGia = arr[0].getDonGia();
    for(int i = 0; i < n; i++){
        if(minGia > arr[i].getDonGia()) minGia = arr[i].getDonGia();
    }

    for(int i = 0; i < n; i++){
        if(minGia == arr[i].getDonGia()){
             arr[i].xuat();
             cout << "\n";

        }
    }








}
