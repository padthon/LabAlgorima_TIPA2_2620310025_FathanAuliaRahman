#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cout << "masukan name anda :";
    getline(cin, a);

    cout << "hello " << a << ", how was your day?" << endl;

    return 0;
}
