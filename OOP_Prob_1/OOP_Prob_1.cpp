#include <iostream>
using namespace std;

int /*void*/ f(int arr[], int n)
{ 
    int y;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            y = arr[i];
        }
        else
        {
            y = -arr[i];
        }
        /*cout << "Вiдповiдь:" << y << endl;*/
    }
    return y;
}

int main()
{
    setlocale(LC_ALL, "ukr");

    int size,A;
    cout << "Введiть кiлькiсть чисел якi будуть в масивi" << endl;
    cin >> size;
    int *arr = new int[size];

    cout << "Заповнiть масив" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> A;
        arr[i] = A;
    }
    int result = f(arr, size); 
    cout << "Повернене значення: " << result << endl; 
    delete[] arr; 
}

