#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
int main(){
setlocale(LC_CTYPE, "rus");
int a, b;
cout << "������ ���� ��אַ㣮�쭨��: ";
cin >> a >> b;
cout << "�� �� ��� ���᫨��? p-��ਬ���, s-���頤�, d-����� ���������:  ";
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