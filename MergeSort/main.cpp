#include <iostream>

using namespace std;

void merge(int tab[], int left, int middle, int right)
{
    const int const_n1 = middle - left + 1;
    const int const_n2 = right - middle;
    
    int L[const_n1], M[const_n2];
    
    for (int i = 0; i < const_n1; i++)
        L[i] = tab[left + i];
    for (int i = 0; i < const_n2; i++)
        M[i] = tab[middle + 1 + i];
    
    int i = 0, j = 0, k = left;
    
    while (i < const_n1 && j < const_n2)
    {
        if (L[i] <= M[j])
        {
            tab[k++] = L[i++];
        }
        else
        {
            tab[k++] = M[j++];
        }
    }
    
    while (i < const_n1)
        tab[k++] = L[i++];
    
    while (j < const_n2)
        tab[k++] = M[j++];
}

void mergeSort(int tab[], int left, int right)
{
    if (left < right)
    {   
        int middle = (left + right) / 2;
        
        mergeSort(tab, left, middle);
        mergeSort(tab, middle + 1, right);
        
        merge(tab, left, middle, right);
    }
}

int main()
{
    const int tab_size = 10;
    int tab[tab_size] = {6, 4, 9, 7, 0, 1, 3, 2, 8, 5};
    
    mergeSort(tab, 0, tab_size - 1);
    
    for (int i = 0; i < tab_size; i++)
    {
        cout << tab[i] << " ";
    }
}
