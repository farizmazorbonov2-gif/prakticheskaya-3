#include <iostream>
#include <iomanip>  
#include <locale.h>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << setw(4) << i * j;  
        }
        cout << endl;
    }

    return 0;
}