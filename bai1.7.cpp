#include <iostream>
using namespace std;

struct NgayThangNam {
	int ngay;
	int thang;
	int nam;
};
void nhapNgayThangNam(NgayThangNam& ntn) {
	cout << "Nhap ngay: ";
	cin >> ntn.ngay;
	cout << "Nhap thang: ";
	cin >> ntn.thang;
	cout << "Nhap nam: ";
	cin >> ntn.nam;
}

void xuatNgayThangNam(NgayThangNam ntn) {
	cout << ntn.ngay << "/" << ntn.thang << "/" << ntn.nam << endl;
}
int main() {
	NgayThangNam ntn;
	nhapNgayThangNam(ntn);
	xuatNgayThangNam(ntn);
	return 0;
}


