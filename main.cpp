#include <iostream>

using namespace std;

int main() {

    cout << "Bonkamat loyihaga xush kelibsiz !!!" << endl;
    cout << "Tildi tanlang" << endl;
    cout << "1 -> Uzbek" << endl;
    cout << "2 -> Rus" << endl;
    cout << "3 -> Ingiliz" << endl;

    int a;
    cout << "a-> ";
    cin >> a;

    switch (a) {
        case 1:
            cout << "Uzbek tili" << endl;
            break;
        case 2:
            cout << "Rus tili" << endl;
            break;

        case 3:
            cout << "Ingliz tili" << endl;
            break;

    }

    return 0;
}