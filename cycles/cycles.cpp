#include <iostream>
using namespace std;

int main()
{
    cout << "Task 1--------------------------------------------------\n\n";
    //Напишите программу, которая вычисляет сумму целых
    //чисел от а до 500 (значение a вводится с клавиатуры)

    int a;
    cout << "Enter a value: ";
    cin >> a;

    int sum1 = 0;

    for (int i = a; i <= 500; i++)
    {
        sum1 += i;
    }

    cout << "Sum = " << sum1 << "\n\n";


    cout << "Task 2--------------------------------------------------\n\n";
    //Напишите программу, которая запрашивает два целых числа
    // x и y, после чего вычисляет и выводит значение x в степени y.

    int x, y;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    cout << "Number " << x << " to the power of " << y << " = " << pow(x, y) << "\n\n";


    cout << "Task 3--------------------------------------------------\n\n";
    //Найти среднее арифметическое всех целых чисел от 1 до 1000.
    
    float average;
    float sum2 = 0;

    for (int i = 1; i <= 1000; i++)
    {
        sum2 += i;
    }

    average = sum2 / 1000;

    cout << "Average = " << average << "\n\n";

    cout << "Task 4--------------------------------------------------\n\n";
    //Найти произведение всех целых чисел от a до 20 (значение
    //a вводится с клавиатуры : 1 <= a <= 20).

    int b;

    do {
        cout << "Enter the value of a (1 <= a <= 20): ";
        cin >> b;
    } while (b <= 1 || b >= 20);

    int product = 1;

    for (int i = b; i <= 20; i++)
    {
        product *= i;
    }

    cout << "Product = " << product << "\n\n";


    cout << "Task 5--------------------------------------------------\n\n";
    //Написать программу, которая выводит на экран таблицу
    //умножения на k, где k — номер варианта.Например, для 7 - го варианта :

    int k;
    cout << "Enter a number for the multiplication table: ";
    cin >> k;

    for (int i = 1; i <= 10; i++)
    {
        int product = k * i;
        cout << k << " x " << i << " = " << product << endl;
    }

    return 0;
}







