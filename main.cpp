#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];             //NELEMENTS forma nem megfelelő helyette N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa";    //idézőjelben kell lennie a szövegnek
    for (int i = 0; i < N_ELEMENTS; i++)                          // megkell adni, hogy meddig megyünk i-vel és milyen lépésközzel
    {
        b[i] = b[i] * 2;                          // nem i*2-vel egyenlő a b[i] hanem b[i]*2 vel
    }
    for (int i = 0; i < N_ELEMENTS; i++)                      // nincs megadva meddig megyünk i-vel
    {
        std::cout << "Ertek:" << b[i] <<std:: endl;                           // az érték maga nem volt kiíratva
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                                               
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];                                         // ";" lemaradt a végéről
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
