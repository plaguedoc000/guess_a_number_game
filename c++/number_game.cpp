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

    cout << "��� ���� \"������ �����\". " << "� ��� " << max_attempts << " �������.\n\n";

    while (attempt <= max_attempts) {
        cout << "������� ���� �����: ";
        cin >> guess;
        if (guess == number) {
            cout << "�� ��������!\n";
            fail = false;
            break;
        }
        else if (guess > number) {
            cout << "���� ����� ������ �����������.\n\n";
            attempt += 1;
        }
        else if (guess < number) {
            cout << "���� ����� ������ �����������.\n\n";
            attempt += 1;
        }
    }

    if (fail) {
        cout << "�� ���������.\n";
    }

}
