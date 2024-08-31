#include <iostream>
#include <cstring>

template<typename T,size_t S>
class Array
{
public: 
    int Size() const {return S;}

    // operator overloading for the array index operator
    T& operator[](size_t index){return m_Data[index];}
    const T& operator[](size_t index) const {return m_Data[index];}

    //retueen the data
    T* Data() 
    {
        return m_Data;
    }

    const T* Data() const
    {
        return m_Data;
    }


private:
    T m_Data[S];
};

int main()
{
    int size = 5;
    Array<int, 5> data;
    Array<std::string, 10> stringArray;

    memset(data.Data(), 0, data.Size() * sizeof(int));

    for(int i = 0; i < data.Size(); i ++)
    {
        std::cout << data[i] << "\n";
    }
    std::cin.get();
}
