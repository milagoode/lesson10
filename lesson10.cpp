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

