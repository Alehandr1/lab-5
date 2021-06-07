#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    int struc;
    int arr[10];

    char e;

    double f;

    cout << "sizeof\n";

    cout << "char = " << sizeof(char) <<"b"<<"\n";
    cout << "int = " << sizeof(int) <<"b"<<"\n";
    cout << "double = " << sizeof(double) <<"b"<<"\n";
    cout << "long long = " << sizeof(long long) <<"b"<<"\n";

    cout << "int 10 array = " << sizeof(arr) <<"b"<<"\n";

    cout << "struct.int  = " << sizeof(struc,a)*4 <<"b"<<"\n";
    cout << "struct.double  = " << sizeof(struc,f) <<"b"<<"\n";
    cout << "struct.char  = " << sizeof(struc,e) <<"b"<<"\n";


}
