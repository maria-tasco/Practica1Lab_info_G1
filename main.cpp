#include <iostream>

using namespace std;

int main()
{
    int numprob=0;
    cout<<"ingrese el numero del ejercicio: "<<endl; cin>>numprob;
    switch (numprob) {
        case 1:{
             cout<<"Escriba un programa que pida dos números A y B e imprima en pantalla el residuo de la division A/B"<<endl;
             int a=0,b=0, div=0;
             cout<<"Ingrese el primer numero"<<endl; cin>>a;
             cout<<"Ingrese el segundo numero"<<endl; cin>>b;
             div=a/b;
             cout<<"El residuo de la division "<<a<<"/"<<b<<" es: "<<div<<endl;
             break;
        }
        case 2:
        {
            cout<<"Escriba un programa que pida un numero N e imprima en pantalla si es par o impar."<<endl;
            int n=0;
            cout<<"Ingrese un numero: "<<endl; cin>>n;
            if(n%2==0)
                cout<<n<<" es par"<<endl;
            else
                cout<<n<<" es impar"<<endl;
            break;
        }
        case 3:
        {
            cout<<"Escriba un programa que pida dos números A y B e imprima en pantalla el mayor."<<endl;
            int a=0,b=0;
            cout<<"ingrese 2 numeros: "<<endl; cin>>a>>b;
            if(a>b)
                cout<<"El mayor es "<<a<<endl;
            else if(a==b)
                cout<<b<<" y "<<b<<" son iguales"<<endl;
            else
                cout<<"El mayor es "<<b<<endl;
            break;
        }
        case 4:
        {
            cout<<"Escriba un programa que pida dos numeros A y B e imprima en pantalla el menor."<<endl;

            break;
        }

        case 5:
        {
            cout<<"Escriba un programa que pida dos números A y B e imprima en pantalla la división A/B con redondeo."<<endl;
            int a=0, b=0, div=0;
            cout<<"ingrese dos numeros"<<endl; cin>>a>>b;
            break;
        }
        case 6:
        {
            cout<<"Escriba un programa que pida dos números A y B e imprima en pantalla la potencia A^B"<<endl;
            int a=0, b=0;
            cout<<"Ingrese dos numeros "<<endl; cin>>a>>b;
            int c=a;
            if(b==0)
                cout<<a<<"^"<<b<<"= 1"<<endl;
            for(int i=1;i<b;i++)
                a*=c;
            cout<<c<<"^"<<b<<"="<<a<<endl;
            break;
        }
        case 7:
        {
            cout<<"Escriba un programa que pida un número N e imprima en pantalla la suma de todos los números entre 0 y N (incluyéndose el mismo)"<<endl;
            int n=0, suma=0; //¿? Cómo hago con los números negativos, usando unsigned int no compila.
            cout<<"ingrese un numero "<<endl; cin>>n;
            if (n%2 != 0)
                for(int i=0;i<=n;i++)
                    suma+=i;
            else
               cout<<"el numero no es impar"<<endl;

            cout<<"la sumatoria desde 0 hasta "<<n<<" es: "<<suma<<endl;
            break;

        }
        case 8:
        {
            cout<<"Escriba un programa que pida un numero N e imprima en pantalla su factorial"<<endl;
            int n=0, factorial=1;
            cout<<"ingrese un numero"<<endl; cin>>n;
            for(int i=1;i<=n;i++)
                factorial*=i;
            cout<<n<<"!="<<factorial<<endl;
            break;
        }
        case 9:
        {
            cout<<"Escriba un programa que pida un número N e imprima el perímetro y área de uncírculo con radio N."<<endl;


        }

    }
    return 0;
}
