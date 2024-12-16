#include<bits/stdc++.h>

using namespace std;

class Dathuc{
    private:
        int n;
        float *arr;
    public:
        Dathuc(){}
        Dathuc(int n1);
        Dathuc(const Dathuc& p);
        ~Dathuc(){delete arr;}

        friend istream& operator>>(istream& is, Dathuc& p){
            cout << "Nhap bac da thuc: "; is >> p.n;
            cout <<"Nhap he so da thuc: ";
            for(int i = 0; i <= p.n; i++){
                is >> p.arr[i];
            }
            return is;
        }

        friend ostream& operator<<(ostream& os, Dathuc& p){
            os <<"Da thuc: ";
            for(int i = 0; i <= p.n; i++){
                if(i == 0) os << p.arr[i] << "+ ";
                else if(i == p.n){
                    if(p.arr[i] < 0) os << "(" << p.arr[i] << ")*x^" << p.n;
                    else os << p.arr[i] << "*x^" << p.n;
                }
                else if(i == 1) os << p.arr[i] << "*x + ";
                else{
                    if(p.arr[i] < 0) os << "(" << p.arr[i] << ")*x^" << i << "+ ";
                    else if(p.arr[i] > 0) os << p.arr[i] << "*x^" << i << "+ ";
                }
            }
            return os;
        }

        Dathuc operator=(const Dathuc& p){
            n = p.n;
            arr = new float [n+1];
            for(int i = 0; i <= n; i++){
                arr[i] = p.arr[i];
            }
            return (*this);
        }
};

Dathuc::Dathuc(int n1){
    n = n1;
    arr = new float[n+1];
    cout << "Nhap da thuc: ";
        for(int i = 0; i <= n; i++){
            cin >> arr[i];
        }
}

Dathuc::Dathuc(const Dathuc& p){
    n = p.n;
    arr = new float [n+1];
    for(int i = 0; i <= n; i++){
        arr[i] = p.arr[i];
    }
}

