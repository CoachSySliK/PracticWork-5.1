#include <iostream>

using namespace std;

int main()
{
    int speed;
    int height;
    cout << "Введите скорость самолёта: ";
    cin >> speed;
    cout << "Введите высоту самолёта: ";
    cin >> height;

    if (speed < 300 || height < 100) {
        cout << "Опасность столкновения! Катапультируйтесь!\n";
        if (speed < 0 || height < 0) {
            cout << "Вы разбились!\n";
        }
        return 1;
    }

    if ((speed > 750 && speed < 850) && (height > 9000 && height < 9500)) {
        cout << "Самолёт в коридоре!\n";
    }
    else {
        cout << "Вернитесь в коридор!\n";
    }


    return 0;
}
