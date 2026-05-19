#include "KhachHang.h"

KhachHang::KhachHang()
{
    TenKhachHang = "";
    SoLuongHang = 0;
    DonGiaHang = 0;
    SoTienPhaiTra = 0;
}

KhachHang::~KhachHang()
{
}

void KhachHang::Nhap(ifstream& fin)
{
    getline(fin, TenKhachHang);

    fin >> SoLuongHang;
    fin >> DonGiaHang;

    fin.ignore();
}

void KhachHang::Xuat(ofstream& fout)
{
    fout << TenKhachHang << endl;
    fout << SoTienPhaiTra << endl;
}

double KhachHang::GetSoTienPhaiTra()
{
    return SoTienPhaiTra;
}


