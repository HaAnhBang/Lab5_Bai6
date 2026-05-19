#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class KhachHang
{
protected:
    string TenKhachHang;
    int SoLuongHang;
    double DonGiaHang;
    double SoTienPhaiTra;

public:
    KhachHang();
    virtual ~KhachHang();

    virtual void Nhap(ifstream& fin);
    virtual void Xuat(ofstream& fout);
    virtual void TinhTien() = 0;

    double GetSoTienPhaiTra();
};

#endif
