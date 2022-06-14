#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //setlocale(0, "UKR");
    //cout << "Укажите высоту треугольника: ";
    //int height;
    //cin >> height;

    //for (int i = 1, j = 0; i <= height; ++i, j = 0)
    //{
    //    for (int space = 1; space <= height - i; ++space)
    //    {
    //        cout << "  ";
    //    }

    //    while (j != 2 * i - 1)
    //    {
    //        cout << "* ";
    //        j++;
    //    }
    //    cout << "\n";
    //}

    //setlocale(0, "UKR");
    //cout << "Укажите высоту треугольника : ";
    //int height;
    //cin >> height;

    //for (int i = 1; i <= height; i++)
    //{
    //    for (int j = 1; j <= (height - i); j++)
    //    {
    //        cout << " ";
    //    }
    //    for (int k = 1; k <= i * 2 - 1; k++)
    //    {
    //        if (k == 1 || k == i * 2 - 1)
    //        {
    //            cout << "*";
    //        }
    //        else if (i == height)
    //        {
    //            cout << "*";
    //        }
    //        else
    //        {
    //            cout << " ";
    //        }
    //    }
    //    cout << "\n";
    //}

    //setlocale(0, "UKR");
    //cout << "Введите число: ";
    //int num;
    //cin >> num;

    //int n = num;

    //int digit = 0;
    //int rev = 0;

    //do
    //{
    //    digit = num % 10;
    //    rev = (rev * 10) + digit;
    //    num = num / 10;
    //} while (num != 0);

    //if (n == rev)
    //{
    //    cout << "\nЧисло является палиндромом.\n";
    //}
    //else
    //{
    //    cout << "\nЧисло не является палиндромом.\n";
    //}

    //setlocale(0, "UKR");

    //cout << "Укажите длину: ";
    //int length;
    //cin >> length;

    //cout << "Укажите ширину: ";
    //int width;
    //cin >> width;

    //cout << "Укажите высоту: ";
    //int height;
    //cin >> height;

    //for (int i = 0; i < width / 2; i++)
    //{
    //    cout << ' ';
    //}
    //for (int i = 0; i < length; i++)
    //{
    //    cout << '*';
    //}

    //for (int i = 1; i < width / 2; i++)
    //{
    //    cout << "\n";

    //    for (int j = 0; j < width / 2 - i; j++)
    //    {
    //        cout << ' ';
    //    }

    //    cout << '*';

    //    for (int j = 1; j < i; j++)
    //    {
    //        cout << ' ';
    //    }

    //    cout << '*';

    //    for (int j = 2; j < length / 2; j++)
    //    {
    //        cout << ' ';
    //    }
    //    for (int j = 0; j < length / 2 - i; j++)
    //    {
    //        cout << ' ';
    //    }

    //    cout << '*';

    //    for (int j = 1; j < i; j++)
    //    {
    //        cout << ' ';
    //    }

    //    cout << '*';
    //}
    //cout << "\n";
    //for (int i = 0; i < length; i++)
    //{
    //    cout << '*';
    //}
    //for (int i = 1; i < width / 2; i++)
    //{
    //    cout << ' ';
    //}
    //cout << '*';

    //for (int i = 2; i < height / 2; i++)
    //{
    //    cout << "\n";

    //    cout << '*';

    //    for (int j = 1; j < width / 2; j++)
    //    {
    //        cout << ' ';
    //    }

    //    cout << '*';

    //    for (int j = 2; j < length - width / 2; j++)
    //    {
    //        cout << ' ';
    //    }

    //    cout << '*';

    //    for (int j = 1; j < width / 2; j++)
    //    {
    //        cout << ' ';
    //    }

    //    cout << '*';
    //}

    //cout << "\n";

    //cout << '*';

    //for (int i = 1; i < width / 2; i++)
    //{
    //    cout << ' ';
    //}
    //for (int i = 0; i < length; i++)
    //{
    //    cout << '*';
    //}

    //for (int i = 0; i < width / 2 - 1; i++)
    //{
    //    cout << "\n";

    //    cout << '*';

    //    for (int j = 2; j < width / 2 - i; j++)
    //    {
    //        cout << ' ';
    //    }

    //    cout << '*';

    //    for (int j = 1; j < length - width / 2 + i; j++)
    //    {
    //        cout << ' ';
    //    }

    //    cout << '*';

    //    for (int j = 2; j < width / 2 - i; j++)
    //    {
    //        cout << ' ';
    //    }

    //    cout << '*';
    //}

    //cout << "\n";

    //for (int i = 0; i < length; i++)
    //{
    //    cout << '*';
    //}

    //int num;

    //int x = 10000000;

    //int check = 2;

    //do
    //{
    //    for (num = 2; num <= check; num++)
    //    {
    //        if (!(check % num))
    //        {
    //            break;
    //        }
    //    }
    //    if (num == check)
    //    {
    //        cout << num << "\n";
    //    }
    //    check++;
    //} while (check <= x);

    int num1 = 0;
    int num2 = 10000000;

    if (num1 > num2) 
    {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    int i;
    int num;
    int digit;
    int sum;
    int count;

    for (i = num1; i <= num2; i++) 
    {

        count = 0;

        num = i;

        while (num > 0) 
        {
            ++count;
            num /= 10;
        }

        sum = 0;

        num = i;

        while (num > 0) 
        {
            digit = num % 10;
            sum = sum + pow(digit, count);
            num /= 10;
        }

        if (sum == i)
        {
            cout << i << "\n";
        }
    }
}
