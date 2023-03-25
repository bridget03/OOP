#include <iostream>

using namespace std;

class PhanSo {

                private:

                                int tu_so;

                                int mau_so;

                public:

                                PhanSo(){

                                                tu_so = 0; mau_so = 1;

                                }

                                PhanSo (int x, int y) {

                                                tu_so = x; mau_so = y;

                                }

                                void xuat() {

                                                cout << tu_so << "/" << mau_so ;

                                }

};

int main() {

                PhanSo ps1, ps2(3, 5);

                ps1.xuat(); cout <<" va " ; ps2.xuat();

}
