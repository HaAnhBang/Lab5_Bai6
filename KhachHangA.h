#ifndef KHACHHANGA_H
#define KHACHHANGA_H
#include "KhachHang.h"

class KhachHangA : public KhachHang
{
public:
    KhachHangA();
    ~KhachHangA();

    void Nhap(ifstream& fin);
    void Xuat(ofstream& fout);
    void TinhTien();
};

#endif // KHACHHANGA_H
