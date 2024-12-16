#include<bits/stdc++.h>

using namespace std;

class SP{
    private:
        float thuc, ao;
    public:
        SP(){}

        SP(float t, float a){
            this->thuc = t;
            this->ao = a;
        }

        SP operator!(SP& p){
            SP s;
            s.thuc = p.thuc*p.thuc;
            s.ao = p.ao * p.ao;
            return s;  
        }


        friend istream& operator>>(istream& is, SP& p){
            cout << "Nhap phan thuc: "; is >> p.thuc;
            cout << "Nhap phan ao: "; is >> p.ao;
            return is;
        }

        friend ostream& operator<<(ostream& os, SP& p){
            os << p.thuc << " + ";
            if(p.ao < 0){
                os << "(" << p.ao << ")\n";
            }
            else os << p.ao << "i\n";
            return os;
        }


};

main(){
    SP p1, p2;
    cin >> p1 >> p2;

    float s = !p1 + !p2;
    cout << p1 << p2;
    cout << s;





}