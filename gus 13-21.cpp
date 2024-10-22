#include <iostream> 
using namespace std;


int main()
{
    setlocale(0, "");
    cout << "[+] Программа - Геометрические фигуры" << endl;
    cout << "[1] Линия" << endl;
    cout << "[2] Квадрат" << endl;
    cout << "[3] Прямоугольник" << endl;
    cout << "[4] Треугольник" << endl;
    cout << "[5] Решетка" << endl;
    cout << "[6] Плюс" << endl;
    cout << "[7] Крест" << endl;
    cout << "[8] Змейка" << endl;
    cout << "[9] Ромб" << endl;
    cout << "[10] Рекурсивный квадрат" << endl;
    int fig;
    cin >> fig;
    int tip;
    string zn;
    int razmer;
    int razmer2;
    int counter = 0;
    int counter2 = 0;

    system("cls");
    if (fig == 2)
    {
        cout << "Фигура: [+] Квадрат" << endl;
        cout << "[1] Заполненый" << endl;
        cout << "[2] Пустой" << endl;
        cin >> tip;
        cout << "Размер: ";
        cin >> razmer;
        cout << "Знак: ";
        cin >> zn;
    }
    if (fig == 1 || fig == 4 || fig == 5 || fig == 6 || fig == 7 || fig == 8 || fig == 9 || fig == 10)
    {
        cout << "Размер: ";
        cin >> razmer;
        if (fig == 4)
        {
            cout << "[1] Пустой" << endl;
            cout << "[2] Заполненый" << endl;
            cin >> tip;
        }
        if (razmer % 2 == 0 && (fig == 4 || fig == 5 || fig == 6 || fig == 7 || fig == 9))
        {
            razmer--;
        }
        if (fig == 1)
        {
            cout << "[1] Вертикальная" << endl;
            cout << "[2] Горизонтальня" << endl;
            cin >> tip;
        }
        cout << "Знак: ";
        cin >> zn;
    }
    else if (fig == 3)
    {
        cout << " [1] Заполненый" << endl;
        cout << "[2] Пустой" << endl;
        cin >> tip;
        cout << "Высота: ";
        cin >> razmer;
        cout << "Ширина: ";
        cin >> razmer2;
        cout << "Знак: ";
        cin >> zn;

    }



    if (fig == 1)
    {
        if (tip == 1)
        {
            for (int i = 0; i < razmer; i++)
            {
                cout << zn << endl;
            }
        }
        else
        {

            for (int i = 0; i < razmer; i++)
            {
                cout << zn;
            }
        }

    }
    else if (fig == 2)
    {
        if (tip == 1)
        {
            for (int i = 0; i < razmer; i++)
            {
                for (int j = 0; j < razmer; j++)
                {
                    cout << zn;
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 0; i < razmer; i++)
            {
                if (i == 0 || i == (razmer - 1))
                {
                    for (int i = 0; i < razmer; i++)
                    {
                        cout << zn;
                    }
                    cout << endl;


                }
                else
                {
                    cout << zn;
                    for (int j = 0; j < (razmer - 2); j++)
                    {
                        cout << " ";
                    }
                    cout << zn;
                    cout << endl;
                }
            }
        }
    }
    else if (fig == 3)
    {
        if (tip == 1)
        {
            for (int i = 0; i < razmer; i++)
            {
                for (int j = 0; j < razmer; j++)
                {
                    cout << zn;
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 0; i < razmer; i++)
            {
                if (i == 0 || i == (razmer - 1))
                {
                    for (int i = 0; i < razmer2; i++)
                    {
                        cout << zn;
                    }
                    cout << endl;


                }
                else
                {
                    cout << zn;
                    for (int j = 0; j < (razmer2 - 2); j++)
                    {
                        cout << " ";
                    }
                    cout << zn;
                    cout << endl;
                }
            }
        }

    }
    else if (fig == 4)
    {


        if (tip == 1)
        {
            for (int i = 0; i < razmer; i++)
            {
                if (i < (razmer - 1) / 2)
                {
                    for (int j = 0; j < razmer; j++)
                    {
                        if (j == razmer / 2 - i || j == razmer / 2 + i)
                        {
                            cout << zn << " ";
                        }
                        else
                        {
                            cout << ". ";
                        }
                    }
                }
                else
                {
                    for (int j = 0; j < razmer; j++)
                    {
                        cout << zn << " ";
                    }
                    break;

                }

                cout << endl;
            }

        }
        else
        {
            for (int i = 1; i < razmer + 1; i++)
            {
                if (i < (razmer + 1) / 2)
                {
                    for (int j = 0; j < razmer; j++)
                    {
                        if (j > razmer / 2 - i && j < razmer / 2 + i)
                        {
                            cout << zn << " ";
                        }
                        else
                        {
                            cout << ". ";
                        }
                    }
                }
                else
                {
                    for (int j = 0; j < razmer; j++)
                    {
                        cout << zn << " ";
                    }
                    break;
                }

                cout << endl;
            }

        }




    }
    else if (fig == 5)
    {
        for (int i = 1; i < razmer + 1; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 1; j < razmer + 1; j++)
                {
                    cout << zn << " ";
                }
            }
            else
            {
                for (int j = 1; j < razmer + 1; j++)
                {
                    if (j % 2 == 0)
                    {
                        cout << zn << " ";
                    }
                    else
                    {
                        cout << ". ";
                    }


                }

            }
            cout << endl;
        }

    }
    else if (fig == 6)
    {
        for (int i = 0; i < razmer; i++)
        {
            if (i == (razmer / 2))
            {
                for (int j = 0; j < razmer; j++)
                {
                    cout << zn << " ";

                }

            }
            else
            {
                for (int j = 0; j < razmer; j++)
                {
                    if (j == (razmer / 2))
                    {
                        cout << zn << " ";


                    }
                    else
                    {
                        cout << ". ";

                    }


                }

            }

            cout << endl;
        }
    }
    else if (fig == 7)
    {
        for (int i = 0; i < razmer; i++)
        {
            for (int j = 0; j < razmer; j++)
            {
                if (j == i || j == razmer - 1 - i)
                {
                    cout << zn << " ";
                }
                else
                {
                    cout << ". ";
                }
            }

            cout << endl;
        }


    }
    else if (fig == 8)
    {
        for (int i = 1; i < razmer + 1; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < razmer; j++)
                {
                    if (counter % 2 == 0)
                    {
                        if (j == razmer - 1)
                        {
                            cout << zn << " ";
                        }
                        else
                        {
                            cout << ". ";

                        }

                    }
                    else
                    {
                        if (j == 0)
                        {
                            cout << zn << " ";
                        }
                        else
                        {
                            cout << ". ";

                        }

                    }
                }

            }
            else
            {
                for (int j = 0; j < razmer; j++)
                {
                    cout << zn << " ";

                }
                counter++;

            }
            cout << endl;
            counter++;
        }


    }
    else if (fig == 9)
    {
        for (int i = 0; i < razmer; i++)
        {
            if (i < (razmer - 1) / 2)
            {
                for (int j = 0; j < razmer; j++)
                {
                    if (j == razmer / 2 - i || j == razmer / 2 + i)
                    {
                        cout << zn << " ";
                    }
                    else
                    {
                        cout << ". ";
                    }
                }
            }
            else
            {

                for (int j = 0; j < razmer; j++)
                {
                    if (j == counter2 || j == razmer - 1 - counter2)
                    {
                        cout << zn << " ";
                    }
                    else
                    {
                        cout << ". ";
                    }

                }
                counter2++;

            }
            cout << endl;
        }

    }
    else if (fig == 10)
    {
        for (int i = 0; i < razmer; i++)
        {
            if (i == 0 || i == razmer - 1)
            {
                for (int j = 0; j < razmer; j++)
                {
                    cout << zn << " ";
                }

            }
            else if (i == 2 || i == razmer - 3)
            {
                for (int j = 0; j < razmer; j++)
                {
                    if (j == 0 || j == razmer - 1 || (j > 1 && j < razmer - 2))
                    {
                        cout << zn << " ";
                    }
                    else
                    {
                        cout << ". ";
                    }

                }


            }
            else
            {
                for (int j = 0; j < razmer; j++)
                {
                    if (j == 0 || j == razmer - 1)
                    {
                        cout << zn << " ";
                    }
                    else if ((j == 2 || j == razmer - 3 || (i == razmer / 2 && j == razmer / 2)) && i > 1 && i < razmer - 2)
                    {
                        cout << zn << " ";
                    }

                    else
                    {
                        cout << ". ";
                    }
                }

            }
            cout << endl;
        }

    }


}