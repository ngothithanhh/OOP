#include<bits/stdc++.h>

using namespace std;

//float ptb2(float a, float b, float c, float *px1, float *px2){
//	float delta = b*b - 4*a*c;
//	if(delta == 0){
//		*px1 = -b/(2*a);
//		return 1;
//	}
//	else if(delta < 0) return 0;
//	else{
//		*px1 = (-b - sqrt(delta))/(2*a);
//		*px2 = (-b + sqrt(delta))/(2*a);
//	} 
//	
//}
//main(){
//	float a, b, c, x1, x2;
//	cout <<"Nhap a, b, c: ";
//	cin >> a >> b >> c;
//	float t = ptb2(a,b,c,&x1,&x2);
//	if(t == 0) cout <<"Phuong trinh vo nghiem";
//	else if(t == 1) cout <<"Phuong trinh co 1 nghiem kep x = " << x1;
//	else cout <<"Phuong trinh co 2 nghiem phan biet x1 = " << x1 <<" x2 = " <<x2;
//}

//DUNG BIEN THAM CHIEU
//void hoanvi(float &a, float &b){
//	float t = a;
//	a = b;
//	b = t;
//	
//}

int& f(int &a){
	a++;
	return a;
}
main(){
	int i = 5;
	int &r = f(i);
	r++;
	cout << i;
}
