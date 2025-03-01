#include <iostream>

struct Data
{
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    int index;
};

void outpot(Data local)
{
    std::cout << "Город: " << local.city << "\n";
    std::cout << "Улица: " << local.street << "\n";
    std::cout << "Дом: " << local.houseNumber << "\n";
    std::cout << "Квартира: " << local.apartmentNumber << "\n";
    std::cout << "Индекс: " << local.index << "\n\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Data arr[2]{};
    arr[0].city = "Москва";
    arr[0].street = "Ленина";
    arr[0].houseNumber = 15;
    arr[0].apartmentNumber = 123;
    arr[0].index = 112233;
    arr[1].city = "Новосибирск";
    arr[1].street = "Советская";
    arr[1].houseNumber = 78;
    arr[1].apartmentNumber = 92;
    arr[1].index = 187654;

    for (int index{}; index < 2; ++index)
    {
        outpot(arr[index]);
    }

    return 0;
}
