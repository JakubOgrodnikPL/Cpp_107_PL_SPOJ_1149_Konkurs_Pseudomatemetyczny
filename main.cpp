#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int liczba_testow, licznik;
    cin >> liczba_testow;
		for (int i = 0; i < liczba_testow; i++)
		{
      int liczba_uczestnikow;
      cin >> liczba_uczestnikow;
      int tab[liczba_uczestnikow];
      for (int i = 0; i < liczba_uczestnikow; i++)
      {
        cin >> tab[i];
      }
      sort(tab, tab + liczba_uczestnikow);
      int max = tab[liczba_uczestnikow-1];
      licznik = 0;
      for (int i = 0; i < liczba_uczestnikow; i++)
      {
        if(tab[i]==max)
        {
          licznik++;
        }
      }
      int wynik_tab[liczba_uczestnikow];
      for (int i = 0; i < liczba_uczestnikow; i++)
      {
        if(i<licznik)
        {
          wynik_tab[i] = max;
        }
        else
        {
          wynik_tab[i] = tab[i-licznik];
        }
      }
      for (int i = 0; i < liczba_uczestnikow; i++)
      {
        cout << wynik_tab[i] << " ";
      }
      cout << '\n';
		}
    return 0;
}
