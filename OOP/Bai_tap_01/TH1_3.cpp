#include<bits/stdc++.h>

using namespace std;

class Date {
    private:
        int nYear;
        int nMonth;
        int nDay;
    
    public:
        Date() {};

        Date(int d, int m, int y) {
            nDay = d;
            nMonth = m;
            nYear = y;
        }

        void Input() {
            cout << "Nhap ngay (dd mm yyyy): ";
            cin >> nDay >> nMonth >> nYear;
        }

        void Init(int yy, int mm, int dd) {
            nDay = dd;
            nMonth = mm;
            nYear = yy;
        }

        int IsValid() {
            int isValidDay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

            if (nYear < 1) return 0;

            // Xử lý năm nhuận
            if ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0) {
                isValidDay[1] = 29;
            }
            if (nMonth > 12 || nMonth < 1) return 0;

            if (nDay < 1 || nDay > isValidDay[nMonth - 1]) return 0;

            return 1;
        }

        void nextDay() {
            int isValidDay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

            // Xử lý năm nhuận
            if ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0) {
                isValidDay[1] = 29;
            }

            nDay++; // Tăng ngày lên 1

            if (nDay > isValidDay[nMonth - 1]) {
                nDay = 1;   // Đặt lại ngày về 1
                nMonth++;   // Tăng tháng lên 1
                if (nMonth > 12) { 
                    nMonth = 1; // Đặt lại tháng về 1
                    nYear++;    // Tăng năm lên 1
                }
            }

            cout << "Ngay tiep theo: " << nDay << "/" << nMonth << "/" << nYear << "\n";
        }

        void Output() {
            cout << "Ngay vua nhap: " << nDay << "/" << nMonth << "/" << nYear << "\n";
        }
};

int main() {
    Date d;
    d.Input();
    if (d.IsValid() == 1) {
        d.Output();
        d.nextDay();
    } 
    else {
        cout << "Khong hop le!!!\n";
    }
    return 0;
}
