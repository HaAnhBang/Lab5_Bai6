#include "KhachHangA.h"

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

