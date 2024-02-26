#include <iostream>
using namespace std;
int tinhtong(int so1, int so2) {
	return so1 + so2;
}
int tinhhieu(int so1, int so2) {
	return so1 - so2;
}
int tinhtich(int so1, int so2) {
	return so1 * so2;
}
int tinhthuong(int so1, int so2) {
	return (float) so1 / so2;
}
int main() {
	int so1, so2;
	float ketqua;
	cout << "chuong trinh tinh cac phep tinh co ban\n";
	cout << "nhap so thu nhat:";
	cin >> so1;
	cout << "nhap so thu hai:";
	cin >> so2;
	ketqua = tinhtong(so1, so2);
	cout << so1 << "+" << so2 << "=" << ketqua << endl;
	ketqua = tinhhieu(so1, so2);
	cout << so1 << "-" << so2 << "=" << ketqua << endl;
	ketqua = tinhtich(so1, so2);
	cout << so1 << "*" << so2 << "=" << ketqua << endl;
	ketqua = tinhthuong(so1, so2);
	cout << so1 << "/" << so2 << "=" << ketqua << endl;
	if(so2!=0){
		ketqua= (float)so1 / so2;
   }else {
		cout << "khong the chia" << so1 << "cho 0\n";
	}
	return 0;
}