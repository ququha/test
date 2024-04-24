#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
int main(){
setlocale(LC_CTYPE, "rus");
int a, b;
cout << "Введите стороы прямоугольника: ";
cin >> a >> b;
cout << "Что вы хотите вычислить? p-периметр, s-площадь, d-длина диагонали:  ";
string znach;
cin >> znach;
if (znach=="p"){
int p;
cout << "p = " << a+b << endl;
}
if (znach=="s"){
cout << "s = " << a*b << endl;
}
if (znach=="d"){
int aa=a*a, bb=b*b;
float q=sqrt(aa+bb);
cout << "d = " << q << endl;
}
return 0;
}