#include "KhachHangC.h"

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
