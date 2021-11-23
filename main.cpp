#include <iostream>
using namespace std;
#include <ctime>
#include <cmath>
int ARRAY_SIZE = 5000;
void arrayStatic();
void arrayDynamic();
void arrayStack();

int main()
{

    arrayStatic();
    arrayStack();
    arrayDynamic();
}

void arrayStatic()
{
    clock_t st;
    st = clock();
    static int arr[5000];

    for (int i = 0; i < 5000; i++)
    {
        arr[i] = 1;
    }

    st = clock() - st;
    cout << "Static Array took" << (float)st / CLOCKS_PER_SEC << "seconds" << endl;
}

void arrayStack()
{

    int arr[ARRAY_SIZE];
    clock_t st;
    st = clock();

    for (int i = 0; i < 5000; i++)
    {
        arr[i] = 1;
    }

    st = clock() - st;
    cout << "Array Stack took" << (float)st / CLOCKS_PER_SEC << "seconds" << endl;
}

void arrayDynamic()
{
    int *arr = new int[ARRAY_SIZE];
    clock_t st;
    st = clock();

    for (int i = 0; i < 5000; i++)
    {
        arr[i] = 1;
    }

    st = clock() - st;
    cout << "Dynamic Array took" << (float)st / CLOCKS_PER_SEC << "seconds" << endl;
}