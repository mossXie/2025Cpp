#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T arr[], int size) {
    T maxNum = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }
    return maxNum;
}

template <>
const char* maxn<const char*>(const char* arr[], int size) {
    int len = strlen(arr[0]);
    const char* maxStr = arr[0];
    for (int i = 1; i < size; i++) {
        int clen = strlen(arr[i]);
        if (clen > len) {
            len = clen;
            maxStr = arr[i];
        }
    }
    return maxStr;
}

/* int main()
{
    using namespace std;
    int arri[6] = {1, 2, 5, 3, 1, -1};
    double arrd[4] = {2.3, -1.3, 8.7, 4.5};
    const char * arrc[5] = {"first", "second", "third", "long string", "another string"};

    cout << "max of integer = " << maxn(arri, 6) << endl;
    cout << "max of double = " << maxn(arrd, 4) << endl;
    cout << "max string is " << maxn(arrc, 5) << endl;

    return 0;
} */