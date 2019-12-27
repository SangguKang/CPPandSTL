#include <iostream>
#include <map>

using namespace std;

struct PhoneAddr
{
    string name;
    int phonenum;
} arPerson[] =
{
    {"��â��", 1234}, {"����ȭ", 5678}, {"���ּ�", 4587}, {"�ں���", 2345}
};

int main()
{
    map<string, int> person;
    map<string, int>::iterator it;
    int i;
    string name;

    for(i = 0; i < sizeof(arPerson)/sizeof(arPerson[0]); i++)
    {
        person[arPerson[i].name] = arPerson[i].phonenum;
    }

    for(;;)
    {
        cout << "�̸� �Է�: ";
        cin >> name;
        if(name == "q") break;
        it = person.find(name);
        if(it == person.end())
        {
            cout << "�׷� ����� �����ϴ�." << endl;
        }
        else
        {
            cout << name << "�� ��ȭ��ȣ�� " << it->second << "�Դϴ�." << endl;
        }
    }

    return 0;
}
