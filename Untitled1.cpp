#include<iostream>
using namespace std;

class HCN { 
		float D, R;
	public:
		void Nhap();
		void Ve();
		float DT();
		HCN();
		HCN(float x, float y);
};
HCN::HCN(float x, float y){
	D = x;
	R = y;
}
HCN::HCN(){
	D = 3;
	R = 2;
}
void HCN::Nhap(){
	cout << "D = "; 
	cin >> D;
	cout << "R = ";
	cin >> R;
}
void HCN::Ve(){
	cout << "D= " << D << "; R= " << R << endl;
	for(int i=0; i<D; i++){
		for(int j=0; j<R; j++){
			cout << "* ";
		}
		cout <<endl;
	}
	cout << endl;
}
float HCN::DT(){
	return D*R;
}

int main(){
	HCN a(6,2);
//	a.Nhap();
	a.Ve();
	cout << "DT HCN = " << a.DT() << endl;
}