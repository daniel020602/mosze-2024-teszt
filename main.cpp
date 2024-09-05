#include <iostream>

constexpr int N_ELEMENTS = 100;
//több helyről hiányzott a ';', fasz se írja le mindet
int main()
{
    int *b = new int[N_ELEMENTS]; // _ hiányzott
    std::cout << '1-100 ertekek duplazasa';
    for (int i = 0;i<N_ELEMENTS;i++) // for ciklus nem volt normálisan megírva
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:";
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
