#include<bits/stdc++.h>

using namespace std;

class Rect{
    private:
        int nWidth;
        int nHeight;

    public:
        Rect(){};

        Rect(int w, int h){
            nWidth = w;
            nHeight = h;
        }

        void Input(){
            cout << "Nhap chieu rong, chieu dai: ";
            cin >> nWidth >> nHeight;
        }

        void Init(int w, int h){
            this->nWidth = w;
            this->nHeight = h;
        }

        int Area(){
            return nWidth * nHeight;
        }

        int IsSquare(){
            if(nWidth == nHeight) return 1;
            return 0;
        }

};

main(){
    Rect a;
    a.Input();
    int area = a.Area();
    cout << "Dien tich: " << area << "\n";
    if(a.IsSquare() == 1) cout << "Hinh vuong\n";
    else cout << "Hinh chu nhat\n";

    int n;
    cout << "Nhap n: "; cin >> n;
    Rect r[n];
    for(int i = 0; i < n; i++){
        r[i].Input();
    }
    int maxArea = INT_MIN;
    for(int i = 0; i < n; i++){
        if(r[i].IsSquare() == 1 && r[i].Area() > maxArea) maxArea = r[i].Area();
    }

    cout << "Dien tich hinh vuong lon nhat: " << maxArea;
}