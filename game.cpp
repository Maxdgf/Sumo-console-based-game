#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <random>

using namespace std;

enum ConsoleColor
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    Yellow = 8,

};

void SetColor(ConsoleColor text, ConsoleColor background)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}


int main() {
    setlocale(LC_ALL, "RU");



    string player_one = " ()\n"
        "-(.)-\n"
        " | |\n"
        " \n"
        "1) мистер жирный(сила(30/100), вес(100кг))\n ";

    string player_two = "___\n"
        "(0_0)\n"
        "(. .)\n"
        "(   )\n"
        "\n"
        "2) вупсень(сила(50/100), вес(150кг), интеллект(20/100))\n"
        "\n";

    string player_three = "     ()\n"
        "+-([] [])-+\n"
        "   (   )\n"
        "    | |\n"
        "\n"
        "3) качок(сила(90/100), вес(80кг), интеллект(100/100))\n"
        "\n";

    string player_four = "     ( *_* )\n"
        "__(    .     )__\n"
        "\n"
        "4) жаба голиаф(сила(100/100), вес(200кг), интеллект(20/100))\n"
        "\n";

    string player_five = "    ()\n"
        " -(.  .)-\n"
        "(       )\n"
        " |     |\n"
        "\n"
        "5) гигант(сила(60/100), вес(130кг), интеллект(70/100))\n"
        "\n";


    SetColor(Yellow, Black);
    std::cout << "SumoFight" << endl;

    std::cout << "Привет, Это игра про сумоистов!" << endl;
    std::cout << "Здесь ты будешь сражаться против других сумоистов." << endl;
    std::cout << "Представляю тебе на выбор бойцов";
    std::cout << endl;

    SetColor(Blue, Black);
    std::cout << player_one;

    SetColor(Green, Black);
    std::cout << player_two;

    SetColor(Cyan, Black);
    std::cout << player_three;

    SetColor(Red, Black);
    std::cout << player_four;

    SetColor(Magenta, Black);
    std::cout << player_five;

    SetColor(LightGray, Black);
    std::cout << "Если опредилился с выбором сумоиста, вводи цифру!";
    std::cout << endl;

    int a;
    std::cin >> a;
    if (a == 1) {
        SetColor(Blue, Black);
        std::cout << "Сумоист 'мистер жирный' выбран!\n";
    }

    else if (a == 2) {
        SetColor(Green, Black);
        std::cout << "Сумоист 'вупсень' выбран!\n";
    }

    else if (a == 3) {
        SetColor(Cyan, Black);
        std::cout << "Сумоист 'качок' выбран!\n";
    }

    else if (a == 4) {
        SetColor(Red, Black);
        std::cout << "Сумоист 'жаба голиаф' выбран!\n";
    }

    else if (a == 5) {
        SetColor(Magenta, Black);
        std::cout << "Сумоист 'гигант' выбран!\n";
    }

    SetColor(LightGray, Black);
    std::cout << "Выбери себе противника!\n";
    int b;
    std::cin >> b;
    if (b == 1) {
        SetColor(Blue, Black);
        std::cout << "Сумоист 'мистер жирный' выбран!\n";
    }

    else if (b == 2) {
        SetColor(Green, Black);
        std::cout << "Сумоист 'вупсень' выбран!\n";
    }

    else if (b == 3) {
        SetColor(Cyan, Black);
        std::cout << "Сумоист 'качок' выбран!\n";
    }

    else if (b == 4) {
        SetColor(Red, Black);
        std::cout << "Сумоист 'жаба голиаф' выбран!\n";
    }

    else if (b == 5) {
        SetColor(Magenta, Black);
        std::cout << "Сумоист 'гигант' выбран!\n";
    }

    SetColor(LightGray, Black);
    std::cout << "Олично, всё готово для битвы!" << endl;
    std::cout << "Всего будет 1 раунд!" << endl;
    std::cout << "Смотри не проиграй!";
    std::cout << "раунд начнётся через: " << endl;
    int f = 0;
    while (f < 5) {
        Sleep(1000);
        std::cout << "5" << std::endl;
        Sleep(1000);
        std::cout << "4" << std::endl;
        Sleep(1000);
        std::cout << "3" << std::endl;
        Sleep(1000);
        std::cout << "2" << std::endl;
        Sleep(1000);
        std::cout << "1" << std::endl;
        Sleep(1000);
        std::cout << "0" << std::endl;
        break;
        f++;
    }

    std::cout << "FIGHT!\n";
    std::cout << "Раунд продлиться 10 секунд!\n";

    srand(time(0));
    string d1 = "ничья";
    string d2 = "Ты победил!";
    string d3 = "Ты проиграл( Противник одержал победу!";
    int t = 0;
    while (t < 10) {
        Sleep(1000);
        std::cout << "1" << std::endl;
        Sleep(1000);
        std::cout << "2" << std::endl;
        Sleep(1000);
        std::cout << "3" << std::endl;
        Sleep(1000);
        std::cout << "4" << std::endl;
        Sleep(1000);
        std::cout << "5" << std::endl;
        Sleep(1000);
        std::cout << "6" << std::endl;
        Sleep(1000);
        std::cout << "7" << std::endl;
        Sleep(1000);
        std::cout << "8" << std::endl;
        Sleep(1000);
        std::cout << "9" << std::endl;
        Sleep(1000);
        std::cout << "10" << std::endl;
        break;
        t++;
    }

    string arr[3] = { d1,d2,d3 };
    string r = arr[rand() % 3];
    cout << r << endl;
    std::cout << endl;

    return 0;
}
