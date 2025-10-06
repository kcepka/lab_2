#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
     // Ввід змінних
     float R;
     float r;
     float h;
     const float pi=3.14159;
     printf ("Введіть внутрішній радіус основи циліндра: ");
     scanf("%f",&R);
     printf ("Введіть внутрішній радіус основи циліндра: ");
     scanf ("%f",&r);
     printf ("Введіть висоту циліндра: ");
     scanf("%f",&h);
     // Функції
     float F1=2*pi*h*(R+r);
     float F2=2*pi*R*(R+r+h);
     float F3=pi*h*(pow(R,2)-pow(r,2));
     // Вибір операції
      int Ss, S, V, Q;
      char choice;

      cout <<"\n Що потрібно знайти?"
           <<"\n Ss) Радіус циліндра"
           <<"\n S) Площа бічної поверхні циліндра"
           <<"\n V) Площа повної поверхні циліндра"
           <<"\n Q) Закрити програму";
      cin>>choice;
      choice = toupper(choice);
      
      switch(choice){
          case 'Ss':
             cout<<"Результат: "<<F1<<endl;break;
          case 'S':
             cout<<"Результат: "<<F2<<endl;break;
          case 'V':
             cout<<"Результат: "<<F2<<endl;break;
          case 'Q':
             cout<<"Вихід з програми"<<endl;break;
          default:
             cout<<"Такої функції немає"<<endl;
           }

    return 0;
}
