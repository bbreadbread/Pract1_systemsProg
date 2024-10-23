#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    //вариант 14
    char num[50];
    int minNum = 10;
    cout << "Введите число" << endl;
    cin >> num;
    for (int i = 0; i < strlen(num); i++) {

        int digit = num[i] - '0';
        if (digit < minNum) {
            minNum = digit;
        }
    }
    cout << endl << "Наименьшая цифра в числе: " << minNum;

    //вариант 24, тк не знала, что надо спрашивать у Вас какой вариант будет вторым, то +10 к номеру в журнале
    int numSecond, sumAll = 0, maxI;
    cout << endl << endl << "Введите число: " << endl;
    cin >> numSecond;
    maxI = numSecond;
    for (int i = 0; i < maxI; i++) {
        if (numSecond % 2 == 1 || numSecond == 1)
        {
            sumAll += numSecond;
        }
        numSecond -= 1;
    }
    cout << endl << "Сумма всех нечетных чисел от 1 до " << minNum << ": " << sumAll;
}