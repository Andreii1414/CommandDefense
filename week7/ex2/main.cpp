
#include <iostream>

template <class T, int size>
class Vector
{
    T* v = new T[size];
    int vSize = size;
    int count;
public:
    Vector() : count(0) {};
    void Push(const T& value)
    {
        v[count++] = value;
    }
    void Print() const
    {
        for (int i = 0; i < count; i++)
            std::cout << v[i] <<' ';
        std::cout << std::endl;
    }
    T& Pop() { return v[count - 1]; }
    void Delete(const T& index)
    {
        for (int i = index; i < count; i++)
        {
            v[i] = v[i + 1];
        }
        count--;
    }

    void Sort(void* callback(T, T))
    {
        bool c;
        for(int i = 0; i < count - 1; i++)
            for (int j = i + 1; j < count; j++)
            {
                if (callback == nullptr)
                    if (v[i] > v[j])
                    {
                        int x = v[i];
                        v[i] = v[j];
                        v[j] = x;
                    }
                    else;
                else {
                      c = callback(v[i], v[j]);
                      if (c)
                        {
                         int x = v[i];
                         v[i] = v[j];
                         v[j] = x;
                        }
                     }
            }
    }

    void Insert(const T& index, const T& value)
    {
        count++;
        for (int i = count - 1; i >= index; i--)
        {
            v[i] = v[i - 1];
        }
        v[index] = value;
    }
    T& Get(const T& value) const
    {
        for (int i = 0; i < count; i++)
        {
            if (v[i] == value)
                return i;
        }
    }
    void Set(const T& index, const T& value)
    {
        v[index] = value;
    }
    T& FirstIndexOf(const T& value, void* callback(T, T)) const
    {
        bool c;
        for (int i = 0; i < count; i++)
        {
            if (callback == nullptr)
            {
                if (v[i] == value) return i;
            }
            else {
                  c = callback(v[i], value);
                  if (c)
                      return i;
                 }
        }
    }
};

int main()
{
    Vector <int, 100> vect;
    for (int tr = 10; tr >= 1; tr--)
        vect.Push(tr);
    vect.Print();
    vect.Delete(5);
    vect.Print();
    vect.Insert(2, 15);
    vect.Print();
    vect.Push(20);
    vect.Push(2);
    vect.Push(-5);
    vect.Print();
    vect.Set(7, -10);
    vect.Print();
    vect.Push(0);
    vect.Sort(nullptr);
    vect.Print();
    vect.Push(8);
    vect.Print();
    std::cout << vect.Pop()<<std::endl;
    std::cout << vect.FirstIndexOf(20, nullptr);
}