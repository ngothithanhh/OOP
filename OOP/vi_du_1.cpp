#include<bits/stdc++.h>

using namespace std;

class PS
{
private:
    int ts, ms;
public:
    PS nhan(PS p1, PS p2){
        PS t;
        t.ts = p1.ts * p2.ts;
        t.ms = p1.ms * p2.ms;
        return t;
    }
    void nhap(){
        cin >> ts >> ms;
    }
    void xuat(){
        cout << ts <<"/" << ms <<"\n";
    }
    void nhan(PS p);
};

void PS::nhan(PS p){
    ts = ts * p.ts;
    ms = ms * p.ms;
}

main(){
    PS p1, p2;
    p1.nhap(); p2.nhap();
    // PS t = t.nhan(p1,p2);
    // t.xuat();
    p1.nhan(p2);
    p1.xuat();

}