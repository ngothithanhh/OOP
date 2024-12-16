// #include<bits/stdc++.h>
// using namespace std;

// template <typename T>
// void sapXep(T *a, int n){
//     for(int i = 0; i < n - 1; i++){
//         for(int j = i + 1; j < n; j++){
//             if(a[i] > a[j]){
//                 T tmp = a[i];
//                 a[i] = a[j];
//                 a[j] = tmp;
//             }
//         }
//     }
// }

// main(){
//     float a[4] = {5.2, 8, 9, -8.87};
//     sapXep(a, 4);
//     for(int i = 0; i < 4; i++){
//         cout << a[i] << " ";
//     }

// }

#include<bits/stdc++.h>

using namespace std;

template <class T>
class Stack{
    private:
        T data[100];
        int top = 0;
    public:
        void push(T value){
            data[++top] = value;
        }
        T pop(){
            return data[top--];
        }
};

main(){
    Stack<int> intStack;
    
}