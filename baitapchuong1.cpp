#include <iostream>
using namespace std;

    struct phanso {
        int mau;
        int tu;
    };
    void nhapphanso(phanso & ps)
    {
        cout << "nhap tu so:";
        cin >> ps.tu;
        cout << "nhap mau so:";
        cin >> ps.mau;
    }
    void xuatphanso(phanso & ps)
    {
        cout << ps.tu << "/" << ps.mau <<"\n";
    }

    int main()
    {
        phanso ps;
        nhapphanso(ps);
        xuatphanso(ps);
        return 0;
    }