#include <iostream>
using namespace std;
int main() {
    cout << "Это программа имитирует часы с кукушкой" << endl;
    int СooCoo = 0;
    int hour;
    cin >> hour;
    if (hour > !0 and hour < 23)
    {
        if (hour == 0)
        {
            hour = 24;
        }
        while (СooCoo < hour) {

            cout << "Ку-ку" << endl;
            СooCoo++;
        }
    }
}
