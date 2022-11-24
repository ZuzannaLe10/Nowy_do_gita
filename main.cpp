#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> my_wektor;
    int temp = 0;
    int j = 0;
    fstream plik;
    plik.open("boki_a.txt");
    if (plik.is_open())
    {
        while (!plik.eof())
        {
            plik >> temp;
            my_wektor.push_back(temp);
            j++;
        }

        for (int i = 0; i < my_wektor.size(); i++)
        {
            cout << my_wektor[i] << endl;//wyswietla wartosci z plikow
        }
    }
    plik.close();
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> my_wektor2;
    fstream plik2;
    plik2.open("boki_b.txt");
    if (plik2.is_open())
    {
        while (!plik2.eof())
        {
            plik2 >> temp;
            my_wektor2.push_back(temp);
            j++;
        }

        for (int i = 0; i < my_wektor2.size(); i++)
        {
            cout << my_wektor2[i] << endl;//wyswietla wartosci z plikow
        }
    }
    plik2.close();
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int pole;
    int obwod;

    ofstream wynik;
    wynik.open("wynik.txt");
    if (wynik.is_open())
    {
        for (int i = 0; i < my_wektor2.size(); i++)
        {
            pole = my_wektor[i] * my_wektor2[i];//pole
            wynik << i << " Pole: " << pole << endl;//wyswietlanie wyniku w osobnym pliku
        }

        for (int i = 0; i < my_wektor2.size(); i++)
        {
            obwod = (2 * my_wektor[i]) + (2 * my_wektor2[i]);//obwod
            wynik << i << " Obwod: " << obwod << endl;//wyswietlanie wyniku w osobnym pliku
        }
    }
    wynik.close();
}