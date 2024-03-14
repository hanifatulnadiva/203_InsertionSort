// 203_InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int n;
int i;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";

        }
    }
    cout << endl;
    cout << "===============" << endl;
    cout << "masukan Elemen Array" << endl;
    cout << "===============" << endl;

}

void insertionSort() {
    int j, temp;
    int arr[20];

    for (i = 1; i <= n - 1; i++) {  //step 1
        temp = arr[i];    //step 2

        j = i - 1; //step 3

        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr[j + 1] = arr[j]; // step 4a
            j--; // step 4b

        }
        arr[j + 1] = temp;    //step 5
    }
}

int main()
{
    std::cout << "Hello World!\n";
}
