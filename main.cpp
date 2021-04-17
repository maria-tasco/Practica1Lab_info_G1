#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int a=0,b=0,n=0;
    unsigned short numprob=0, op=0;         // (numprob) guardará el numero del ejercicio o problema. Y (op) nos servirá para elegir entre ver los ejercicios ó problemas.
    cout<<"Ingrese 1 para ver los ejercicios o 0 (cero) para ver los problemas"<<endl;
    cin>>op;
    if (op==1){                             //después de tomar el dato, se genera un condicional para que dependiendo del dato ingresado se proceda el bloque de los ejercicios o el de los problemas.
        cout<<"ingrese una opcion desde 1 a 30 para ver los ejercicios o 0 (cero) para salir "<<endl;
        cin>>numprob;                       //ya habiendo elejido la opcion d elos ejercicios ahora si nos interesa saber que numero de ejercicio queremos ver.
        while(numprob!=0)                   //usamos este bucle while para que mientras que el dato sea dif de 0 se repita la opción de mirar los ejercicios y no tener que salir y volver a ejecutar.
        {
            switch (numprob)
            {
                case 1:
                {
                     cout<<"Escriba un programa que pida dos números A y B e imprima en pantalla el residuo de la division A/B"<<endl;
                     int div=0;
                     cout<<"Ingrese el primer numero"<<endl; cin>>a;
                     cout<<"Ingrese el segundo numero"<<endl; cin>>b;
                     if(b==0) cout<<"divison entre 0 no esta definida"<<endl;
                     else div=a/b;
                     cout<<"El residuo de la division "<<a<<"/"<<b<<" es: "<<div<<endl;


                }
                break;
                case 2:
                {
                    cout<<"Escriba un programa que pida un numero N e imprima en pantalla si es par o impar."<<endl;
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
                    cout<<"ingrese 2 numeros: "<<endl; cin>>a>>b;
                    if(a>b)
                        cout<<"El mayor es "<<a<<endl;
                    else if(a==b)
                        cout<<a<<" y "<<b<<" son iguales"<<endl;
                    else
                        cout<<"El mayor es "<<b<<endl;

                }
                break;
                case 4:
                {
                    cout<<"Escriba un programa que pida dos numeros A y B e imprima en pantalla el menor."<<endl;
                    cout<<"ingrese 2 numeros: "<<endl; cin>>a>>b;
                    if(a<b)
                        cout<<"El menor es "<<a<<endl;
                    else if(a==b)
                        cout<<a<<" y "<<b<<" son iguales"<<endl;
                    else
                        cout<<"El menor es "<<b<<endl;

                }
                break;
                case 5:
                {
                    cout<<"Escriba un programa que pida dos números A y B e imprima en pantalla la división A/B con redondeo."<<endl;
                    int ent=0;
                    float div=0;
                    cout<<"ingrese dos numeros"<<endl; cin>>a>>b;
                    div=float(a)/b; //div ordinaria
                    ent=a/b; //div entera
                    if(div-ent>= 0.5 && div>0) ent ++;
                    else if (div-ent<=-0.5 && div<0) ent --;
                    cout<<a<<"/"<<b<<"= "<<ent<<endl;

                }
                break;
                case 6:
                {
                    cout<<"Escriba un programa que pida dos números A y B e imprima en pantalla la potencia A^B"<<endl;
                    cout<<"Ingrese dos numeros "<<endl; cin>>a>>b;
                    int c=a;
                    if(b==0)
                        cout<<a<<"^"<<b<<"= 1"<<endl; //caso trivial
                    else if (b>0)
                    {
                        for(int i=1;i<b;i++)
                            a*=c;                     //lo que se hizo fue igual ina variable c=a.
                        cout<<c<<"^"<<b<<"= "<<a<<endl;
                    }
                    else  //caso de b negativo.
                    {
                        for(int i=1;i<(-b);i++)
                            a*=c;
                        cout<<c<<"^"<<b<<"= "<<1/float(a)<<endl;
                    }

                }
                break;
                case 7:
                {
                    cout<<"Escriba un programa que pida un número N e imprima en pantalla la suma de todos los números entre 0 y N (incluyéndose el mismo)"<<endl;
                    int suma=0;
                    cout<<"ingrese un numero "<<endl; cin>>n;
                    if (n<0) cout<<"numero no valido"<<endl;
                    else {
                        for(int i=0;i<=n;i++)
                            suma+=i;}
                    cout<<"la sumatoria desde 0 hasta "<<n<<" es: "<<suma<<endl;
                }
                break;
                case 8:
                {
                    cout<<"Escriba un programa que pida un numero N e imprima en pantalla su factorial"<<endl;
                    long double /*n=0,*/ factorial=1; //puede tomar valores grandes.
                    cout<<"ingrese un numero"<<endl; cin>>n;
                    if(n>=0){
                        for(int i=1;i<=n;i++)
                            factorial*=i;
                        cout<<n<<"!="<<factorial<<endl;
                    }
                    else
                    {
                        for(int i=1;i<=(-n);i++)
                            factorial*=i;
                        cout<<n<<"!="<<-factorial<<endl;
                    }

                }
                break;
                case 9:
                {
                    cout<<"Escriba un programa que pida un número N e imprima el perímetro y área de uncírculo con radio N."<<endl;
                    //unsigned int r=0;
                    float pi=3.1416;
                    cout<<"ingrese un numero"<<endl; cin>>n;
                    if(n>0)
                    {
                        cout<<"Perimetro: "<<2*pi*n<<endl;
                        cout<<"Area: "<<pi*(n*=n)<<endl;
                    }
                    else if(n<0)
                    {
                        cout<<"Perimetro: "<<2*pi*(-n)<<endl;
                        cout<<"Area: "<<pi*(-(n*=n))<<endl;
                    }

                }
                break;
                case 10:
                {
                    cout<<"Escriba un programa que pida un número N e imprima en pantalla todos los multiplos de dicho número entre 1 y 100"<<endl;
                    cout<<"ingrese un numero"<<endl; cin>>n;
                    int multiplos=0;
                    a=1;
                    while(multiplos<100)
                    {
                        multiplos=n*a;
                        ++a;
                        if (multiplos<=100)
                        cout<<multiplos<<endl;
                    }   
                }
                break;
                 case 11:
                {
                    cout<<"Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN"<<endl;
                    cout<<"ingrese un numero"<<endl; cin>>n;
                    for(int i=1;i<=10;i++)
                            cout<<i<<"*"<<n<<"= "<<i*n<<endl;
                }
                break;
            case 12:
            {
                cout<<"Escriba un programa que pida un número N e imprima todas las potencias desde N1 hasta N5"<<endl;
                cout<<"ingrese un número: "<<endl; cin>>n;
                int x=1;
                for(int i=0; i<5;i++)
                {
                    x=n*x;
                    cout<<x<<endl;
                }

            }
            break;
            case 13:

            {
                cout<<"Escriba un programa que pida un número N e imprima todos los divisores de N."<<endl;
                int aux=0;
                cout<<"ingrese un numero"; cin>>n;
                for (int i=1;i<=n;i++)
                {
                    aux=n%i;
                    if(aux==0)
                    {
                        cout<<"los divisores de n son: "<<i<<endl;
                    }
                }

            }
            break;
            case 14:
            {
                cout<<"Escriba un programa que imprima dos columnas paralelas, una con los números del 1 al 50 y otra con los números del 50 al 1"<<endl;
                for(int i=1;i<=50;i++){
                    cout<<i<<"\t";
                    cout<<51 - i<<"\n";
                }


            }
            break;
            case 15:
            {
                cout<<"Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla la suma de todos los numero ingresados"<<endl;
                int suma=0;

                cout<<"ingrese los numeros: "<<endl; cin>>n;
                if (n ==0)
                {
                    cout<<"no hay promedio de numeros"<<endl;
                }
                else {
                while(n!=0)
                {
                 suma+=n;
                 cout<<"ingrese los numeros: "<<endl; cin>>n;
                }
                 cout<<suma<<endl;
                 return 0;
                    }
            }
            break;
            case 16:
            {
                cout<<"escriba un programa que pida constantemente numeros hasta que ingrese el numero cero e imprima en pantalla el promedio de  los numeros ingresados(excluyendo el cero)"<<endl;
                    int num=1;
                    int cont=0;
                    float acum=0;

                    cout<<"ingrese los numeros(ingresa cero para salir): "<<endl;
                    cin>>num;
                    if(num==0)
                        cout<<"no se ingresaron numeros para hallar el promedio"<<endl;
                    else{
                        while (num!=0){
                           acum = acum + num;
                           cont = cont + 1;
                         cout<<"ingrese los numeros(ingresa cero para salir): "<<endl;
                         cin>>num;
                         }
                         cout<<"el promedio de los "<<cont<<"numeros ingresados es: "<< acum / cont<<endl;
                      }
            }
            break;
            case 17:
            {
                int nummayor=0;
                int A;
                cout<<"escriba un programa que pida constantemente numeros hasta que ingrese el numero cero e imprima en pantalla el mayor de todos los numeros ingresados"<<endl;

                do{
                cout <<"Ingrese un numero : ";
                cin >> A;
                if (A>nummayor){
                 nummayor = A;
                      }
                    }
                while (A!=0);
                cout <<endl <<"El numero mayor que se ingreso fue " <<nummayor <<endl;

            }
            break;
            case 18:
            {
                cout<<"escriba un programa que pida un numero N e imprima si es o no un cuadrado perfecto"<<endl;
                /*los cuadrados perfectos son los números que se pueden representar como el cuadrado de otro numero,4 es cuadrado perfecto
                por que se puede representar como 2^2 y siempre tendran raiz cuadrada exacta*/
                int cuadrado;
                int i;
                cout<<"ingrese el numero a evaluar"<<endl;
                cin>>n;
                for(i=1;i<n;i++){
                    if (i*i==n){
                        cuadrado=true;
                        break;
                    }
                    else{
                        cuadrado=false;
                    }
                }
                if(cuadrado==true)cout<<n<<" Es cuadrado perfecto."<<endl;
                else cout<<n<<" No es cuadrado perfecto."<<endl;


                cuadrado=false;
            }
            break;
            case 19:
            {
                cout<<"escriba un programa que escriba un numero N e imprima si es o no un numero primo:"<<endl;
                int num1,i,a;
                a=0; /*Esta variable la vamos a usar para contar los divisores del número introducido, la inicializamos a 0*/

                cout<<"Introduce un numero: "<<endl;
                cin>>num1;

                for(i=1;i<=num1;i++)
                {
                if(num1%i==0) // si num1 módulo de i es 0, incrementamos a en 1.
                a++;
                }
                /*Si al final del bucle, a vale 2, el número es primo, porque tiene solamente 2 divisores.*/
                if(a==2)
                {
                cout<<num1<<"Es un numero primo:"<<endl;
                }
                else
                {
                cout<<num1<<"no es un numero primo:"<<endl;
                }
            }
            break;
            case 20:
            {
                cout<<"escriba un programa que pide un numero N e imprima si es o no un palindromo"<<endl;
                //números que leídos de atrás hacia adelante se leen igual de adelante hacia atrás//
                int num, resto, numAlreves=0, num2;
                cout<<"ingrese un numero"<<endl;
                cin>>num;
                num2 = num;
               while(num>0){
                   resto= num%10;
                   num= num/10;
                   numAlreves= numAlreves*10+resto;
               }
               if(numAlreves==num2)
               cout<<num2 << "es un numero palindromo."<<endl;

               else

               cout<<num2 <<" no es un numero palindromo."<<endl;
            }
            break;
            case 21:
            {
                char letra;
                cout <<"Ingrese una letra para cambiarla de mayuscula a minuscula o viceversa: ";
                cin >> letra;
                if (letra>=65 && letra <=90){
                    letra+=32;
                    cout <<endl <<"Letra convertida : "<<letra <<endl;
                    }
                else if (letra>=97 && letra <=122) {
                     letra = letra - 32;
                     cout <<endl <<"Letra convertida : "<<letra <<endl;}
                 else {
                     cout <<endl <<"Caracter no valido." <<endl;
            }
            break;
            case 22:
            {
                    cout<<"escriba un programa que pida una cantidad entera de segundos y la imprima en formato horas:minutos:segundos"<<endl;
                    cout<<"Ingrese la cantidad de segundos que quieres convertir: "<<endl;
                    cin>>a;
                    int b;
                    int producto=1;
                    int suma=0;
                    int cnt=1;

                    b=a/3600;
                    cnt=a%3600;
                    producto=cnt/60;
                    suma=cnt%60;
                    cout<<b<<":"<<producto<<":"<<suma<<endl;
                    a=0;
                    b=0;
                    cnt=1;
                    producto=1;
                    suma=0;
            }
            break;
            case 23:
            {
                    bool mcm;
                    int multiplica, A, B;
                    mcm = false;
                    multiplica=1;
                    cout <<"Ingrese dos numeros para hallar su Minimo Comun Multiplo: ";
                    cin >>A >>B;
                    do{
                    for (int i=1;i*B<=multiplica*A;i++){
                        if(A*multiplica==B*i) {
                          cout <<endl <<"El MCM de "<<A <<" y "<<B <<" es: "<<B*i <<endl;
                           mcm = true;
                             }
                                        }
                          multiplica++;
                                    } while(mcm==false);
            }
            break;
             case 24:
             {
                    cout<<"escriba un programa que pida un # entero y pida el cuadrado de dicho tamaño"<<endl;
                                        cout<<"Ingrese un numero entero para la dimension del cuadrado.";
                                        cin>>a;
                                        for(int fila=1;fila<=a;fila++){
                                            for(int col=1;col<=a;col++){

                                                if((col==1)||(fila==1)||(fila==a)||(col==a))cout<<"+";
                                                else cout<<" ";
                                            }
                                            cout<<endl;
                                        }
                                        a=0;
             }
             break;
             case 25:
                {
                    int divisor, total, A;
                                            divisor=1;
                                            total = 0;
                                            cout <<"Ingrese un numero para indicarle su cantidad de digitos: ";
                                            cin >>A;
                                            do{
                                                if(A/divisor>=1){
                                                    total = total + 1;}
                                                divisor*=10;
                                             } while(divisor<=A);
                                          cout <<endl  <<A <<" tiene " <<total  <<" digitos."<<endl;
                }
                break;
              case 26:
                {
                    cout<<"Programa que pide 3# e imprime  el tipo de triangulo"<<endl;
                    cout<<"Ingrese un lado del triangulo: ";
                    cin>>a;
                    int suma=0;
                    int b=0;
                    while(a<0){
                        cout<<"ingrese numero valido para un triangulo: "<<endl;
                        cin>>a;
                    }
                    cout<<"Ingrese un lado del triangulo: ";
                    cin>>b;
                    while(b<0){
                        cout<<"ingrese numero valido para un triangulo: "<<endl;
                        cin>>b;
                    }
                    cout<<"Ingrese un lado del triangulo: ";
                    cin>>suma;
                    while(suma<0){
                        cout<<"ingrese numero valido para un triangulo: "<<endl;
                        cin>>suma;
                    }
                    if(a!=0 &&b!=0 && suma!=0){
                        if((a==b)&&(a==suma)&&(b==suma))cout<<a<<" "<<b<<" "<<suma<<" forman un trianguilo equilatero"<<endl;
                        else if(((a==b)&&(a!=suma))||((b==suma)&&(b!=a))||((a==suma)&&(a!=b)))cout<<" forman un trianguilo isosceles"<<endl;
                        else cout<<"los datos ingresados forman un triangulo escaleno"<<endl;
                        a=0;
                        b=0;
                        suma=0;
                        break;
                    }
                    else cout<<"ingrese numeros validos para un triangulo."<<endl;
                }
                break;
              case 27:
                {
                    int n1,n2;
                                  char opr;
                                     cout <<"Ingrese una suma, resta, multiplicacion o division (entre dos numeros) para conocer su resultado." <<endl;
                                     cout<<endl<<"Ingrese el primer numero: ";
                                     cin >>n1;
                                     cout<<"Ingrese el operador (+,-,*,/): ";
                                     cin >>opr;
                                     cout<<"Ingrese el segundo numero: ";
                                     cin >>n2;
                                     switch(opr){
                                     case '+':
                                         cout <<endl <<n1 <<"+" <<n2 <<"="<<n1+n2<<endl;
                                         break;
                                     case '-':
                                         cout <<endl <<n1 <<"-" <<n2 <<"="<<n1-n2<<endl;
                                         break;
                                     case '*':
                                         cout <<endl <<n1 <<"*" <<n2 <<"="<<n1*n2<<endl;
                                         break;
                                     case '/':
                                         if(n2==0){
                                            cout <<endl <<"No se puede dividir por cero " <<endl;
                                         }
                                         else {
                                         cout <<endl <<n1 <<"/" <<n2 <<"="<<n1/n2<<endl;
                                         }
                                         break;
                                     default:
                                         cout <<endl << "No ingreso un operador correcto."<<endl;
                                         break;
                                     }
                }
                break;
              case 28:
                {
                    cout<<" PROGRAMA QUE MUESTRA VALOR APROXIMADO DE PI"<<endl;
                    cout<<"Cuantos elementos quieres usar para la aproximacion de Pi: ";
                    cin>>a;
                    int cnt=0;
                    int b=0;
                    float division=0;

                    for(int i=1;cnt<=a;i+=2){
                        if(i==1 || b==4){
                            division=division+(4/(float)i);
                            b=2;
                        }
                        else{
                            division=division-(4/(float)i);
                            b=b+2;
                        }
                        cnt+=1;
                    }
                    cout<<"pi es aproximadamente:= "<<division<<endl;
                    division=0;
                    cnt=1;
                    a=0;
                    b=0;
                }
                break;
               case 29:
                {
                    int lsup = 100, linf = 0, med;
                                  char opc;
                                    do {
                                        med = (lsup+linf)/2;
                                        cout << "Su numero es " <<med <<"?" <<endl;
                                        cout << "Correcto ingese: =, Su numero es mayor ingrese: >, es menor ingrese :<" <<endl;
                                        cin >> opc;
                                        if (opc == '>'){linf=med;}
                                        else if (opc == '<') {lsup = med;}
                                       }while(opc!='=');
                                      cout <<"Su numero elegido fue: " <<med;
                }
                break;
                case 30:
                {
                    int rango=1;
                    int a=0;
                    int cnt=1;
                    cout<<" PROGRAMA QUE PIDE ADIVINAR UN NUMERO "<<endl;
                    while(a!=rango){
                        cout<<"Digite el numero que crees que es: ";
                        cin>>a;
                        if(a>rango) cout<<"El numero que buscas es menor"<<endl;
                        else if (a<rango) cout<<"El numero que buscas es mayor"<<endl;
                        cnt++;
                    }
                    cout<<"Felicidades conseguiste el numero"<<endl;
                    cout<<"El numero de intentos fueron: "<<cnt-1<<endl;
                    cnt=1;
                    a=0;
                    rango=1+rand()%100;
                }
                break;
                default:
                //se usa para que si el usuario ingresa un numero que no corresponde a ningún caso o es diferente de 0, le haga saber al usuario que es aopción no es valida.
                cout<<"opcion no valida."<<endl;
                break;
                }
            cout<<"ingrese una opcion desde 1 a 30 o 0 (cero) para salir "<<endl; cin>>numprob; /*como estoy usando el while, después de haber ejecutado un caso sale del switch y
           se viene a esta parte (dentro del while) donde se le pedira al usuario si quiere seguir dentro del bucle y ver otro ejercicio o desea salir.*/
            }
        }



    }
    else if (op==0) //si la opción no es 1 se vendrá aquí y se ejecutará el bloque de los problemas. El cuál tendra la misma estructara que el bloque de los ejercicios.
    {
        cout<<"ingrese una opcion desde 1 a 17 para ver los problemas o 0 (cero) para salir "<<endl; cin>>numprob;
        while(numprob!=0)
        {
            switch (numprob)
            {
                case 1:
                {
                cout<<"Escriba un programa que identifique si un carácter ingresado es una vocal, una consonante o ninguna de las 2 e imprima un mensaje según el caso."<<endl;
                char caracter;
                cout<<"ingrese un caracter: "<<endl; cin>>caracter;
                if (caracter>=65 && caracter<=90 || caracter>=97 && caracter<=122)
                {
                    if (caracter>=97)
                    {
                        caracter-=32;
                    }
                    if(caracter=='A' || caracter=='E' || caracter=='I' || caracter=='O' || caracter=='U'){
                        cout<<"el caracter ingresado es una vocal."<<endl;
                    }
                    else {
                      cout<<"el caracter ingresado es una consonante"<<endl;
                    }

                }
                else
                    cout<<"el caracter ingresado no es vocal ni consonante"<<endl;

                }
                break;
            case 2:{
                                cout<<"Este programa determina la minima combinacion de billetes y monedas \n para una cantidad de dinero determinada\n ingrese cantidad de dinero a determinar: ";
                                int dineroingresado;
                                int k50,k20, k10, k5, k2,k1;
                                int m500,m200,m100,m50;
                                cin>>dineroingresado;
                                k50=dineroingresado/50000;
                                dineroingresado-=50000*k50;
                                k20=dineroingresado/20000;
                                dineroingresado-=20000*k20;
                                k10=dineroingresado/10000;
                                dineroingresado-=10000*k10;
                                k5=dineroingresado/5000;
                                dineroingresado-=5000*k5;
                                k2=dineroingresado/2000;
                                dineroingresado-=2000*k2;
                                k1=dineroingresado/1000;
                                dineroingresado-=1000*k1;
                                m500=dineroingresado/500;
                                dineroingresado-=500*m500;
                                m200=dineroingresado/200;
                                dineroingresado-=200*m200;
                                m100=dineroingresado/100;
                                dineroingresado-=100*m100;
                                m50=dineroingresado/50;
                                dineroingresado-=50*m50;

                                cout<<"\n";
                                cout<<"50000: "<<k50<<"\n";
                                cout<<"20000: "<<k20<<"\n";
                                cout<<"10000: "<<k10<<"\n";
                                cout<<"5000: "<<k5<<"\n";
                                cout<<"2000: "<<k2<<"\n";
                                cout<<"1000: "<<k1<<"\n";
                                cout<<"500: "<<m500<<"\n";
                                cout<<"200: "<<m200<<"\n";
                                cout<<"100: "<<m100<<"\n";
                                cout<<"50: "<<m50<<"\n";
                                cout<<"Faltante: "<<dineroingresado<<"\n";

                            }
                 break;
            case 3:
                {
                cout<<"Escriba un programa que debe leer un mes y un día de dicho mes para luego decir si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso imprimir posiblemente año bisiesto."<<endl;
                   int dia,mes;
                   cout<<"ingrese el dia: "<<endl; cin>>dia;
                   cout<<"ingrese el mes: "<<endl; cin>>mes;
                   if(dia<1 || dia>31)
                   {
                       cout<<dia<<" no es un dia valido."<<endl;
                   }
                   else if(mes<1 || mes>12)
                   {
                       cout<<mes<<" no es un mes valido."<<endl;
                   }
                   switch (mes)
                   {
                       case 4:
                       case 6:
                       case 9:
                       case 11:
                           if(dia>30)
                           {
                               cout<<dia<<"/"<<mes<<" fecha no valida"<<endl;
                           }
                           else
                           {
                               cout<<dia<<"/"<<mes<<" fecha valida"<<endl;
                           }
                           break;
                       case 2:
                           if(dia==29)
                           {
                               cout<<dia<<"/"<<mes<<" fecha valida año bisiesto"<<endl;
                           }
                           else if(dia>28)
                           {
                               cout<<dia<<"/"<<mes<<" fecha no valida"<<endl;
                           }
                           else
                           {
                               cout<<dia<<"/"<<mes<<" fecha valida"<<endl;
                           }
                           break;
                       default:
                           if(dia<1 || dia>31)
                           {
                               cout<<dia<<"/"<<mes<<" fecha no valida"<<endl;
                           }
                           else
                           {
                               cout<<dia<<"/"<<mes<<" fecha valida"<<endl;
                           }
                    }

                }
                break;
            case 4:{
                int hora1=0,hora2=0,hora1_1=0,hora2_2=0,min1=0,min2=0,dia=0;
                cout<<" Ingres el primer numero de 4 digitos maximo: ";
                cin>>hora1;
                cout<<" Ingres el segundo numero de 4 digitos maximo: ";
                cin>>hora2;

                min1=hora1%100; //extrer los numeros correspondientes a minutos
                hora1_1=(hora1-min1)/100;//extrar la hora
                cout<<"\n Hora 1 ingresada: "<<hora1_1<<":"<<min1<<endl;

                min2=hora2%100;
                hora2_2=(hora2-min2)/100;
                cout<<"\n Hora 2 ingresada: "<<hora2_2<<":"<<min2<<endl;
                if(hora1_1< 24 & hora2_2<24 & min1<60 & min2<60){
                    hora1_1+=hora2_2;
                    min1+=min2;
                    if(min1 >=60){
                        hora1_1++;
                        min1-=60;
                     }
                    if(hora1_1>=24){
                            dia+=1;
                            hora1_1-=24;
                        }
                        cout<<"\n Hora final: "<<dia<<" dia(s) "<<hora1_1<<":"<<min1<<endl;
                    }

                else{
                   cout<<" El numero ingresado no corresponde a una hora valida"<<endl;
                }
            }
                break;
                case 5:
                {
                  cout<<"Escriba un programa que muestre el siguiente patrón en la pantalla. El tamaño del patrón estará determinado un número entero impar que ingrese el usuario"<<endl;
                  cout<<"ingrese un numero entero "<<endl; cin>>n;
                  int mitadt= (n/2)+1;
                  if(n%2!=0)
                  {
                      cout<<"el numero es impar"<<endl;
                      for(int i=1; i<=mitadt; i++) //i --> filas
                      {
                          for(int esp=i; esp <= mitadt-1; esp++)
                          {
                              cout<<" ";
                          }
                          for (int ast=1; (ast <= (2*i)-1) ; ast++)
                          {
                              cout<<"*";
                          }
                          cout<<endl;
                      }
                      for(int i=mitadt-1; i>=1; i--) //i --> filas
                      {
                          for(int esp=i; esp <= mitadt-1; esp++)
                          {
                              cout<<" ";
                          }
                          for (int ast=1; (ast <= (2*i)-1) ; ast++)
                          {
                              cout<<"*";
                          }
                          cout<<endl;
                      }
                  }
                  else
                  {
                      cout<<"el numero no es impar"<<endl;
                  }
                }
                 break;
            case 6:{
                int fact;
                float division;
                cout<<"### PROGRAMA QUE APROXIMA A e CON n ELEMENTOS ###"<<endl;
                cout<<"con cuantos elementos quieres aproximar a e: ";
                cin>>a;
                while (a==0 ||a<0){
                    cout<<"Por favor ingrese un numero valido para aproximar a e: ";
                    cin>>a;
                }
                for(int i=1;i<=a ;i++){
                    if(a<0) fact=0;
                    else if (a==0){
                        fact=1;
                        division=1;
                    }
                    else{
                        fact=fact*i;


                    }
                    division=division+(1/(float)fact);
                }

                cout<<1+division<<endl;
                division=0;
                fact=1;
                a=0;
            }
                break;
                case 7:
                {
                    cout<<"Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie de Fibonacci menores a n"<<endl;
                    cout<<"Ingrese un numero positivo"<<endl; cin>>n;
                    int suma=0;
                    a=1,b=0;
                    if (n>0)
                    {
                        while(a<n) //para que no haga la susesión n veces, sino hasta a<n y poder sumar solamente los a pares menores que n
                        {
                            a+=b;
                            cout<<"a: "<<a<<endl;;
                            b=a-b; cout<<"b: "<<b<<endl; //será el numero anterio con el que luego a será sumado.
                            if(a%2==0) //a es el numero en la serie y se evalua si es par y si lo es se suma ese numero
                            {
                                suma+=a;
                            }
                        }
                        cout<<"el resultado de la suma es: "<<suma<<endl;
                    }
                    else
                        cout<<"numero debe ser mayor que cero"<<endl;

                }
                break;
            case 8:{
                int i=1,numeroa=0,numerob=0,numeroc=0,sumaa=0,sumab=0;
                cout<<"\nEste programa calcula la suma de los multiplos \n de dos numeros a y b que sean menores que c \n Ingrese numero a= ";
                cin>>numeroa;
                cout<<"ingrese numero b= ";
                cin>>numerob;
                cout<<"ingrese numero c= ";
                cin>>numeroc;
                bool bandera=true,bandera2=true;

                while(bandera==true){
                    if(numeroa*i<numeroc){
                        sumaa+=numeroa*i;cout<<numeroa*i;i++;
                    }
                    else{bandera=false;}
                    if(bandera==true){cout<<"+";}
                }
                int vector[i];
                for(int j=0;j<i;j++){
                    vector[j]=numeroa*(j+1);
                }
                bandera=true;

                int k=1,l=1;
                while(bandera==true){
                    for(int j=0;j<=i;j++){//determino si numero b es igual al numero a o alguno de sus multiplos

                        if(numerob*k==vector[j]){bandera2=false;}
                    }
                    if(numerob*l<numeroc & bandera2==true){
                        sumab+=numerob*l;cout<<numerob*l;l++;k++;}
                    else{bandera=false;}
                    if(bandera==true){cout<<"+";}}
                cout<<"="<<sumaa+sumab<<"\n";
            }
           break;
                case 9:
                {
                    int expo(int );
                    cout<<"Escriba un programa que pida un número entero N e imprima el resultado de la suma de todos sus dígitos elevados a sí mismos."<<endl;
                    int aux=0,extra=0,sum=0;
                    cout<<"ingrese un numero: "<<endl; cin>>n;
                    while (n!=0)
                    {
                        aux=n%10; n/=10; cout<<aux<<" "<<n<<endl;
                        extra=aux;
                        for(int i=1;i<aux;i++)
                        {
                            extra*=aux;
                        } cout<<extra<<endl;
                        sum+=extra;
                        extra=0;
                    }
                    cout<<"el resultado de la suma es: "<<sum<<endl;
                }
                break;
            case 10:{
                int a, cnt, suma=0;
                cout<<"### PROGRAMA QUE HALLA EL N-ESIMO NUMERO PRIMO DE UN NUMERO INGRESADO ###"<<endl;
                cout<<"Ingrese un numero para hallar el n-esimo primo: ";
                cin>>a;
                cnt=1;
                for(int i=2;;i++){
                    int cnt2=0;
                    for(int j=2;j<=i/2;j++){
                        if(i%j==0){
                            cnt2++;
                            break;
                        }
                    }
                    if(cnt2<1) {
                        cnt++;
                        if(cnt==a+1){
                            suma=i;
                            cout<<suma<<endl;
                            break;

                        }
                    }
                }
            }

        break;
                case 11:
                {
                cout<<"Escriba un programa que reciba un número y calcule el mínimo común múltiplo de todos los números enteros entre 1 y el número ingresado"<<endl;
                cout<<"ingrese un numero "<<endl; cin>>n;
                }
                break;
            case 12:{

                int NumMFP=0,i=2,j=0;
                cout<<"\nEste programa calcula el maximo factor primo \n Ingrese numero a= ";
                cin>>NumMFP    ;
                int *MFP= new int[10];

                for(int i=0;i<sizeof (MFP);i++){//inicializo en ceros arreglo
                    *(MFP+i)=0;
                }

                for(;;i++)//Determinar Factor Comun
                {
                    if(i==2 || i%2!=0){//solo numeros primos
                        if(NumMFP==1){//final del factor comun?
                            break;
                        }
                        if(NumMFP%i==0){//factor comun
                            NumMFP/=i;
                            *(MFP+j)=i;
                            i=2;
                            j++;
                        }
                    }
                }
                NumMFP=*MFP;
                for(int i=0;i<sizeof(MFP)-1;i++){
                   int b=*(MFP+i);
                   if(NumMFP<b){
                        NumMFP=*(MFP+i);
                   }

                }
                delete [] MFP;
                cout<<"\nEl maximo Factor primo es: "<<NumMFP<<endl;
            }
                 break;
                case 13:
                {
                    cout<<"Escriba un programa que reciba un número y calcule la suma de todos los primos menores que el número ingresado."<<endl;
                    bool primo(int ,int ) ;
                    bool rta;
                    int suma=0;
                    cout<<"ingrese un numero"<<endl; cin>>n;
                    for(int j=1;j<=n;j++)
                    {
                            rta=primo(j,n);
                            if(rta==1)
                                suma+=j;
                    }
                    cout<<"el resultado de la suma es: "<<suma<<endl;
                }
                break;
            case 14:{
                cout<<"### PROGRAMA QUE ENCUENTRA EL PALINDROMO MAS GRANDE DE MULTIPLICAR UN NUMERO DE 3 DIGITOS ###"<<endl;
                int Producto, revproducto, Reversa, Max, actuI, actuJ;
                Max = 0;
                for(int i=100; i<1000; i++){
                    for(int j=100; j<1000; j++){
                        Producto = i * j;
                        revproducto = Producto;
                        Reversa = 0;
                        while (revproducto > 0) {
                            Reversa = (Reversa * 10) + (revproducto % 10);
                            revproducto = revproducto / 10;
                        }
                        if((Reversa == Producto) && (Producto > Max)){
                            Max = Producto;
                            actuI = i;
                            actuJ = j;
                        }
                    }
                }
                cout << actuI << " * " << actuJ << " = " << Max << endl ;
            }
                break;
                case 15:
                {
                    cout<<"ingrese un numero impar"<<endl; cin>>n;
                    if(n%2!=0){
                        cout<<"el numero es impar"<<endl;
                        for(unsigned short f=0,ts=0,ti=0; f<n;f++){
                            for(unsigned short c=0;c<n;c++){
                                if(f<=c && f<=n-1-c){
                                    cout<<(n-2*f)*(n-2*f)-(n-2*f-1)+ts<<"\t";
                                    ts++;
                                }
                                else if (f>c && f>n-1-c){
                                   b=n-1-f;
                                   ts++;
                                   cout<<(n-2*b)*(n-2*b)-2*(n-2*b-1)-ts<<'\t';
                                }
                                else if(f>c && f<=n-1-c){
                                    cout<<(n-2*c)*(n-2*c)-(n-2*c-1)-ti+c<<'\t';
                                }

                                else{
                                    b=n-c;

                                    cout<<(n-2*b)*(n-2*b)+ti-(b-1)<<'\t';
                                }

                            }
                            ts=0;
                            ti++;
                            cout<<endl<<endl<<endl;
                        }
                    }
                    else
                        cout<<"el numero no es impar"<<endl;
                            int sumM=0,pos1=0,pos2=0;
                            int *Matriz=new int[n*n];

                            for(int i=0;i<n*n;i++){//inicializo arreglo
                                *(Matriz+i)=i+1;
                            }

                            for(int i=0;;i+=2){//diagonal 1
                                pos1+=i;
                                if(pos1<n*n){
                                   sumM+=*(Matriz+pos1);

                                }
                                else{break;}

                            }

                            for(int i=4;;i+=4){//diagonal 2

                                if(pos2<n*n-1){
                                    sumM+=*(Matriz+i+pos2);
                                    pos2+=i;
                                    sumM+=*(Matriz+i+pos2);

                                }
                                else{break;}
                                pos2+=i;
                            }


                            delete [] Matriz;
                            cout<<"\nLa suma de la diagonal es: "<<sumM<<endl;
                }
                break;
            case 16:{
                int suma=0,cnt=0, fact=0;
                cout<<"### PROGRAMA QUE ENCUENTRA LA SEMILLA MAS GRANDE DE LA SERIE COLLATZ INGRESADO POR EL USUARIO ###"<<endl;
                int a=0,b=0;
                cout<<"ingrese un numero: ";
                cin>>suma;

                for(int i=1;i<=suma;i++){
                    fact=i;
                    cnt=1;
                    while(fact!=1){
                        cnt++;
                        if(cnt>b){
                            b=cnt;
                            a=i;
                        }
                        if(fact%2==0) fact=fact/2;
                        else fact=3*fact+1;
                    }
                }
                cout<<"la serie mas larga es de la semilla: "<<a<<" con  "<<b<<" terminos"<<endl;
                suma=0;
                fact=1;
                cnt=1;
                a=0;
                b=0;
            }
               break;
             case 17:
            {
                cout<<"Escriba un programa que reciba un número k y calcule cual es el primer número triangular que tiene más de k divisores"<<endl;
                cout<<"Ingrese un numero: "<<endl; cin>>n;
                int cont=0, aux=0, a=1; //como no sé hasta que numero voy a tener que iterar uso uun while y para ir sacando los numero triangulares uso como var --> a
                while(cont < n)
                {
                    cont=0;
                    aux=(a*(a+1))/2; cout<<"numero aux "<<aux<<endl;
                    for(int i=1; i<=aux; i++)
                    {
                        if(aux%i==0)
                        {
                            cont++;
                            cout<<"divisor: "<<i<<endl;
                            cout<<"cont: "<<cont<<endl;
                        }
                    }
                    a++;

                }
                cout<<"el numero es: "<<aux<<" que tiene "<<cont<<" divisores"<<endl;

            }
            break;
                default:
                //se usa para que si el usuario ingresa un numero que no corresponde a ningún caso o es diferente de 0, le haga saber al usuario que es aopción no es valida.
                cout<<"opcion no valida."<<endl;
                break;
            }
            cout<<"ingrese una opcion desde 1 a 30 o 0 (cero) para salir "<<endl; cin>>numprob;
        }
    }
    else
       cout<<"opcion no valida."<<endl;
    return 0;
}
bool primo(int j,int num)
{
    int c=0;
    for(int i=1;i<=num;i++)
    {
        if(j%i==0)
        {
            c+=1;
        }
    }
    if(c==2)
    {
        return true;
    }
    else
    {
        return false;
    }

}

