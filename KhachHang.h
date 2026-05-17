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

class KhachHangA : public KhachHang
{
public:
    KhachHangA();
    ~KhachHangA();

    void Nhap(ifstream& fin);
    void Xuat(ofstream& fout);
    void TinhTien();
};

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

class KhachHangC : public KhachHang
{
public:
    KhachHangC();
    ~KhachHangC();

    void Nhap(ifstream& fin);
    void Xuat(ofstream& fout);
    void TinhTien();
};

#endif
