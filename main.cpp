#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

/// --- GLOBAL ---
int balans = 1000000;
int parol = 1234;

/// --- FUNKSIYALAR ---

void clear() {
    Sleep(1000);
    system("cls");
}

bool check() {
    int tanlov;
    cout << "\nYana amal bajarishni xohlaysizmi?" << endl;
    cout << "1 - Ha\n2 - Yo‘q" << endl;
    cin >> tanlov;
    clear();
    return tanlov == 1;
}

bool parolTekshir() {
    int kiritilgan;
    cout << "Parolingizni kiriting: ";
    cin >> kiritilgan;
    if (kiritilgan == parol) return true;
    cout << "Xato parol!" << endl;
    return false;
}

void balansTekshir() {
    cout << "Sizning hisobingizda: " << balans << " so'm mavjud." << endl;
}

void naqdPul() {
    float amount;
    cout << "Naqd olish uchun summani kiriting: ";
    cin >> amount;

    float komissiya = amount / 100;
    float jami = amount + komissiya;

    if (amount > 0 && jami <= balans) {
        balans -= jami;
        cout << "Sizdan komissiya bilan jami: " << jami << " so‘m yechildi." << endl;
        cout << "Pullaringizni oling." << endl;
    } else {
        cout << "Yetarli mablag‘ mavjud emas yoki noto‘g‘ri summa." << endl;
    }
}

void smsXabar() {
    int tel, kod, tasdiqlash;
    srand(time(0));
    kod = rand() % 900 + 100; // 100-999 oralig‘ida

    cout << "📱 Telefon raqamingizni kiriting: ";
    cin >> tel;

    cout << "Tasdiqlash kodi: " << kod << " (tekshirish uchun)" << endl;
    cout << "Kiritilgan kodni kiriting: ";
    cin >> tasdiqlash;

    if (tasdiqlash == kod) {
        cout << "Telefon raqam muvaffaqiyatli ulandi." << endl;
    } else {
        cout << "Kod noto‘g‘ri!" << endl;
    }
}

void parolOzgartirish() {
    int eski, yangi;
    cout << "Eski parolni kiriting: ";
    cin >> eski;

    if (eski == parol) {
        cout << "Yangi parolni kiriting: ";
        cin >> yangi;
        parol = yangi;
        cout << "Parol muvaffaqiyatli o‘zgartirildi!" << endl;
    } else {
        cout << "Eski parol noto‘g‘ri!" << endl;
    }
}

void menu() {
    while (true) {
        cout << "\n---  MENU ---\n";
        cout << "1. Balansni tekshirish\n";
        cout << "2. Naqd pul olish\n";
        cout << "3. SMS xabar ulash\n";
        cout << "4. Parolni o‘zgartirish\n";
        cout << "5. Chiqish\n";
        cout << "Tanlovingiz: ";

        int tanlov;
        cin >> tanlov;

        switch (tanlov) {
            case 1:
                balansTekshir();
                break;
            case 2:
                naqdPul();
                break;
            case 3:
                smsXabar();
                break;
            case 4:
                parolOzgartirish();
                break;
            case 5:
                cout << "Bizning xizmatimizdan foydalanganingiz uchun rahmat!" << endl;
                cout << "Kartangizni olib ketishni unutmang!" << endl;
                return;
            default:
                cout << "Noto‘g‘ri tanlov." << endl;
        }

        if (!check()) {
            cout << " Xayr!" << endl;
            return;
        }
    }
}

int main() {
    int til;

    cout << "Tilni tanlang:\n";
    cout << "1. O‘zbek tili\n2. Русский\n3. English\nTanlov: ";
    cin >> til;

    if (til != 1) {
        cout << "Bu tilda xizmat hozircha mavjud emas." << endl;
        return 0;
    }

    clear();

    if (parolTekshir()) {
        clear();
        menu();
    } else {
        cout << "Parol noto‘g‘ri kiritildi. Dastur yakunlandi." << endl;
    }

    return 0;
}
