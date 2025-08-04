#include <iostream>
#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include <ctime>

using namespace std;


int main() {
    srand(time(NULL));

    cout << endl;

    int Til, menyuTanlsh, BmenyuTanlsh, parol, balans = 500000;
    float amount;

    int parolTekshir = 0, tanlov, smsXabarnomaTelefon, chekTasiqlashKodi, randomSMS;

        int parolConst = 1234;

    string tilFront = " 1 <= Uzbek \n 2 <= Ruskiy \n 3 <= English \n";
    string menyuFront = " 1 <= Balansni tekshirish \n 2 <= Naqd pul olish \n 3 <= SMS xabar ulash \n 4 <= Parolni o'zgartirish \n 5 <= Ortga qaytish \n ";

    menyuFrontOrtga :
    /*
        cout << "1 <= Uzbek " << endl;
        cout << "2 <= Ruskiy " << endl;
        cout << "3 <= English " << endl;
    */

    cout << tilFront;
    cin >> Til;


    switch (Til) {

        case 1 :
            if (parolTekshir == 0) {
                parolXato :
                cout << "Parolingizni kiriting ";
                cin >> parol;
                system("cls");
            }
                if (parol == parolConst) {

                parolTekshir++;

                ortga2 :


                cout << menyuFront;

                cin >> BmenyuTanlsh;

                switch (BmenyuTanlsh) {


                    /// bu yer  balnsni ko'rish qismi

                    case 1 :
                        cout << "Sizning hisobingizda " << balans << " so'm pul  bor " << endl;

                        cout << "Yana amal bajarasizmi ?" << endl;
                        cout << "1 . HA   2 . Yo'q " << endl;

                        cin >> tanlov;

                        if (tanlov == 1) {

                                system("cls");
                            goto ortga2;

                        } else {
                            cout << "Bizning xizmatimizdan foydalangzningiz uchun minnadormiz." << endl;
                            cout << "Plastik kartangizni olishni unutmang !!!" << endl;

                            return 0;


                            break;

                            /// pul yechib olish qismi

                            case 2 :

                                cout << "Pul miqdorini kiriting ";
                            cin >> amount;
                            cout << "Sizdan yechip olinadihan  pul miqdori " << (amount + amount / 100) << endl;

                            if (amount > 0) balans = balans - (amount + amount / 100);

                            cout << "Pul tayyorlanmoqda...." << endl;
                            Sleep(5000);

                            cout << "Marhamat pullaringizni oling " << endl;

                            Sleep(2000);
                            system("cls");

                            cout << "Yana amal bajarasizmi ?" << endl;
                            cout << "1 . HA   2 . Yo'q " << endl;

                            cin >> tanlov;

                            if (tanlov == 1) {

                                system("cls");
                                goto ortga2;

                            } else {
                                cout << "Bizning xizmatimizdan foydalangzningiz uchun minnadormiz." << endl;
                                cout << "Plastik kartangizni olishni unutmang !!!" << endl;

                                return 0;

                            }


                            break;


                            /// bu yer sms xabarnoma ulash qismi
                            case 3 :

                                cout << "SMS xabari ulanadigan telefon raqamini kiriting : ";
                            cin >> smsXabarnomaTelefon;

                            qaytaSMS :

                            randomSMS = rand() % 1000 + 999;

                            cout << "Sizga tasdiqlash kodi keldi eslab qoling :" << randomSMS << endl;

                            Sleep(2000);
                            system("cls");
                            cout << "Sizga kelgan tasdiqlash kodini kiriting : " << endl;
                            cin >> chekTasiqlashKodi;

                            if (chekTasiqlashKodi == randomSMS) {

                                cout << "Ushbu telefon raqam muvaffaqiyatli SMS xabarga  ulandi " << endl;

                                Sleep(2000);

                                system("cls");

                                cout << "Yana amal bajarasizmi ?" << endl;
                                cout << "1 . HA   2 . Yo'q " << endl;
                                cin >> tanlov;

                                if (tanlov == 1) {

                                    system("cls");
                                    goto ortga2;

                                } else {
                                    cout << "Bizning xizmatimizdan foydalangzningiz uchun minnadormiz." << endl;
                                    cout << "Plastik kartangizni olishni unutmang !!!" << endl;

                                    return 0;

                                }


                            } else {

                                cout << "Tasdiqlash kodi noto'gri kiritildi " << endl;

                                cout << "Qaytadan SMS yuborilsinmi ? " << endl;
                                cout << "1 . HA   2 . Yo'q " << endl;

                                cin >> tanlov;

                                if (tanlov == 1) {

                                    goto qaytaSMS;
                                } else {

                                    goto menyuFrontOrtga;
                                }


                            }


                            break;


                            /// parolni o'zgartirish qismi

                            case 4 :
                                break;

                            /// ortga qismi
                            case 5 :


                                goto menyuFrontOrtga;

                            break;


                        }


                }

            } else {

                cout << "Parol xato  kiritildi qaytadan kiriting  " << endl;

                Beep(500, 2000);


                goto parolXato;

            }


            break;


        case 2 :

            cout << "Ruskiy yazika " << endl;

            break;


        case 3 :

            cout << "Selected english" << endl;

            break;

    }


    return 0;
}