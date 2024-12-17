#include<bits/stdc++.h>

using namespace std;

class Dathuc{
    private:
        int bac;
        float *a;

    public:
        Dathuc(){};

        friend istream& operator>>(istream& is, Dathuc& p){
            cout << "Nhap bac da thuc: "; is >> p.bac;
            p.a = new float[p.bac];
            for(int i = 0; i <= p.bac; i++){
                is >> p.a[i];
            }

            return is;
        }

        void Output(){
            cout << a[0] <<" + ";
            for(int i = 1; i <= bac; i++){
                if(a[i] < 0) cout << "(" << a[i] <<")";
                else cout << a[i];
                if(i == 1) cout << "*x + ";
                else if(i == bac) cout << "*x^" << i;
                else cout << "*x^" << i << " + ";
            }
        }

        friend float caculator(Dathuc& p, float x){
            float kq = p.a[0];
            for(int i = 1; i <= p.bac; i++){
                kq = kq + p.a[i]*pow(x,i);
            }

            return kq;
        }

};

main(){
    Dathuc p;
    cin >> p;
    p.Output();
    float cal = caculator(p, 2);
    cout << "\n";
    cout << "Gia tri da thuc khi x = 2: " << cal << "\n";
}