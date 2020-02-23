#include <iostream>
#include <algorithm>
 
using namespace std;

int main()
{
    const int tab_size = 10;
    int tab[tab_size] = {6, 4, 9, 7, 0, 1, 3, 2, 8, 5};
    
    //Sortowanie przez wybieranie
    for (int i = 0 ; i < tab_size - 1; i++)
    {
        int minimal_value_index = i; //Index najmniejszego elementu
 
        for (int j = i + 1; j < tab_size; j++)
        {
            if (tab[j] < tab[minimal_value_index])
            {
                minimal_value_index = j;
            }
        }
 
        swap(tab[minimal_value_index], tab[i]);
    }
 
    for (int i = 0; i < tab_size; i++)
    {
        cout << tab[i] << " ";
    }
}
