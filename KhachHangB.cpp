#include "KhachHangB.h"

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
