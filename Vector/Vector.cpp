#include <iostream>
#include <random>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ukrainian");
    vector<int> g1, g2, g3;
    random_device random_device;
    mt19937 generator(random_device());
    uniform_int_distribution<> distribution(-99, 99);
    for (int i = 0; i < 10; i++)
    {
        g1.push_back(distribution(generator));
        g2.push_back(distribution(generator));
    }
    cout << "First vector : ";

    for (auto i = g1.begin(); i != g1.end() - 1; i++)
    {
        cout << *i << " ";
        g3.push_back(*i);
    }
    cout << endl;
    cout << "Second vector : ";

    for (auto i = g2.begin(); i != g2.end() - 1; i++)
    {
        cout << *i << " ";
        g3.push_back(*i);
    }

    cout << endl;
    cout << "Final vector: ";
    for (auto i = g3.begin(); i != g3.end() - 1; i++)
    {
        cout << *i << " ";
    }

    return 0;
}