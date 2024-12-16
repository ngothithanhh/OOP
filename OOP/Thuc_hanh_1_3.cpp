#include<bits/stdc++.h>

using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(){
            day = month = year = 1;
        }
        Date(int d, int m, int y){
            this->day = d;
            this->month = m;
            this->year = y;
        }
        Date(int d){
            this->day = d;
        }

        void inputDay(){
            cout << "Nhap ngay: ";
            cin >> day;
        }
        void input(){
            cout << "Nhap ngay thang nam: ";
            cin >> day >> month >> year;
        }
        bool isValid(int )

};
main(){

}