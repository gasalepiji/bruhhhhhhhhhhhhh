#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Masukkan bilangan: ";
    cin >> num;

    int nomorAsli = num;
    
    cout << num;

    for (int i = num - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            cout << " - " << i;
            num -= i;
        }
    }

    cout << " = " << num << endl;

    return 0;
}
