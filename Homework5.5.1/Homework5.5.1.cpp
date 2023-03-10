// Homework5.5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

template <typename T>
T squaring(T a)
{
    return a * a;
}

template <typename T>
std::vector<T> squaring(const std::vector<T> &vi) 
{
    for (int a = 0; a < vi.size(); ++a)
    {
        vi[a] = vi[a] * vi[a];
    }
    return vi;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    int num = 4;
    
    std::cout << "[IN]: " << num << std::endl;
    std::cout << "[OUT]: " << squaring(num) << std::endl;

    std::vector <int> arr{ -1, 4, 8 };

    std::cout << "[IN]: ";
    for (int a = 0; a < arr.size(); ++a)
    {
        std::cout << arr[a] << "\t";
    }

    std::cout << std::endl;

    std::cout << "[OUT]: ";
    for (int a = 0; a < arr.size(); ++a)
    {
        std::cout << squaring(arr[a]) << "\t";
    }

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
