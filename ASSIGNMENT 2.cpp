#include<iostream>
using namespace std;

class NGUOI;
class SINHVIEN : public NGUOI{
protected:
	char MaSV[10];
	char Nganh[20];
	int KhoaHoc;
public:
	void Nhap();
	void Xuat();
	friend class LOPHOC;
};
void SINHVIEN::Nhap(){
	cout << "nhap ma sinh vien: "		;fflush(stdin)		;gets(MaSV);
	NGUOI.Nhap();
	cout << "nhap nganh: "				;fflush(stdin)		;gets(Nganh);
	cout << "nhap khoa: "	;	cin >> KhoaHoc;
}
void SINHVIEN::Xuat(){
	cout << "Ma SV: " << MaSV << endl;
	NGUOI.Xuat();
	cout << "nganh hoc: " << Nganh << endl;
	cout << "khoa: " << KhoaHoc << endl;
}
class LOPHOC{
	char MaLH[15];
	char TenLH[20];
	char NgayMo[10];
	SINHVIEN *x;
	int n;
	char GiaoVien[30];
public:
	void Nhap();
	void Xuat();
};
void LOPHOC::Nhap(){
	cout << "nhap ma lop hoc: "		;fflush(stdin)		;gets(MaLH);
	cout << "nhap ten lop hoc: "	;fflush(stdin)		;gets(TenLH);
	cout << "nhap ngay mo: "		;fflush(stdin)		;gets(NgayMo);
	cout << "nhap so sinh vien: "; cin >> n;
	x = new SINHVIEN[n];
	for(int i=0; i<n; i++){
		x.i.Nhap();
	}
	cout << "nhap ten giao vien: "	;fflush(stdin)		;gets(GiaoVien);
}
void LOPHOC::Xuat(){
	cout << "Ma lop: " << MaLH << endl;
	cout << "Ten lop" << TenLH << endl;
	cout << "Ngay mo: " << NgayMo << endl;
	for(int i=0; i<n; i++){
		x.i.Xuat();
	}
	cout << "Giao vien: " << GiaoVien << endl;
}

class NGUOI{
	char HoTen[25];
	char NgaySinh[10];
	char Que[20];
public:
	void Nhap();
	void Xuat();
};
void NGUOI::Nhap(){
	cout << "nhap ten sinh vien: "		;fflush(stdin)		;gets(HoTen);
	cout << "nhap ngay sinh: "			;fflush(stdin)		;gets(NgaySinh);
	cout << "nhap que sinh vien: "		;fflush(stdin)		;gets(Que);
}
void NGUOI::Xuat(){
	cout << "Ten sv" << HoTen << endl;
	cout << "ngay sinh: " << NgaySinh << endl;
	cout << "que: " << Que << endl;
}

int main(){
	LOPHOC a;
	a.Nhap();
	a.Xuat();
}