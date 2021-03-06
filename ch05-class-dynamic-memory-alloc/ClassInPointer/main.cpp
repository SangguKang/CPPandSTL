#include <iostream>
#include <cstring>
using namespace std;

class String
{
public:
    String(char ch, int nSize);
    ~String();

    //void operator=(const String& s);
    String& operator=(const String& s);
    void SetData();
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

//void String::operator=(const String& s)
String& String::operator=(const String& s)
{
    cout << "Operator" << endl;

    if(&s == this)
        return *this;
        //return;

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

int main()
{
    String str1('A', 3), str2('B', 5), str3('C', 4);
    cout << "before input str1";
    str1.SetData();

    //str1 = str1;
    str1 = str2 = str3;

    cout << "after input str1";
    str1.SetData();

    return 0;
}
