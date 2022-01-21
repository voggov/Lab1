// экзаменХаритонвоой.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Fraction {
private:
    double n;
    double m;

public:
    Fraction(Fraction &other) {
        this->n = other.n;
        if (other.m != 0) {
            this->m = other.m;
        }
        else {
            this->m = 1;
        }
    }
    Fraction(double n, double m) {
        this->n = n;
        if (m != 0) {
            this->m = m;
        }
        else {
            this->m = 1;
        }
    }

    bool compare(double n, double m) {
        if ((this->n > n && this->m == m) || (this->n > n && this->m < m)) {
            return true;
        }
        else {
            return false;

        }
    }
    bool compare(Fraction& const other) {
        if ((this->n > other.n && this->m == other.m) || (this->n > other.n && this->m < other.m)) {
            return true;
        }
        else {
            return false;

        }
    }


    
};


using namespace std;
int main()
{
    Fraction frac1(5, 7), frac2 (8, 12);
    Fraction frac3(frac1);
    Fraction frac4(3, 10);
    cout << frac1.compare(frac2) << endl;
    cout << frac1.compare(frac3) << endl;
    cout << frac1.compare(frac4) << endl;
    cout << frac1.compare(3, 9) << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
