#ifndef KHACHHANGB_H
#define KHACHHANGB_H
#include "KhachHang.h"

class KhachHangB : public KhachHang
{
private:
    int SoNamThanThiet;

public:
    KhachHangB();
    ~KhachHangB();

    void Nhap(ifstream& fin);
    void Xuat(ofstream& fout);
    void TinhTien();
};

#endif // KHACHHANGB_H
