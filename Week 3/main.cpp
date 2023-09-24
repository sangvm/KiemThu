#include <iostream>
using namespace std;

int main() {
    double gpa;
    int diemRenLuyen;
    string xepLoaiGPA, xepLoaiRenLuyen, xepLoaiCuoiCung;

    cout << "Nhap diem GPA cua sinh vien: ";
    cin >> gpa;

    cout << "Nhap diem ren luyen cua sinh vien: ";
    cin >> diemRenLuyen;

    if (gpa >= 3.6 && gpa <= 4.0) {
        xepLoaiGPA = "Xuat sac";
    } else if (gpa >= 3.2 && gpa <= 3.59) {
        xepLoaiGPA = "Gioi";
    } else if (gpa >= 2.5 && gpa <= 3.19) {
        xepLoaiGPA = "Kha";
    } else if (gpa >= 2.0 && gpa <= 2.49) {
        xepLoaiGPA = "Trung binh";
    } else {
        xepLoaiGPA = "Yeu";
    }

    if (diemRenLuyen >= 90 && diemRenLuyen <= 100) {
        xepLoaiRenLuyen = "Xuat sac";
    } else if (diemRenLuyen >= 80 && diemRenLuyen <= 89) {
        xepLoaiRenLuyen = "Gioi";
    } else if (diemRenLuyen >= 65 && diemRenLuyen <= 79) {
        xepLoaiRenLuyen = "Kha";
    } else if (diemRenLuyen >= 40 && diemRenLuyen <= 64) {
        xepLoaiRenLuyen = "Trung binh";
    } else {
        xepLoaiRenLuyen = "Yeu";
    }

    if (xepLoaiGPA == "Yeu" && xepLoaiRenLuyen == "Yeu") {
        xepLoaiCuoiCung = "Dinh chi hoc";
    } else if (xepLoaiGPA == "Yeu" || xepLoaiRenLuyen == "Yeu") {
        xepLoaiCuoiCung = "Yeu";
    } else if (xepLoaiGPA == "Trung binh" || xepLoaiRenLuyen == "Trung binh") {
        xepLoaiCuoiCung = "Trung binh";
    } else if (xepLoaiGPA == "Kha" || xepLoaiRenLuyen == "Kha") {
        xepLoaiCuoiCung = "Kha";
    } else if (xepLoaiGPA == "Gioi" || xepLoaiRenLuyen == "Gioi") {
        xepLoaiCuoiCung = "Gioi";
    } else {
        xepLoaiCuoiCung = "Xuat sac";
    }

    cout << "Xep loai cuoi cung cua sinh vien: " << xepLoaiCuoiCung << endl;

    return 0;
}
