//#include <iostream>
//#include <algorithm>
//#include <CoreWindow.h>
//
//#define R "\033[31m"
//#define G "\033[33m"
//#define N "\033[0m"
//
//using namespace std;
//
//int main() {
//    system("chcp 1251>null");
//    srand(time(NULL));
//
//    cout << "\tзапам'ятай розположення однакових символів\n\n";
//
//    char sym[3][4];
//    char s[] = "aabbccddeeff";
//    random_shuffle(s, s + 12);
//
//    Sleep(2000);
//    for (short i = 0; i < 3; i++) {
//        for (short j = 0; j < 4; j++) {
//            sym[i][j] = s[i * 4 + j];
//        }
//    }
//    Sleep(3000);
//    cout << "  1 2 3 4" << endl;
//    for (short i = 0; i < 3; i++) {
//        cout << char('A' + i) << ' ';
//        for (short j = 0; j < 4; j++) {
//            cout << R << 'X' << ' ' << N;
//        }
//        cout << endl;
//    }
//    
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//#include <chrono>
//#include <windows.h>
//
//using namespace std;
//
//int main() {
//    system("chcp 1251 > null");
//    srand(time(nullptr));
//    cout << "\t\tШВИДКІСТЬ ДРУКУ\n\n Суть гри: швидко надрукувати слово за ПК\n\tДля початку гри натисніть ENTER\n\n";
//    cin.ignore();
//
//    string rnd_words[]{ "banana", "text", "lemon", "apple", "orange" };
//    int size = sizeof(rnd_words) / sizeof(rnd_words[0]);
//    string word = rnd_words[rand() % size];
//
//    cout << "введіть слово: \033[45m" << word << "\033[0m";
//    auto startPlayer = chrono::steady_clock::now();
//
//    string user = "";
//    while (user != word) {
//        cout << "-> ";
//        cin >> user;
//        if (user != word) {
//            cout << "не правильно. час плине..." << endl;
//        }
//    }
//
//    auto endPlayer = chrono::steady_clock::now();
//    chrono::duration<double> elapsedPlayer = endPlayer - startPlayer;
//    double timePlayer = elapsedPlayer.count();
//
//    cout << "\n\t\tВаш результат: ";
//    for (short i = 1; i < 4; i++) {
//        cout << i << ' ';
//        Sleep(1000);
//    }
//
//    cout << "\n\t\tЧАС: " << round(timePlayer) << " сек";
//    cout << "\n\t\tХід комп'ютера\n";
//
//    auto startPC = chrono::steady_clock::now();
//    auto endPC = chrono::steady_clock::now();
//    chrono::duration<double> elapsedPC = endPC - startPC;
//    double timePC = elapsedPC.count() * 10000000;
//
//    int rnd = rand() % 5;
//    for (short i = 0; i < 3; i++) {
//        cout << " .";
//        Sleep(1000);
//    }
//
//    cout << "\n\t\tЧАС: " << timePC * rnd << " сек.\n";
//
//    int ballUser = 0, ballPC = 0, round = 1;
//    cout << "Раунд #" << round << " переміг: ";
//    Sleep(1000);
//
//    if (timePlayer < timePC) {
//        cout << "\033[31mГРАВЕЦЬ\033[0m\n";
//        ballUser++;
//    }
//    else if (timePlayer > timePC) {
//        cout << "\033[34mПК\033[0m\n";
//        ballPC++;
//    }
//    else {
//        cout << "НІЧИЯ\n";
//    }
//
//    cout << "\n\t\tБали Гравця: " << ballUser << "\tБали ПК: " << ballPC << "\033[0m" << endl;
//    cout << "для продовження натисніть ENTER";
//    cin.ignore(32767, '\n');
//    cout << "\033[2J\033[1;1H";
//    cout << "\n\t\tШВИДКІСТЬ РУХУ\n";
//    cout << "\n\t\t\033[45mБали Гравця: " << ballUser << "\tБали ПК: " << ballPC << "\033[0m" << endl;
//
//    return 0;
//}
//
//#include <iostream>
//#include <algorithm>
//#include <chrono>
//#include <windows.h>
//
//using namespace std;
//
//int main() {
//	system("chcp 1251 > null");
//
//	string quest[]{
//		"Квітка, з жовтою серединою і білими пелюстками ",
//		"Воно падає з неба і допомагає рослинам рости",
//		"Пташка, яка не може літати і живе в Антарктиді ",
//		"Золота рідина, що виробляється",
//		"За допомогою чого люди поповнюють свою енергію"
//	};
//	string answ[]{
//		"ромашка", "дощ", "пінгвін","мед", "їжа"
//	};
//	int size = sizeof(quest) / sizeof(quest[0]);
//	int rnd = rand() % size;
//	string questPrint = quest[rnd];
//	cout << questPrint << endl << endl;
//	string answPrint = answ[rnd];
//	int len = answPrint.size();
//
//	for (int i = 0; i < len; i++) {
//		cout << 'X' << endl;
//	}
//
//	cout << "\n1) ввести слово\n2) ввести літеру\n";
//
//return 0;
//}

#include <iostream>
#include <algorithm>
#include <chrono>
#include <windows.h>

using namespace std;

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define STOP "\033[0m"

int main() {
    system("chcp 1251 > null");
    srand(time(0));

    cout << YELLOW << "Завантаження" << STOP;
    for (short i = 0; i < 3; i++) {
        cout << YELLOW << " ." << STOP;
        Sleep(800);
    }
    system("cls");

    string quest[] = {
        "Квітка, з жовтою серединою і білими пелюстками",
        "Воно падає з неба і допомагає рослинам рости",
        "Пташка, яка не може літати і живе в Антарктиді",
        "Золота рідина, що виробляється бджолами",
        "Те, що люди споживають, щоб поповнити енергію"
    };

    string answ[] = {
        "ромашка", "дощ", "пінгвін", "мед", "їжа"
    };

    int size = sizeof(quest) / sizeof(quest[0]);
    int rnd = rand() % size;

    string questPrint = quest[rnd];
    string answPrint = answ[rnd];
    int len = answPrint.size();
    string word(len, 'X');
    int hintsUsed = 0;

    cout << GREEN << "\nЗагадка: " << questPrint << "\n\n" << STOP;

    for (char c : word) {
        cout << c << " ";
    }
    cout << endl;

    auto startTime = chrono::high_resolution_clock::now();
    bool guessed = false;

    while (!guessed) {
        int choice;
        cout << "\n1) Ввести слово\n2) Ввести літеру\n3) Підказка (+2 сек)\nВаш вибір: ";
        cin >> choice;

        if (choice == 1) {
            string guess;
            cout << "Ваше слово: ";
            cin >> guess;

            if (guess == answPrint) {
                guessed = true;
                cout << GREEN << "Перемога" << endl << STOP;
            }
            else {
                cout << RED << "Неправильно, спробуйте ще раз." << endl << STOP;
            }
        }
        else if (choice == 2) {
            char letter;
            cout << "Введіть літеру: ";
            cin >> letter;

            bool found = false;
            for (int i = 0; i < len; i++) {
                if (answPrint[i] == letter) {
                    word[i] = letter;
                    found = true;
                }
            }

            if (found) {
                cout << GREEN << "Правильно " << STOP;
            }
            else {
                cout << RED << "Такої літери немає." << endl << STOP;
            }

            for (char c : word) {
                cout << c << " ";
            }
            cout << endl;

            if (word == answPrint) {
                guessed = true;
                cout << GREEN << "Перемога" << endl << STOP;
            }
        }
        else if (choice == 3) {
            hintsUsed++;
            bool hintGiven = false;

            for (int i = 0; i < len; i++) {
                if (word[i] == 'X') {
                    word[i] = answPrint[i];
                    hintGiven = true;
                    break;
                }
            }

            if (hintGiven) {
                cout << YELLOW << "Підказка використана" << endl << STOP;
            }
            else {
                cout << RED << "Усі літери вже відкриті" << endl << STOP;
            }

            for (char c : word) {
                cout << c << " ";
            }
            cout << endl;

            if (word == answPrint) {
                guessed = true;
                cout << GREEN << "Перемога" << endl << STOP;
            }
        }
        else {
            cout << RED << "Неправильний вибір, спробуйте ще раз." << endl << STOP;
        }
    }

    auto endTime = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = endTime - startTime;
    double totalTime = elapsed.count() + hintsUsed * 2;

    cout << "\nЧас, витрачений на розгадування слова: " << YELLOW << totalTime << " секунд" << STOP << endl;

    return 0;
}
