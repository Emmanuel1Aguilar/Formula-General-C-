#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
using namespace std;
int main ()
{
    int valor_a, valor_b, valor_c, x1, x2;
    int total_1; 
    double disc;
    cout<<"Ingrese el coeficiente de a: "<<endl;
    cin>>valor_a;
    cout<<"Ingresa el coeficiente de b: "<<endl;
    cin>>valor_b;
    cout<<"Ingresa el valor de c: "<<endl;
    cin>>valor_c;
    disc= pow(valor_b,2)-4*valor_a*valor_c;
    x1=(-valor_b+sqrt(disc))/(2*valor_a);
    x2=(-valor_b-sqrt(disc))/(2*valor_a);
    cout<<"El resultado es: "<<endl;
    cout<<"x1="<<x1<<endl;
    cout<<"x2="<<x2<<endl;
    getch();
    return 0;
}
