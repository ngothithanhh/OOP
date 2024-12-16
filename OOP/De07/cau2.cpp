#include<bits/stdc++.h>

using namespace std;

class Nguoi{
    private:
        string hTen;
        int tuoi;
    public:

        Nguoi(){}

        void nhap(){
            cout << "Nhap ho ten: "; cin.ignore(); getline(cin, hTen);
            cout << "Nhap tuoi: "; cin >> tuoi;
        }

        void xuat(){
            cout << "Ho va ten: " << hTen << "\n";
            cout << "Tuoi: " << tuoi << "\n";
        }

        string layHoTen(){
            return hTen;
        }

        int layTuoi(){
            return tuoi;
        }
};

class Nhanvien:public Nguoi{
    private:
        float hs;
        int loai;
        float tienluong;

    public:
        Nhanvien(){}

        void nhap(){
            Nguoi::nhap();
            cout << "Nhap he so luong: "; cin >> hs;
            if(hs == 1) loai = 3000;
            else if(hs == 2) loai = 2000;
            else if(hs == 3) loai = 1000;
        }

        void xuat(){
            Nguoi::xuat();
        }

        void tinhLuong(float lcb){
            tienluong = lcb*hs + loai;
        }

        float laytienluong(){
            return tienluong;
        }
};

main(){
    int n;
    cout << "Nhap so nhan vien: "; cin >> n;
    Nhanvien nv[n];
    for(int i = 0; i < n; i++){
        nv[i].nhap();
    }

    float lcb;
    cout << "Nhap luong co ban cho nhan vien: "; cin >> lcb;
    //Tinh tien luong
    for(int i = 0; i < n; i++){
        nv[i].tinhLuong(lcb);
    }

    //Tim nhan vien co luong cao nhat:
    float maxLuong() = nv[0].laytienluong();
    for(int i = 0; i < n; i++)

}