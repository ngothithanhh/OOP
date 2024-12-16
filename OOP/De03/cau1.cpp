#include<bits/stdc++.h>

using namespace std;

class Ds_nguyen{
    private:
        int n;
        int *arr;
    public:
        Ds_nguyen(){
            this->n = 0;
            arr = new int[1];
        }

        friend istream& operator>>(istream& is, Ds_nguyen& p){
            cout << "Nhap so phan tu: "; is >> p.n;
            cout << "Nhap cac phan tu: ";
            for(int i = 0; i < p.n; i++){
                is >> p.arr[i];
            }

            return is;
        }

        float trungBinh(){
            int tong = 0;
            int d = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] > 0){
                    tong+=arr[i];
                    d++;
                }
            }
            if(d==0){
                return 0;
            }
            else{
            	float tb = (float) tong/d;
                return tb ;
            }
        }

        int demSoCP(){
            int d = 0;
            for(int i = 0; i < n; i++){
                int x = sqrt(arr[i]);
                if(x*x == arr[i]){
                    d++;
                }
            }
            return d;
        }
};
main(){

    Ds_nguyen p;
    cin >> p;
    float tb = p.trungBinh();
    if(tb == 0){
        cout << "Day khong co phan tu mang gia tri duong\n";
    }
    else{
        cout << "Trung binh cong cac phan tu duong cua day: " << tb << "\n";
    }
    int dem = p.demSoCP();
    if(dem == 0){
        cout << "Day khong co phan tu la so chinh phuong\n";
    }
    else{
        cout << "Day co " << dem << " phan tu la so chinh phuong\n";
    }

}
