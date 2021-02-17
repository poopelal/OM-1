#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int sideA, sideB, area;

    cout << "garums: ";
    cin >> sideA;
    cout << "platums: ";
    cin >> sideB;

    area = sideA * sideB;

    cout << "Taisnatura laukums : " << area << endl;
    system("pause");
    return 0;
}
