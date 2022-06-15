#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a;
    cout << "Введите число: \n";
    cin >> a;

    for (int i = 1; i > 0; i++) {
        if (a % i == 0) {
            cout << i << endl;
        }
    }
}

