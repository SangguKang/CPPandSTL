#include <iostream>
#include <cstring>
using namespace std;

class String
{
public:
    String(char ch, int nSize);
    ~String();
private:
    int nLength;
    char *pBuffer;
};

String::String(char ch, int nSize)
{
    nLength = nSize;
    pBuffer = new char[nLength + 1];
    memset(pBuffer, ch, nLength);
    pBuffer[nLength] = '\0';
    cout << "pBuffer: " << pBuffer << endl;
    cout << "nLength: " << nLength << endl;
}
String::~String()
{
    delete pBuffer;
}

int main()
{
    String str1('A', 5);

    return 0;
}
