#include<bits/stdc++.h>

using namespace std;

class DaThuc{
    private:
        int n;
        float *arr;
    
    public:
        DaThuc(){
            n = 0;
            arr = new float[1];
        }

        friend istream& operator>>(istream& is, DaThuc &p){
            cout << "Nhap bac da thuc: "; is >> p.n;
            cout << "Nhap he so: ";
            p.arr = new float[p.n];
            for(int i = 0; i <= p.n; i++){
                is >> p.arr[i];
            }
            return is;
        }

        friend ostream& operator<<(ostream& os, DaThuc& p){
            os << "Da thuc: ";
            for(int i = 0; i <= p.n; i++){
                if(p.arr[i] < 0){
                    if(i == 0 ){
                        os << "(" << p.arr[i] << ") + ";
                    }
                    else if(i == 1){
                        os << "(" << p.arr[i] << ")x + ";
                    }
                    else if(i == p.n){
                        os << "(" << p.arr[i] << ")x^" << i << "\n";
                    }
                }
                else{
                    if(i == 0 ){
                        os << p.arr[i] << " + ";
                    }
                    else if(i == 1){
                        os << p.arr[i] << "x + ";
                    }
                    else if(i == p.n){
                        os << p.arr[i] << "x^" << i << "\n";
                    }
                }
            }
            return os;
        }

        DaThuc operator+(DaThuc& q){
            DaThuc kq;
            kq.n = n;
            for(int i = 0; i <= kq.n; i++){
                kq.arr[i] = arr[i] + q.arr[i];
            }
            return kq;
        }
};

main(){
    DaThuc p, q;
    cout << "Nhap hai da thuc cung bac n\n";
    cout << "Nhap da thuc P(x)\n"; cin >> p;
    cout << "Nhap da thuc Q(x)\n"; cin >> q;
    cout << p;
    cout << q;

    DaThuc t;
    t = p + q;
    cout << "Tong he so cua da thuc P(x)+Q(x) ";
    cout << t;
}