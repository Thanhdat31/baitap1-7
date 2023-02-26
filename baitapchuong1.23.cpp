#include<iostream>
using namespace std;
struct tinh {
	int matinh;
	char tentinh;
	double dientich;
};
void nhapthongtin(tinh& t)
{
	cout << "nhap ma tinh :";
	cin >> t.matinh;
	cout << "nhap ten tinh :";
	cin >> t.tentinh;
	cout << "nhap dien tich :";
	cin >> t.dientich;
}
void xuatthongtin(tinh& t)
{
	cout << t.matinh << "\n" << t.tentinh << "\n" << t.dientich << "\n";
}
int main()
{
	tinh t;
	nhapthongtin(t);
	xuatthongtin(t);
	return 0;
}