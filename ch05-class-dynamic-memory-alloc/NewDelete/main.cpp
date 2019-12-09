#include <iostream>

using namespace std;

int main()
{
    #if 0   //wrong
    int nLength;
    cin >> nLength;
    int nArray[nLength];
    #else
    int *pBuffer;
    int nLength;
    cout << "number of allocated memory in the heap: ";
    cin >> nLength;
    pBuffer = new int[nLength];
    for(int i = 0; i < nLength; i++)
        pBuffer[i] = i+1;
    for(int i = 0; i < nLength; i++)
        cout << pBuffer[i] << " ";
    cout << endl;
    delete[] pBuffer;
    #endif
    return 0;
}
