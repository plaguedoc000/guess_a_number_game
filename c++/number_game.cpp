#include <iostream>
#include <random>
#include <ctime>
#include <Windows.h>

using namespace std;

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    mt19937 seed_generator(time(0));
    mt19937 number_generator(seed_generator());
    int number = number_generator() % 10000;

    bool fail = true;
    int attempt = 1;
    int max_attempts = 17;
    int guess;

    cout << "Это игра \"Угадай число\". " << "У вас " << max_attempts << " попыток.\n\n";

    while (attempt <= max_attempts) {
        cout << "Введите свое число: ";
        cin >> guess;
        if (guess == number) {
            cout << "Вы победили!\n";
            fail = false;
            break;
        }
        else if (guess > number) {
            cout << "Ваше число больше загаданного.\n\n";
            attempt += 1;
        }
        else if (guess < number) {
            cout << "Ваше число меньше загаданного.\n\n";
            attempt += 1;
        }
    }

    if (fail) {
        cout << "Вы проиграли.\n";
    }

}
