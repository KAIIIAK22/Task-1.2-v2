#include <iostream>
using namespace std;

   int main()
   {
       unsigned  int a ;
       cout<<"Vasha zarplata($): ";
       cin >>a;
       string st;
       st= "Rabotai bolshe";
       if (a>1000)
        {
           st= "Horosho";
           if (a>1000000) st= "Ti millioner!";
        }
       cout <<st<<"...no ti molodec"<<endl;
       return 0;
   }
