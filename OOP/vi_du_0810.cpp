#include<bits/stdc++.h>

using namespace std;

class CTY{
    private:
        string ten;
        int ntl;
    public:
        CTY(){}

        string getTen(){
            return ten;
        }

        int getNamTL(){
            return ntl;
        }

        void input(){
            cin.ignore();
            cout <<"Nhap ten cong ty:";
            getline(cin, ten);
            cout <<"Nam thanh lap cong ty:";
            cin >> ntl;
        }

        void output(){
            cout <<"Ten cong ty: " << ten <<"\n";
            cout <<"Nam thanh lap cong ty: " << ntl <<"\n";
        }

};

class CTYPM : public CTY{
    private:
        int sltv;
    public:
    CTYPM(){}

    int getSLTV(){
        return sltv;
    }

    void input(){
        CTY::input();
        cout <<"So lap trinh vien: ";
        cin >> sltv;

    }

    void output(){
        CTY::output();
        cout << "So lap trinh vien: " << sltv <<"\n";
    }


        

};

class CTYVT : public CTY{
    private:
        int soto;
    public:

        CTYVT(){

        }

        int getSOTO(){
            return soto;
        }

        void input(){
            CTY::input();
            cout <<"So o to: ";
            cin >> soto;
        }

        void output(){
            CTY::output();
            cout << "So o to: " << soto <<"\n";
        }
};

main(){
    int n, m;
    cout <<"Nhap so cong ty phan mem: "; cin >> n;
    cout <<"Nhap so cong ty van tai: "; cin >> m;

    CTYPM pm[n];
    CTYVT vt[m];

    cout <<"Nhap thong tin cong ty phan mem:\n";
    for(int i = 0; i < n; i++){
        pm[i].input();
    }

    cout <<"Nhap thong tin cong ty van tai:\n";
    for(int i = 0; i < m; i++){
        vt[i].input();
    }

    int check = 0;
    cout << "Cac cong ty phan mem thanh lap sau nam 2000 va co tren 20 lap trinh vien:\n";
    for(int i = 0; i < n; i++){
        if(pm[i].getNamTL() > 2000 && pm[i].getSLTV() > 20){
            pm[i].output();
            check++;
        }
    }
    if(check == 0){
        cout << "Khong co \n";
    }

    cout <<"Cac cong ty van tai thanh lap truoc nam 2000 va khong co qua 10 o to:\n";
    check = 0;
    for(int i = 0; i < m; i++){
        if(vt[i].getNamTL() < 2000 && vt[i].getSOTO() <= 10){
            vt[i].output();
            check++;
        }
    }
    if(check == 0){
        cout << "Khong co \n";
    }

}