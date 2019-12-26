#ifndef CPARAM_H
#define CPARAM_H

template <class T, int i>
class CParam
{
    public:
        CParam();
        virtual ~CParam();
        int set(T a, int b);
        T get(int a) const;

    protected:

    private:
        T TArray[i];
        int size;
};

#endif // CPARAM_H
