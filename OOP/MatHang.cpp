#include<bits/stdc++.h>

using namespace std;

class MatHang{
    private:
        string maHang;
        float donGia;

    public:
        MatHang(){}

        void nhap(){
            cin.ignore();
            cout << "Nhap ma hang: "; getline(cin, maHang);
            cout << "Nhap don gia: "; cin >> donGia;
        }

        void xuat(){
            cout << "Ma hang: " << maHang << "\n";
            cout << "Don gia: " << donGia << "\n";
        }


        string layMaHang(){
            return maHang;
        }

        float layDonGia(){
            return donGia;
        }
};

class HoaDon{
    private:
        string maHng;
        int sLuong;
        string ngayBan;
        float tong;
    public:
        void nhap(){
            
            cout << "Nhap ma hang: "; cin.ignore(); getline(cin, maHng);
            cout << "Nhap so luong: "; cin >> sLuong;
            cout << "Nhap ngay ban: "; cin.ignore(); getline(cin, ngayBan);
        }

        void xuat(){
            cout << "Ma hang: " << maHng << "\n";
            cout << "So luong: " << sLuong << "\n";
            cout << "Ngay ban: " << ngayBan << "\n";
        }

        int laySoLuong(){
            return sLuong;
        }

        string layNgay(){
            return ngayBan;
        }

        string layMaHng(){
            return maHng;
        }

        float tongMaHang(HoaDon& h, MatHang& m){
            if(h.layMaHng() == m.layMaHang()){
                return h.laySoLuong()*m.layDonGia();
            }
            return 0;
        }


};

main(){
    int m;
    cout << "Nhap m: "; cin >> m;
    MatHang mathang[m];
    for(int i = 0; i < m; i++){
        mathang[i].nhap();
    }

    int n;
    cout << "Nhap n: "; cin >> n;
    HoaDon hoadon[n];
    for(int i = 0; i < n; i++){
        hoadon[i].nhap();
    }

    //Dem so hoa don co so luong lon hon 10
    int d = 0;
    for(int i = 0; i < n; i++){
        if(hoadon[i].laySoLuong() > 10) d++;
    }
    cout << "So hoa don co so luong lon hon 10: " << d << "\n";

    string ngay;
    cout << "Nhap ngay ban de tim so tien tinh duoc: ";  getline(cin, ngay);
    float tongNgay = 0;
    for(int i = 0; i < n; i++){
        if(ngay == hoadon[i].layNgay()){
            for(int j = 0; j < m; j++){
                if(hoadon[i].layMaHng() == mathang[j].layMaHang()){
                    tongNgay += hoadon[i].laySoLuong()*mathang[j].layDonGia();
                    break;
                }
            }
        }
    }
    cout << "So tien ban duoc cua ngay " << ngay << " la: " << tongNgay << "\n";

}