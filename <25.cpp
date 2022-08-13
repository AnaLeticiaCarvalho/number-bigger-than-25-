#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, dobro;
    cout << "Digite um número:";
    cin >> num;
    dobro = num * num;
    cout << "O quadrado de " << num << " é igual a: " << dobro;
    if (dobro>25)
    {
       cout << "\nNúmero maior que 25";
    }
    
}