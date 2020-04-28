// forwhildo.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int n_word() {
    int n;
    cout << "введите вычесляемое число для вычислений факториала и фибоначи:";
    cin >> n;
    return n;
    }

    void fact(int n) {
    int resalt=1;
    for (int i = 1; i <= n; i++) {
        resalt = resalt * i;
    }
    cout << "рeзультат вычислений факториала:";
    cout << resalt<<endl;
}

    void fib(int n) {
        int first = 1, second = 1, next;
        cout << "фибоначи: ";
            for (int i = 1; i <= n; i++)
            {
                if (i <= 2){ 
                    cout << "1 ";
                    continue;
                }
                next = first + second; 
                first = second; second = next; 
                cout << second<< " ";
            }   
            cout << endl;
    }

    void arif(int n,int a,int d) {
        int Sn=0;
        for (int i = 0; i < n ; i++) {
            Sn += a;
            a += d;
        }
        cout << "Sum-arifm: "<< Sn<< endl;
    }

    void geometr(int n,int a,int d){
        int Sn = 0;
        for (int i = 0; i < n; i++) {
            Sn += a;
            a *= d;
        }
        cout << "Sum-geom: " << Sn;
    }

int main()
{
    setlocale(LC_ALL, "Russian");
    fact(5);
    fib(5);
    arif(5,0,2);
    geometr(5, 1, 2);
}