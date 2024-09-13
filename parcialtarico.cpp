#include <iostream>

using namespace std;

void anioBisiesto(){
    /*
    [] En esta ocasion lo que yo quiero hacer es con la decision "IF" es
    en la primer condicion que si es divisible por 4, si año bisiesto no es
    divisible por 100 y si año bisiesto es divisible por 400, que devuelva
    es un año bisiesto.
    Caso contrario, no es un año bisiesto.
    */


    int anioBisiesto;
    cout << "Ingrese un numero para verificar si es bisiesto: ";
    cin >> anioBisiesto;

    if(anioBisiesto %4 && anioBisiesto ! %100 && anioBisiesto %400){
        cout << anioBisiesto << " es un año bisiesto.";
    }else {
        cout << anioBisiesto <<" NO es un año bisiesto.";
    }
}

void tablaInversa(){
    /*
    []  Mi idea principal es hacer la tabla de multiplicación y que el usuario
        ingrese un numero, hago una iteracion con un "FOR" hasta que llegue al
        numero que yo ingrese, por lo tanto, se van a mostrar tantos numeros yo
        haya puesto por consola.
    */

    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    for(int i = 1; i <= numero ; i++){
        cout << "La tabla del numero " << numero << " * " << i << " = " << numero * i << endl;
    }
}

void fizzBuzz(){
    int numeroFizz;

    /*
    [] Lo que quiero hacer aca es que si un numero es multiplo de 3, que se muestre Fizz
        es multiplo de 5 que se muestre Buzz, y si no sigue su ciclo normal.
    */

    cout << "Ingrese un numero: ";
    cin >> numeroFizz;

    for(int i = 1; i <= numeroFizz; i++){
        if(numeroFizz = 3 * numeroFizz){
            cout << "Fizz" << endl;
        }else if(numeroFizz = 5 * numeroFizz){
            cout << "Buzz" << endl;
        }else{
            cout << i << endl;
        }
    }
}
int main(){
    int opcionMenu;
    cout << "----------> Bienvenido al menu del parcial! <--------" << endl;
    cout << "\t1. Anio bisiesto." << endl;
    cout << "\t2. Tabla de multiplicar inversa." << endl;
    cout << "\t3. FizzBuzz." << endl;
    cout << "\t4. Salir del programa." << endl;
    cout << endl;
    cout << "Elige una opcion gorito: ";
    cin >> opcionMenu;

    if(opcionMenu < 0){
        cout << "Ingresa un numero valido por favor.";
    }

    do{
        switch(opcionMenu){
            case 1:
                cout << "Ingresa un numero para determinar si es bisiesto o no: ";

                anioBisiesto();
                break;

            case 2:
                tablaInversa();
                break;

            case 3:
                fizzBuzz();
                break;

            default: cout << "Hasta luego gorito!";

        }

    }while(opcionMenu =! 3);



    return 0;
}
