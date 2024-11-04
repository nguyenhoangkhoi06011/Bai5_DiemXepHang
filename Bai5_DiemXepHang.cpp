#include <iostream>
using namespace std;
int main()
{
	cout << "CHUONG TRINH XEP HANG TU DIEM\n";
	double diem;
	cout << "Nhap diem: "; cin >> diem;
	if (diem < 5) {
		cout << "Yeu";
	}else if (diem <= 6) {
		cout << "TB";
	}else if (diem <= 8) {
		cout << "Kha";
	}else {
		cout << "Gioi"; 
	}
	return 0;
}

