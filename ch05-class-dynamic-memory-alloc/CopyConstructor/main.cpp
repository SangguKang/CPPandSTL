#include <iostream>
#include <cstring>

using namespace std;

class String
{
public:
    String(char ch, int nSize);
    ~String();
    String& operator=(const String& s);
    void SetData();
    String(const String& s);    //copy constructor
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
}
String::~String()
{
    delete pBuffer;
}
String& String::operator=(const String& s)
{
    cout << "operator" << endl;
    if(&s == this)
        return *this;
    delete pBuffer;
    nLength = s.nLength;
    pBuffer = new char[nLength + 1];
    strcpy(pBuffer, s.pBuffer);
    return *this;
}
void String::SetData()
{
    cout << endl;
    cout << "pBuffer: " << this->pBuffer << endl;
    cout << "nLength: " << this->nLength << endl;
}

String::String(const String& s)
{
    nLength = s.nLength;
    pBuffer = new char[nLength + 1];
    strcpy(pBuffer, s.pBuffer);
}

int main()
{
    String str1('A',3);
    String str2 = str1;
    cout << "After input str2";
    str2.SetData();

    return 0;
}
