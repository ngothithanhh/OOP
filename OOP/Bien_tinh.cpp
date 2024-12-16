#include<bits/stdc++.h>

using namespace std;

class Dummy{
    public:
        static int n;
        Dummy(){n++;};
        ~Dummy(){n--;};
};

int Dummy::n = 0;
main(){
    Dummy a, b[5];
    Dummy * c = new Dummy;
    cout << a.n << "\n";
    delete c;