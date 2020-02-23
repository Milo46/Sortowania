#include <iostream> //Wiecie po co jest

using namespace std;

int main()
{
    const int tab_size = 10; //Tez wiecie co to robi
    int tab[tab_size] = {6, 4, 9, 7, 0, 1, 3, 2, 8, 5};//I to tez
    
    //Sortowanie przez wstawianie
    for (int i = 1; i < tab_size; i++)
    {
        int temp = tab[i];
        int x = i - 1;
        
        while (x >= 0 && temp <= tab[x])
        {
            tab[x + 1] = tab[x--];
        }
        tab[x + 1] = temp;
    }
    
    //Wyswietla elementy tablicy
    for (int i = 0; i < tab_size; i++)
    {
        cout << tab[i] << " ";
    }
  
    //return 0 - niepotrzebne
}
