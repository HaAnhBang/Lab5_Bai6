#include <iostream>
#include <fstream>
#include <iomanip>
#include "KhachHang.h"
#include "KhachHangA.h"
#include "KhachHangB.h"
#include "KhachHangC.h"
using namespace std;

int main()
{
    ifstream fin("XYZ.INP");
    ofstream fout("XYZ.OUT");

    if (!fin)
    {
        cout << "Khong mo duoc file XYZ.INP";
        return 0;
    }

    int x, y, z;

    fin >> x >> y >> z;
    fin.ignore();

    int n = x + y + z;

    KhachHang** ds = new KhachHang*[n];

    int index = 0;

    for (int i = 0; i < x; i++)
    {
        ds[index] = new KhachHangA();
        ds[index]->Nhap(fin);
        ds[index]->TinhTien();
        index++;
    }

    for (int i = 0; i < y; i++)
    {
        ds[index] = new KhachHangB();
        ds[index]->Nhap(fin);
        ds[index]->TinhTien();
        index++;
    }

    for (int i = 0; i < z; i++)
    {
        ds[index] = new KhachHangC();
        ds[index]->Nhap(fin);
        ds[index]->TinhTien();
        index++;
    }

    double tongTien = 0;

    fout << fixed << setprecision(2);

    fout << x << " " << y << " " << z << endl;

    for (int i = 0; i < n; i++)
    {
        ds[i]->Xuat(fout);
        tongTien += ds[i]->GetSoTienPhaiTra();
    }

    fout << tongTien;

    for (int i = 0; i < n; i++)
    {
        delete ds[i];
    }

    delete[] ds;

    fin.close();
    fout.close();

    cout << "Da xu ly xong. Kiem tra file XYZ.OUT";

    return 0;
}
