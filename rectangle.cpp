#include <iostream>
using namespace std;

// تعریف ساختار مستطیل
struct rectangle {
    int length; // طول مستطیل
    int width;  // عرض مستطیل
    int A;      // مساحت مستطیل
    int P;      // محیط مستطیل
};

// تابع محاسبه مساحت و محیط و نمایش مستطیل
void rectangleArea(rectangle &REC) {
    // محاسبه مساحت مستطیل
    REC.A = REC.length * REC.width;
    // محاسبه محیط مستطیل
    REC.P = 2 * (REC.length + REC.width);

    // چاپ خط بالای مستطیل
    for (int i = 0; i < REC.width; i++) {
        cout << "*\t";
    }
    cout << endl;

    // چاپ خطوط میانی مستطیل
    for (int i = 0; i < REC.length - 2; i++) {
        cout << "*";
        for (int j = 0; j < REC.width - 1; j++) {
            cout << "\t";
        }
        cout << "*";
        cout << endl;
    }

    // چاپ خط پایین مستطیل
    for (int n = 0; n < REC.width; n++) {
        cout << "*\t";
    }
    cout << endl;
}

int main() {
    // تعریف متغیر مستطیل به صورت محلی
    rectangle REC;

    // درخواست ورود طول و عرض از کاربر
    cout << "لطفاً طول مستطیل را وارد کنید: ";
    cin >> REC.length;
    cout << "لطفاً عرض مستطیل را وارد کنید: ";
    cin >> REC.width;

    // فراخوانی تابع محاسبه مساحت و محیط و نمایش مستطیل
    rectangleArea(REC);

    // نمایش مساحت و محیط مستطیل
    cout << "\nمساحت مستطیل برابر است با: " << REC.A << endl;
    cout << "محیط مستطیل برابر است با: " << REC.P << endl;

    return 0;
}
