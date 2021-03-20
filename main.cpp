#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int numprob=0, op=0; // (numprob) guardará el numero del ejercicio o problema. Y (op) nos servirá para elegir entre ver los ejercicios ó problemas.
    cout<<"Ingrese 1 para ver los ejercicios o 0 (cero) para ver los problemas"<<endl; cin>>op; //aquí restringimos los valores de op al usuario, dandole así dos opciones.
    if (op==1){ //después de tomar el dato, se genera un condicional para que dependiendo del dato ingresado se proceda el bloque de los ejercicios o el de los problemas.
        cout<<"ingrese una opcion desde 1 a 30 o 0 (cero) para salir "<<endl; cin>>numprob; //ya habiendo elejido la opcion d elos ejercicios ahora si nos interesa saber que numero de ejercicio queremos ver.
        while(numprob!=0) //usamos este bucle while para que mientras que el dato sea dif de 0 se repita la opción de mirar los ejercicios y no tener que salir y volver a ejecutar.
        {
            switch (numprob) //evaluamos el numero de problema para ver el caso.
            {
                case 1:
                {
                     cout<<"Escriba un programa que pida dos números A y B e imprima en pantalla el residuo de la division A/B"<<endl;
                     int a=0,b=0, div=0;
                     cout<<"Ingrese el primer numero"<<endl; cin>>a;
                     cout<<"Ingrese el segundo numero"<<endl; cin>>b;
                     div=a/b;
                     cout<<"El residuo de la division "<<a<<"/"<<b<<" es: "<<div<<endl;

                }
                break;
                case 2:
                {
                    cout<<"Escriba un programa que pida un numero N e imprima en pantalla si es par o impar."<<endl;
                    int n=0;
                    cout<<"Ingrese un numero: "<<endl; cin>>n;
                    if(n%2==0)
                        cout<<n<<" es par"<<endl;
                    else
                        cout<<n<<" es impar"<<endl;

                }
                break;
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

                }
                break;
                case 4:
                {
                    cout<<"Escriba un programa que pida dos numeros A y B e imprima en pantalla el menor."<<endl;
                    int a=0,b=0;
                    cout<<"ingrese 2 numeros: "<<endl; cin>>a>>b;
                    if(a<b)
                        cout<<"El menor es "<<a<<endl;
                    else if(a==b)
                        cout<<b<<" y "<<b<<" son iguales"<<endl;
                    else
                        cout<<"El menor es "<<b<<endl;

                }
                break;
                case 5:
                {
                    cout<<"Escriba un programa que pida dos números A y B e imprima en pantalla la división A/B con redondeo."<<endl;
                    int a=0, b=0, div=0;
                    cout<<"ingrese dos numeros"<<endl; cin>>a>>b;
                    div=round(a/b);
                    cout<<div<<endl;

                }
                break;
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

                }
                break;
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


                }
                break;
                case 8:
                {
                    cout<<"Escriba un programa que pida un numero N e imprima en pantalla su factorial"<<endl;
                    int n=0, factorial=1;
                    cout<<"ingrese un numero"<<endl; cin>>n;
                    for(int i=1;i<=n;i++)
                        factorial*=i;
                    cout<<n<<"!="<<factorial<<endl;

                }
                break;
                case 9:
                {
                    cout<<"Escriba un programa que pida un número N e imprima el perímetro y área de uncírculo con radio N."<<endl;


                }
            default: //se usa para que si el usuario ingresa un numero que no corresponde a ningún caso o es diferente de 0, le haga saber al usuario que es aopción no es valida.
            cout<<"opcion no valida."<<endl;
            break;

            }
            cout<<"ingrese una opcion desde 1 a 30 o 0 (cero) para salir "<<endl; cin>>numprob; /*como estoy usando el while, después de haber ejecutado un caso sale del switch y
           se viene a esta parte (dentro del while) donde se le pedira al usuario si quiere seguir dentro del bucle y ver otro ejercicio o desea salir.*/
        }

    }
    else //si la opción no es 1 se vendrá aquí y se ejecutará el bloque de los problemas. El cuál tendra la misma estructara que el bloque de los ejercicios.
    {
        cout<<"ingrese una opcion desde 1 a 17 o 0 (cero) para salir "<<endl; cin>>numprob;
        while(numprob!=0)
        {
            switch (numprob)
            {
                //desarrollo de los case para los problemas de la misma manera que el bucle anterior.
            cout<<"en proceso"<<endl;
            }
        }
    }
    return 0;
}
