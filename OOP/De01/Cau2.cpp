#include<bits/stdc++.h>

using namespace std;

class Nguoi{
    private:
        string hoTen;
        int ID;
        float chieu_cao;
        float can_nang;
        int namSinh;
        string gTinh;
    
    public:
        Nguoi(){};

        void Input(){
            cin.ignore();
            cout << "Nhap ho ten: "; getline(cin, hoTen);
            cout << "Nhap ID: "; cin >> ID;
            cout << "Nhap chieu cao: "; cin >> chieu_cao;
            cout << "Nhap can nang: "; cin >> can_nang;
            cout << "Nhap nam sinh: "; cin >> namSinh;
            cin.ignore();
            cout << "Nhap gioi tinh: "; getline(cin, gTinh);
        }

        void Output(){
            cout << "Ho ten: " << hoTen << "\n";
            cout << "Ma so: " << ID << "\n";
            cout << "Chieu cao: " << chieu_cao << "\n";
            cout << "Can nang: " << can_nang << "\n";
            cout << "Nam sinh: " << namSinh << "\n";
            cout << "Gioi tinh: " << gTinh << "\n";
        }

        float getChieuCao(){
            return chieu_cao;
        }

        int getTuoi(){
            return 2024-namSinh;
        }

        string getGioiTinh(){
            return gTinh;
        }


};

class SinhVien: public Nguoi{
    private:
        float tgHoc;
        int diemA;
    
    public:
        void Input(){
            Nguoi::Input();
            cout << "Nhap thoi gian hoc: "; cin >> tgHoc;
            cout << "Nhap so lan dat diem A: "; cin >> diemA;
        }

        void Output(){
            Nguoi::Output();
            cout << "Thoi gian tham gia hoc: " << tgHoc << "\n";
            cout << "So lan dat diem A: " << diemA << "\n";
            cout <<"\n";
        }

        float getTGHoc(){
            return tgHoc;
        }

        int getDiemA(){
            return diemA;
        }

};

main(){
    int n;
    cout << "Nhap so sinh vien tham gia lop hoc: "; cin >> n;
    SinhVien sv[n];
    for(int i = 0; i < n; i++){
        sv[i].Input();
    }

    cout << "Nhung thanh vien co chieu cao cao hon 150cm va nho tuoi nhat:\n";
    int minTuoi = sv[0].getTuoi();
    for(int i = 1; i < n; i++){
        if((sv[i].getChieuCao() > 150 && sv[i].getTuoi() < minTuoi) || sv[i].getChieuCao() > 150){
            minTuoi = sv[i].getTuoi();
        }

    }
    for(int i = 1; i < n; i++){
        if((sv[i].getChieuCao() > 150 && sv[i].getTuoi() == minTuoi)){
            sv[i].Output();
        }

    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(sv[i].getTGHoc() > sv[j].getTGHoc()){
                swap(sv[i], sv[j]);
            }
        }
    }


    cout <<"Nhung hoc vien nu co diem A nhieu nhat: \n";
    int maxDiemA = INT_MIN;
    for(int i = 0; i < n; i++){
        if(sv[i].getGioiTinh() == "Nu" && maxDiemA < sv[i].getDiemA()) maxDiemA = sv[i].getDiemA();
    }

    for(int i = 0; i < n; i++){
        if(sv[i].getGioiTinh() == "Nu" && maxDiemA == sv[i].getDiemA()){
            sv[i].Output();
        }
    }





}