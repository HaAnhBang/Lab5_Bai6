#ifndef KHACHHANGC_H
#define KHACHHANGC_H
#include "KhachHang.h"

class KhachHangC : public KhachHang
{
public:
    KhachHangC();
    ~KhachHangC();

    void Nhap(ifstream& fin);
    void Xuat(ofstream& fout);
    void TinhTien();
};

#endif // KHACHHANGC_H
