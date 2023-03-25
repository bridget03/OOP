#include<bits/stdc++.h>
using namespace std;

class HANG;
class TIVI;
class NSX{
	char TENNSX[20];
	char DCNSX[30];
public:
	friend class HANG;
	friend int SL(TIVI *a, int n);
};
class HANG{
protected:
	char TENH[30];
	NSX x;
	int DONGIA;
public:
	void nhap();
	void xuat();
	friend int SL(TIVI *a, int n);
};
void HANG::nhap(){
	cout << "nhap ten hang: ";		fflush(stdin);		gets(TENH);
	cout << "nhap ten NSX: ";		fflush(stdin);		gets(x.TENNSX);
	cout << "nhap dia chi NSX: ";	fflush(stdin);		gets(x.DCNSX);
	cout << "nhap gia san pham: ";	cin >> DONGIA;
}
void HANG::xuat(){
	cout << "\nten hang: " << TENH << endl;
	cout << "ten NSX: "  << x.TENNSX << endl;
	cout << "dia chi NSX: " << x.DCNSX << endl;
	cout << "gia: " << DONGIA << endl;
}
class DATE{
protected:
	int D;
	int M;
	int Y;
public:
	void nhap();
	void xuat();
};
void DATE::nhap(){
	cout << "nhap ngay: ";	cin >> D;
	cout << "nhap thang: ";	cin >> M;
	cout << "nhap nam: ";	cin >> Y;
}
void DATE::xuat(){
	cout << "ngay sx: " << D << "/" << M << "/" << Y << endl;
}
class TIVI : public HANG{
	int KICHTHUOC;
	DATE NGAYNHAP;
public:
	void input();
	void output();
	friend class DATE;
	friend int SL(TIVI *a, int n);
};
void TIVI::input(){
	HANG::nhap();
	cout << "nhap kich thuoc tivi: ";cin >> KICHTHUOC;
	NGAYNHAP.nhap();
}
void TIVI::output(){
	HANG::xuat();
	cout << "kich thuoc tv: " << KICHTHUOC << endl;
	NGAYNHAP.xuat();
}
int SL(TIVI *a, int n){
	int d = 0;
	for(int i=0; i<n; i++){
		if(strcmp(a[i].x.TENNSX,"LG") == 0){
			d++;
		}
	}
	return d;
}
int main(){
	TIVI *a;
	int n;
	cout << "***nhap so luong tv: " ; cin >> n;
	a = new TIVI[n];
	for(int i=0; i<n; i++){
		cout << "--nhap thong tin SP " << i+1 << endl;
		a[i].input();
	}
	cout << "\n***thong tin: " << endl;
	for(int i=0; i<n; i++){
		cout << "\n--thong tin SP " << i+1 << endl;
		a[i].output();
	}
	cout << "\n***co " << SL(a,n) << " tivi cua hang LG.";
}