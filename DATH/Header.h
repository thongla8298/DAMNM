#include <iostream>;
using namespace std;

const int Max = 100;

struct NgayThangNam {
	int Ngay;
	int Thang;
	int Nam;
};

struct HoaDon {
	int MaHD;
	NgayThangNam NgayLap;
	int TongTien;
};

struct DSHoaDon {
	HoaDon dshd[Max];
	int SoLuong = 0;
};

void nhapHoaDon(HoaDon &hd);
void menu();
void xuLy(HoaDon &hd, DSHoaDon &dshd, int chon);
void themHoaDon(DSHoaDon &dshd, HoaDon hd);
void xuatDSHoaDon(DSHoaDon dshd);
int timTheoMaHD(DSHoaDon dshd);
int timTheoNgayLap(DSHoaDon dshd);
void xoaTheoMaHD(DSHoaDon &dshd);
void xoaTheoNgayLap(DSHoaDon &dshd);
void doiCho(HoaDon &a, HoaDon &b);
void sapXepTheoMaHDTangDan(DSHoaDon dshd);
void sapXepTheoTongTienTangDan(DSHoaDon dshd);
void luaChon(HoaDon &hd, DSHoaDon &dshd);
int tinhTongtien(HoaDon hd, DSHoaDon dshd);
