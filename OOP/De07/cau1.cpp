#include<bits/stdc++.h>

using namespace std;

class Sach{
    private:
        int maSach;
        string tenSach;
        string tenTgia;
        int namXB;
    public:
        Sach(){}

        void nhap(){
            cout << "Nhap ma sach: "; cin >> maSach;
            cout << "Nhap ten sach: "; cin.ignore(); getline(cin, tenSach);
            cout << "Nhap ten tac gia: "; getline(cin, tenTgia);
            cout << "Nhap nam xuat ban: "; cin >> namXB;
        }

        void xuat(){
            cout << "Ma sach: " << maSach << "\n";
            cout << "Ten sach: " << tenSach << "\n";
            cout << "Tac gia: " << tenTgia << "\n";
            cout << "Nam xuat ban: " << namXB << "\n";
        }

        string layTen(){
            return tenSach;
        }

        int layNam(){
            return namXB;
        }

       
};

main(){
    int n;
    cout << "Nhap n: "; cin >> n;
    Sach s[n];
    for(int i = 0; i < n; i++){
        s[i].nhap();
    }

    //Tim sach theo ten nhap vao tu ban phim
    string ten;
    cout << "----------------\n";
    cout << "Nhap ten sach can tim: "; cin.ignore(); getline(cin, ten);
    for(int i = 0; i < n; i++){
        if(ten == s[i].layTen()){
            s[i].xuat();
            cout << "----------------\n";
        }
    }

    cout << "Danh sach cac sach xuat ban truoc nam 2010 tro ve truoc:\n";
    for(int i = 0; i < n; i++){
        if(s[i].layNam() < 2010){
            s[i].xuat();
            cout << "-----------------\n";
        }
    }


}