#include<bits/stdc++.h>

using namespace std;

class Nguoi{
    private:
        string hoTen;
        int tuoi;
    
    public:
        Nguoi(){}

        string getTen(){
            return hoTen;
        }

        int getTuoi(){
            return tuoi;
        }

        void nhap(){
            cin.ignore();
            cout << "Nhap ho ten: "; getline(cin, hoTen);
            cout << "Nhap tuoi: "; cin >> tuoi;
        }

        void xuat(){
            cout << "Ho ten: " << hoTen << "\n";
            cout << "Tuoi: " << tuoi << "\n";
        }
};

class Cauthu : public Nguoi{
    private:

        int sbt;
        int sptd;
        int tienThuong = 0;

    public:

        Cauthu(){
        }

        int getSBT(){
            return sbt;
        }

        int getSPTD(){
            return sptd;
        }

        

        

        void nhap(){
            Nguoi::nhap();
            cout << "Nhap so ban thang: "; cin >> sbt;
            cout << "Nhap so phut thi dau: "; cin >> sptd;

        }

        void xuat(){
            Nguoi::xuat();
            cout << "So ban thang: " << sbt << "\n";
            cout << "So phut thi dau: " << sptd << "\n";
        }

        int tinhTien(){
            if(sbt >= 1){
                tienThuong += 5 * sbt;
            }
            if(sptd > 300){
                tienThuong += 10;
            }
            return tienThuong;
        }

        int getTienThuong(){
            return tienThuong;
        }
};


main(){
    int n;
    cout << "Nhap so cau thu (n): "; cin >> n;

    Cauthu ct[n];
    cout << "Nhap thong tin cua cac cau thu:\n";
    for(int i = 0; i < n; i++){
        ct[i].nhap();
    }

    //Tim cau thu lon tuoi nhat
    int maxTuoi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(maxTuoi < ct[i].getTuoi()) maxTuoi = ct[i].getTuoi();
    }
    cout << "Cau thu lon tuoi nhat la: \n";
    for(int i = 0; i < n; i++){
        if(maxTuoi == ct[i].getTuoi()){
            ct[i].xuat();
        }
    }

    //Xac dinh tien thuong
    for(int i = 0; i < n; i++){
        ct[i].xuat();
        cout << "Tien thuong: " << ct[i].getTienThuong() << "\n";
    }

}