#include <iostream>
using namespace std;
template <typename T>
void swap(T *a, T *b)
{
    T temp =*a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x1 , y1;
    cout << "Enter 2 integers\n";
    cin >> x1 >> y1;
    float x2 , y2;
    cout << "Enter 2 floats\n";
    cin >> x2 >> y2;
    cout << "Before Swap :" << endl;
    cout << "x1 =" << x1 << endl << "y1 =" << y1 << endl;
    cout << "x2 =" << x2 << endl << "y2 =" << y2 << endl;
    swap(&x1, &y1);
    swap(&x2, &y2);
    cout << "After Swap :" << endl;
    cout << "x1 =" << x1 << endl << "y1 =" << y1 << endl;
    cout << "x2 =" << x2 << endl << "y2 =" << y2 << endl;
    return 0;
}
