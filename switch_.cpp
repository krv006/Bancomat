#include <iostream>
#include<conio.h>
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

    int til, menu, tanlov;
    int parol, newpassword;
    int balans = 1000000, smsXabarnomaTelefon, chekTasiqlashKodi, randSms;
    int parolConst = 1234;


    float amount;

    string check_til = " 1. Uzbek tili \n 2. Rus tili \n 3. Ingiliz tili";
    string menuFront = " 1 <= Balansni tekshirish \n 2 <= Naqd pul olish \n 3 <= SMS xabar ulash \n 4 <= Parolni o'zgartirish \n 5 <= Ortga qaytish \n ";

    cout << check_til << endl << endl;
    cout << "Tilni tanlang: ";
    cin >> til;
    back:

    while (true) {
        switch (til) {
            case 1:
                cout << "Assalomu alaykum" << endl;
                cout << "Parolingizni kiriting: ";
                cin >> parol;

                if (parol == parolConst) {

                    back1:

                    cout << menuFront;
                    cout << "Tanlang: ";
                    cin >> menu;

                    switch (menu) {
                        case 1:
                            cout << "Sizni Hisobingiz-> " << balans << " so'm pul bor" << endl;
                            cout << "Yana amal bajarishni xoxlaysizmi ?" << endl;

                            if (check()) {
                                system("cls");
                                goto back1;
                            } else {
                                cout << "Bizning xizmatimizdan foydalangzningiz uchun minnadormiz." << endl;
                                cout << "Plastik kartangizni olishni unutmang !!!" << endl;
                                return 0;
                            }


                            break;
                        case 2:
                            cout << "Pulning miqdorini kiriting: ";
                            cin >> amount;

                            if (amount > 0) {
                                cout << "Sizdan yechiladigan pul miqdori: " << amount + (amount / 100) << endl;

                                balans = balans - (amount + (amount / 100));
                                Sleep(5000);
                                cout << "Marhamat pullaringizni oling" << endl;

                                cout << "Yana amal bajarishni xoxlaysizmi ?" << endl;
                                cout << "1 - Ha, 2 - Yo'q" << endl;
                                cin >> tanlov;

                                if (check()) {
                                    system("cls");
                                    goto back1;
                                } else {
                                    cout << "Bizning xizmatimizdan foydalangzningiz uchun minnadormiz." << endl;
                                    cout << "Plastik kartangizni olishni unutmang !!!" << endl;
                                    return 0;
                                }

                            } else cout << "Xatolik: Yetarli mablag' mavjud emas yoki noto'g'ri summa." << endl;

                            break;
                        case 3:
                            cout << "SMS xabari ulanadigan telefon raqamini kiriting :";
                            cin >> smsXabarnomaTelefon;

                            randSms = rand() % 100 + 999;
                            cout << "Sizga tasdiqlash kodi keldi eslab qoling :" << randSms << endl;

                            Sleep(1000);

                            cout << "Sizga kelgan tasdiqlash kodini kiriting : " << endl;
                            cin >> chekTasiqlashKodi;

                            if (randSms == chekTasiqlashKodi) {
                                cout << "Ushbu telefon raqam muvaffaqiyatli SMS xabarga  ulandi " << endl;

                                Sleep(5000);
                                system("cls");
                            }

                            if (check()) {
                                system("cls");
                                goto back1;
                            } else {
                                cout << "Bizning xizmatimizdan foydalangzningiz uchun minnadormiz." << endl;
                                cout << "Plastik kartangizni olishni unutmang !!!" << endl;
                                return 0;
                            }

                            break;
                        case 4:
                            cout << "Eski parolizi kiriting: ";
                            cin >> parol;
                            if (parol == parolConst) {
                                cout << "Yangi parol kiriting: ";
                                cin >> newpassword;
                                parolConst = newpassword;

                                Sleep(5000);

                                cout << "Paroliz ozgartirildi" << endl;

                                system("cls");

                                if (check()) {
                                    system("cls");
                                    goto back1;
                                } else {
                                    cout << "Bizning xizmatimizdan foydalangzningiz uchun minnadormiz." << endl;
                                    cout << "Plastik kartangizni olishni unutmang !!!" << endl;
                                    return 0;
                                }

                            } else cout << "Parollar bir birga mos emas !!! " << endl;
                            cout << "Parolni o'zgartirish funksiyasi hali mavjud emas." << endl;
                            break;
                        case 5:
                            goto back;
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


/*
cout << "\nDavom etish uchun istalgan tugmani bosing...";
cin.ignore();
cin.get(); // kutish
 */