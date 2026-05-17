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



KhachHangA::KhachHangA()
{
}

KhachHangA::~KhachHangA()
{
}

void KhachHangA::Nhap(ifstream& fin)
{
    KhachHang::Nhap(fin);
}

void KhachHangA::Xuat(ofstream& fout)
{
    KhachHang::Xuat(fout);
}

void KhachHangA::TinhTien()
{
    double tienHang = SoLuongHang * DonGiaHang;

    SoTienPhaiTra = tienHang + tienHang * 0.1;
}



KhachHangB::KhachHangB()
{
    SoNamThanThiet = 0;
}

KhachHangB::~KhachHangB()
{
}

void KhachHangB::Nhap(ifstream& fin)
{
    KhachHang::Nhap(fin);

    fin >> SoNamThanThiet;

    fin.ignore();
}

void KhachHangB::Xuat(ofstream& fout)
{
    KhachHang::Xuat(fout);
}

void KhachHangB::TinhTien()
{
    double tienHang = SoLuongHang * DonGiaHang;

    double phanTramKhuyenMai = SoNamThanThiet * 0.05;

    if (phanTramKhuyenMai > 0.5)
        phanTramKhuyenMai = 0.5;

    double tienSauKhuyenMai = tienHang * (1 - phanTramKhuyenMai);

    SoTienPhaiTra = tienSauKhuyenMai + tienSauKhuyenMai * 0.1;
}



KhachHangC::KhachHangC()
{
}

KhachHangC::~KhachHangC()
{
}

void KhachHangC::Nhap(ifstream& fin)
{
    KhachHang::Nhap(fin);
}

void KhachHangC::Xuat(ofstream& fout)
{
    KhachHang::Xuat(fout);
}

void KhachHangC::TinhTien()
{
    double tienHang = SoLuongHang * DonGiaHang;

    double tienSauGiam = tienHang * 0.5;

    SoTienPhaiTra = tienSauGiam + tienSauGiam * 0.1;
}
