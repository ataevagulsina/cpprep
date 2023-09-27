#include "iostream"
using namespace std;

class Room {        // создаём class

   public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // создаём объект of Room class
    Room room1;

    // присвоение значений элементам данных
    room1.length = 42.5; // длина комнаты
    room1.breadth = 30.8; // ширина комнаты
    room1.height = 19.2; // высота комнаты

    // рассчёт и отображение площади и объема помещения
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}
