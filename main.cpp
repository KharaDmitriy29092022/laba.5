#include <iostream>
#include <iomanip>

using namespace std;
void task_geom5();
void task_2();
double factorial(int& n);
void task_3();
int main()
{
    int menu;
    cout << "Task number:";
    cin >> menu;
    switch (menu)
    { // перемикання між завданнями
    case 1:
        task_geom5();
        break; // Завдання 1
    case 2:
        task_2();
        break; // Завдання 2

    case 3:
        task_3();
        break; // Завдання 3

    default: cout << "Wrong task! (Only 1,2 or 3)" << endl; //повідомлення про помилку
    }


    system("pause");
    return 0;
}
void task_geom5()
{
    // Вводим координаты точки
    double x, y;
    int n = 0,it=0;
    cout << "Enter number of points" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
 // Определяем радиусы кругов
    double r1 = 1;
    double r2 = 2;
   cout << "Enter the x and y coordinates of the point: ";
    cin >> x >> y;
    // Проверяем попала ли точка в первый круг
    bool in_circle1 = (x * x + y * y - 2 * x - 4 * y + 5) < 0;

    // Проверяем попала ли точка во второй круг
    bool in_circle2 = ((x - 3) * (x - 3) + (y - 4) * (y - 4) - 4) < 0;

    // Выводим результат
    if (in_circle1  in_circle2) {
        cout << "The dot fell into one of the circles." << endl;
        it++;
    }
    else {
        cout << "The dot did not fall into any of the circles." << endl;
    }
    }
    cout << " - " << it << endl;

}
void task_2()
{

    int n;
    cout << "Enter n: ";
    cin >> n;
double result = 1.0;
    double x;
    cout << "Enter x: ";
    cin >> x;
    if (0<x  x<10)
    {

    for (int i = 0; i <= n; i++) {
        result *= pow(sin(x), i) + 1.0 / sqrt(x);
    }

    cout << "Result: " << result << endl;
    }
    else
    {
        cout << "Error" << endl;

    }

}

void task_3()
{
    double x;
    cout << "Enter x: ";
    cin >> x;

    double e = 1e-5; // Мала величина для збіжності
    double g = 1e5; // Велика величина для розбіжності

    double sum = 0.0;
    int n = 1;
    double u = 1.0; // Ініціалізуємо u значенням 1 перед використанням

    while (abs(u) >= e && abs(u) <= g) {
        u =(factorial(n)*exp(n))/pow(n,n) ;
        sum += u;
        cout << setprecision(10) << u << endl;
        n++;
    }

    if (abs(u) < e) {
        cout << "The amount converges to a given accuracy." << endl;
    }
    else if (abs(u) > g) {
        cout << "The series diverge." << endl;
    }
}
double factorial(int& n)
{
    double factorial = 1;
    for (int i = 0; i < n; i++)
    {
        factorial *= 2 * i + 1;
    }
    return factorial;
}
