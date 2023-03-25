#include<iostream>
using namespace std;

class MAY{
	protected:
		char MaMay[10];
		char LoaiMay[15];
		char NhanHieu[15];
		int Gia;
};
class MAYTINH : public MAY{
	private:
		char CPU[20];
		char RAM[20];
		char HDD[20];
	public:
		void input();
		void output();
};
void MAYTINH::input(){
	cout << "nhap ma may: "			;fflush(stdin);		gets(MaMay);
	cout << "nhap loai may: "		;fflush(stdin);		gets(LoaiMay);
	cout << "nhap nhan hieu: "		;fflush(stdin);		gets(NhanHieu);
	cout << "nhap gia: "			;cin >> Gia;
	cout << "nhap CPU: "			;fflush(stdin);		gets(CPU);
	cout << "nhap RAM: " 			;fflush(stdin);		gets(RAM);
	cout << "nhap HDD: "			;fflush(stdin);		gets(HDD);
}
void MAYTINH::output(){
	cout << "ma may: " << MaMay << endl;
	cout << "loai may: " << LoaiMay << endl;
	cout << "nhan hieu: " << NhanHieu << endl;
	cout << "gia: " << Gia << endl;
	cout << "CPU: " << CPU << endl;
	cout << "RAM: " << RAM << endl;
	cout << "HDD: " << HDD << endl;
}


int main(){
	MAYTINH a;
	cout << "nhap thong tin may: " << endl;
	a.input();
	cout << "\nthong tin may: " << endl;
	a.output();
}