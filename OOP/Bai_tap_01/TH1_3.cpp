#include<bits/stdc++.h>

using namespace std;

class Date{
    private:
        int nYear;
        int nMonth;
        int nDay;
    
    public:
        Date(){};

        Date(int d, int m, int y){
            nDay = d;
            nMonth = m;
            nYear = y;
        }

        void Input(){
            cout << "Nhap ngay: ";
            cin >> nDay >> nMonth >> nYear;
        }

        void Init(int yy, int mm, int dd){
            nDay = dd;
            nMonth = mm;
            nYear = yy;
        }

        int IsValid(){
            int 
            if(nMonth > 12 || nMonth < 1) return 0;
            else if(nMonth == 2){

            }
            else if(nMonth)
        }


}