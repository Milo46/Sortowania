#include <iostream>
#include <algorithm>

using namespace std;

//Funkcja zwracajaca index pivot'a (dzielnika)
int partition(int tab[], int left, int right)
{
    int pivot = tab[right];
    int temp = left - 1;
    
    for (int i = left; i < right; i++)
    {
        if (tab[i] <= pivot)
        {
            temp++;
            swap(tab[temp], tab[i]);
        }
    }
    
    swap(tab[temp + 1], tab[right]);
    return temp + 1;
}

void quickSort(int tab[], int left, int right)
{
    if (left < right)
    {
        int pivot = partition(tab, left, right);
        
        //Rekurencyjne sortowanie podzielonej tablicy wedlug pivot'a
        quickSort(tab, left, pivot - 1);
        quickSort(tab, pivot + 1, right);
    }
}

int main()
{
    const int tab_size = 10;
    int tab[tab_size] = {6, 4, 9, 7, 0, 1, 3, 2, 8, 5};
    
    quickSort(tab, 0, tab_size - 1);
    
    for (int i = 0; i < tab_size; i++)
    {
        cout << tab[i] << " ";
    }
}
