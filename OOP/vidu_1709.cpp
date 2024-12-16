#include<bits/stdc++.h>

using namespace std;

class Diem{
    private:
        int x, y;
    public:
        Diem(){};
        Diem(int x1, int y1){
            this->x = x1;
            this->y = y1;
        }

        Diem(Diem &d){
            x = d.x;
            y = d.y;
        }

        float kc(Diem& d){
            return (float)sqrt(pow(x - d.x, 2) + pow(y - d.y, 2));
        }

        bool operator== (const Diem& d){
            return (x == d.x && y == d.y);
        }

        Diem operator*(Diem d){
            Diem kq;
            kq.x = x * d.x;
            kq.y = y * d.y;
            return kq;
        }

        friend istream& operator>>(istream& is, Diem& d){
            cout << "Nhap tung do va hoanh do: ";
            is >> d.x >> d.y;
            return is;
        }

        friend ostream& operator<<(ostream& os, Diem& d){
            os <<"Diem co toa do: (" << d.x << "," << d.y << ")";
            return os;
        }

};

main(){
    Diem d1;
    cin >> d1;
    Diem d2 = Diem(3.0, 1.2);
    if(d1 == d2){
        cout << "Hai toa do trung nhau \n";
    }
    else{
        cout << "Hai toa do khong trung nhau \n";
    }
    cout << "Khoang cach giua 2 toa do: " << d1.kc(d2) <<"\n";
    Diem d3 = d1 * d2;
    cout << "Tich cua 2 toa do: " << d3 << "\n";


}