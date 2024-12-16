#include<bits/stdc++.h>

using namespace std;

class PS{
    private:
        int ts, ms;
    public:
        void nhap();
        void xuat();
        PS operator*(PS p);
        PS operator+(PS p);
        // friend PS operator+(PS p1, PS p2);
        // friend PS operator*(PS p1, PS p2);

        //Vao / ra

        friend istream& operator>> (istream& is, PS &p);
        friend ostream& operator<< (ostream& os, PS &p);

};

void PS::nhap(){
    cout <<"Nhap phan so: ";
    cin >> ts >> ms;
}

void PS::xuat(){
    cout << ts << "/" << ms << "\n";
}

PS PS::operator*(PS p){
    PS kq;
    kq.ts = ts * p.ts;
    kq.ms = ms * p.ms;
    return kq;
}

PS PS::operator+(PS p){
    PS kq;
    if(ms == p.ms){
        kq.ts = ts + p.ts;
    }
    else{
        kq.ts = ts * p.ms + p.ts * ms;
        kq.ms = ms * p.ms;
    }
    return kq;
}

//Dung ham ban

//Vao ra 
istream& operator>>(istream& is, PS &p){
    is >> p.ts >> p.ms;
    return is;


}
ostream& operator<<(ostream& os, PS &p){
    os << p.ts << "/" << p.ms << "\n";
    return os;

}



main(){
    PS p1, p2, kq, kq2;
    // p1.nhap();
    // p2.nhap();
    cin >> p1;
    cout << p1;
    cin >> p2;
    cout << p2;

    kq = p1 + p2;
    kq2 = p1 * p2;
    cout <<"Tong 2 phan so: ";
    kq.xuat();
    cout <<"Tich hai phan so: ";
    kq2.xuat(); 

}

