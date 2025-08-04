#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;

/// Funksiya definition:
bool check() {
    int tanlov;
    cout << "Yana amal bajarishni xoxlaysizmi ?" << endl;
    cout << "1 - Ha, 2 - Yo'q" << endl;
    cin >> tanlov;
    system("cls");
    return tanlov == 1;
}


int main() {
    cout << endl;

    int til, parol, menu;

    float amount;
    int balans = 1000000;
    const int parolConst = 1234;

    string check_til = " 1. Uzbek tili \n 2. Rus tili \n 3. Ingiliz tili";
    string menuFront = " 1 <= Balansni tekshirish \n 2 <= Naqd pul olish \n 3 <= SMS xabar ulash \n 4 <= Parolni o'zgartirish \n 5 <= Ortga qaytish \n ";

    cout << check_til << endl << endl;
    cout << "Tilni tanlang: ";
    cin >> til;

    back1:

    while (true) {
        switch (til) {
            case 1:
                cout << "Assalomu alaykum" << endl;
                cout << "Parolingizni kiriting: ";
                cin >> parol;

                if (parol == parolConst) {


                    cout << "Tanlang: ";
                    cout << menuFront;
                    cin >> menu;

                    switch (menu) {
                        case 1:
                            cout << "Sizni Hisobingiz-> " << balans << " so'm pul bor" << endl;
                            break;
                        case 2:
                            cout << "Pulning miqdorini kiriting: ";
                            cin >> amount;

                            if (amount > 0) {
                                cout << "Sizdan yechiladigan pul miqdori: " << amount + (amount / 100) << endl;

                                balans = balans - (amount + (amount / 100));
                                Sleep(1000);
                                cout << "Marhamat pullaringizni oling" << endl;

                            } else cout << "Xatolik: Yetarli mablag' mavjud emas yoki noto'g'ri summa." << endl;

                            if (check()) {
                                system("cls");
                                goto back1;
                            } else {
                                cout << "Bizning xizmatimizdan foydalangzningiz uchun minnadormiz." << endl;
                                cout << "Plastik kartangizni olishni unutmang !!!" << endl;
                                return 0;
                            }

                        case 3:
                            cout << "SMS xabar ulash funksiyasi hali mavjud emas." << endl;
                            break;
                        case 4:
                            cout << "Parolni o'zgartirish funksiyasi hali mavjud emas." << endl;
                            break;
                        case 5:
                            cout << "Ortga qaytdingiz. Dastur yakunlandi." << endl;
                            return 0;
                        default:
                            cout << "Noto'g'ri tanlov." << endl;
                            break;
                    }


                } else {
                    cout << "Xato parol" << endl;
                }
                break;

            case 2:
                cout << "Assalomu alaykum (Rus)" << endl;
                break;

            case 3:
                cout << "Welcome" << endl;
                break;

            default:
                cout << "Noto‘g‘ri til tanlandi." << endl;
                break;
        }
    }
    main();
    return 0;
}

