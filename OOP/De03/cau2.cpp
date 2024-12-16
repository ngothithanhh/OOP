#include<bits/stdc++.h>

using namespace std;

class Mon_hoc{
    private:
        int maMon;
        string tenMon;
        int soTC;
    public:
        Mon_hoc(){}
        void nhap(){
            cout << "Nhap ma mon hoc: "; cin >> maMon;
            cout << "Nhap ten mon hoc: "; cin.ignore(); getline(cin, tenMon);
            cout << "Nhap so tin chi: "; cin >> soTC;
        }
        
        void xuat(){
            cout << "Ma mon hoc: " << maMon << "\n";
            cout << "Ten mon hoc: " << tenMon << "\n";
            cout << "So tin chi: " << soTC << "\n";
        }

        int getMaMon(){
            return maMon;
        }

        string getTenMon(){
            return tenMon;
        }

        int getSoTC(){
            return soTC;
        }
};

class DKHP:public Mon_hoc{
    private:
        int maSV;
        string tenSV;
        int soMonHoc;
        Mon_hoc *mh;
    
    public:
        DKHP(){}

        void nhap(){
            cout << "Nhap ma sinh vien: "; cin >> maSV;
            cin.ignore();
            cout << "Nhap ten sinh vien: "; getline(cin, tenSV);
            cout << "Nhap so mon hoc dang ki: "; cin >> soMonHoc;
            mh = new Mon_hoc[soMonHoc];
            for(int i = 0; i < soMonHoc; i++){
                mh[i].nhap();
            }
        }

        void xuat(){
            cout << "Ma sinh vien: " << maSV << "\n";
            cout << "Ten sinh vien: " << tenSV << "\n";
            cout << "Mon hoc dang ki: \n";
            for(int i = 0; i < soMonHoc; i++){
                mh[i].xuat();
            }
        }
};

main(){
    int m;
    cout << "Nhap so mon hoc cho truoc: "; cin >> m;
    Mon_hoc monhoc[m];
    for(int i = 0; i < m; i++){
        monhoc[i].nhap();
    }
    int n;
    cout << "Nhap so sinh vien: "; cin >> n;
    DKHP *sv;
    for(int i = 0; i < n; i++){
        sv[i].nhap();
    }


}