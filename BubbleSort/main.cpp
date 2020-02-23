#include <iostream> //Biblioteka wejscia / wyjscia
#include <algorithm> //Potrzebna tylko do std::swap();

using namespace std;

int main()
{
    const int tab_size = 10; //Stala, rozmiar tablicy
    int tab[tab_size] = {6, 4, 9, 7, 0, 1, 3, 2, 8, 5}; //Nieposortowana tablica
    
    //Sortowanie babelkowe
    for (int i = 0; i < tab_size - 1; i++)
    {
        for (int j = 0; j < tab_size - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                swap(tab[j], tab[j + 1]);
            }
        }
    }
    
    //Petla wyswietlajace zawartosc tablicy
    for (int i = 0; i < tab_size; i++) {
        cout << tab[i] << endl;
    }
    
    //return 0; - niepotrzebne
}
