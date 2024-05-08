#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string line = "Users.txt";

    ofstream fout;

    fout.open(line);

    if (!fout.is_open())
    {
        cout << "Файл не найден!\n";
    }
    else
    {
        fout << "1  Анна  25  Москва\n2  Иван  30  Санкт-Петербург\n3  Мария  28  Киев\n";
        fout << "4  Витя  20  Ростов\n5  Катя  56  Луганск";
    }
    fout.close();
}