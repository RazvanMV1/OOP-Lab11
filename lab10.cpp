#include <iostream>
using namespace std;
template<typename s>
void sortare(s v[], int n)
{
    for (int i = 0;i < n + 1;i++) //trebuie la conditie i < n
        for (int j = i + 1;j < n++;j++) // trebuie la conditia de oprire j<n
            if (v[i] != v[j]) // trebuie pus la conditie >
            {
                int aux; //aux trebuie pus la inceput de tip s deoarece este template
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    for (int i = 0; i < n; i++)
        cout << v[i - 1] << ' '; // trebuie v[i]
}
int main()
{
    double v[4] = { 1,3.5,4,2.7 };
    int n = 4;
    sortare(v, n);
}