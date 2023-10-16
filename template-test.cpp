#include <iostream>
using namespace std;

template <typename T>
T maximum(T nb1, T nb2, T nb3);

int main() {

    int nb1, nb2, nb3;
    cout << "Enter 3 integers : ";
    cin >> nb1 >> nb2 >> nb3;
    cout << "The maximum tree integers is : " << maximum(nb1, nb2, nb3) << endl;

    double db1, db2, db3;
    cout << "Enter 3 doubles : ";
    cin >> db1 >> db2 >> db3;
    cout << "The maximum tree doubles is : " << maximum(db1, db2, db3) << endl;

    return 0;
}

template <typename T>
T maximum(T nb1, T nb2, T nb3) {
    
    T max{nb1};

    if (nb2 > max)
        max = nb2;

    if (nb3 > max)
        max = nb3;

    return max;
}