#include <iostream>

using namespace std;

template <class T>
class CStack
{
    public:
        CStack(int s);
        ~CStack();
        void push(T a);
        T pop(void);
        int size(void) const;

    protected:

    private:
        T* v;
        T* p;
        int sz;
};

template <class T>
CStack<T>::CStack(int s)
{
    v = p = new T[sz = s];
}

template <class T>
CStack<T>::~CStack()
{
    delete[] v;
}

template <class T>
void CStack<T>::push(T a)
{
    *p++ = a;
}

template <class T>
T CStack<T>::pop(void)
{
    return *--p;
}

template <class T>
int CStack<T>::size(void) const
{
    return p-v;
}


int main()
{
    CStack<int> si(10);

    int i;
    for(i=0; i<10; i++)
        si.push(i);

    for(i=0; i<10; i++)
        cout << si.pop() << " ";
    cout << endl;

    return 0;
}
