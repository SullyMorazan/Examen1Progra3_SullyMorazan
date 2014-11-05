#include "Evaluador.h"
#include <iostream>
#include <math.h>
using namespace std;

///////////////////////////////////////////////////////////////////
///////////////////////////// PARTE 1 /////////////////////////////
///////////////////////////////////////////////////////////////////

//Devuelve true si letra (dado) es mayuscula, de lo contrario devuelve false
//Sugerencia, usar tabla ascii:
//http://www.cdrummond.qc.ca/cegep/informat/professeurs/alain/images/ASCII1.GIF
bool esMayuscula(char letra)
{

if(letra=='A' || letra=='B' || letra=='C' || letra=='D' || letra=='E' || letra=='F' ||letra=='G' ||letra=='H' || letra=='I' ||
   letra=='J'|| letra=='K' || letra=='L' || letra=='M' || letra=='N' || letra=='O' || letra=='P' || letra=='Q' || letra=='R' ||
   letra=='S'||letra=='T'||letra=='U'||letra=='V'||letra=='W'||letra=='X'||letra=='Y'||letra=='Z')
        return true;

else
    return false;
}


//Devuelve true si todas las letras de palabra (dado) son mayusculas
//Sugerencia, usar string.length() para saber la longitud de la palabra
bool sonMayusculas(string palabra)
{
  /* for(int j=0; j<palabra.length()-1; j++)
   {
 if(palabra[j]=='A' || palabra[j]=='B' || palabra[j]=='C' || palabra[j]=='D' || palabra[j])=='E' ||palabra[j]=='F' ||palabra[j]=='G' ||palabra[j]=='H' || palabra[j]=='I' ||
  palabra[j]=='J'||palabra[j]=='K' || palabra[j]=='L' || palabra[j]=='M' || palabra[j]=='N' ||palabr[j]=='O' || palabra[j]=='P' || palabra[j]=='Q' || palabra[j]=='R' ||
  palabra[j]=='S')
    return true;
    else false;
}*/
}

//Desreferencia num (dado), eleva al cuadrado el numero resultante y lo asigna a la posicion donde num esta apuntando
void elevarAlCuadrado(int* num)
{
 *num = *num * (*num);
}

//Desreferencia a (dado), b (dado) y c (dado) y devuelve el numero mayor
int getMayor(int* a, int* b, int* c)
{
   if(*a>*b && *a>*c)
    return *a;
    else if(*b>*a && *b>*c)
     return *b;
    else
    return *c;

}

///////////////////////////////////////////////////////////////////
///////////////////////////// PARTE 2 /////////////////////////////
///////////////////////////////////////////////////////////////////

//Realizar las clases Padre e Hijo dado el diagrama de clases adjunto
//Los contructores inicializan los atributos de las clases, las funciones set los establecen y get los obtienen.

class Padre
{
public:

    Padre()
    {

    }

    int num;
    Padre(int num)
    {
        this->num = num;
    }
    int getNum()
    {
        return num;
    }
    void setNum(int num)
    {
        this->num = num;
    }
};

class Hijo : public Padre
{
public:
    char letra;

 void setLetra(char letra)
 {
  this -> letra = letra;
 }

 char getLetra()
 {
     return letra;
 }

Hijo(int num, char letra)
{
    setNum(num);
    setLetra(letra);

}
};
///////////////////////////////////////////////////////////////////
////////////////////////////// Main ///////////////////////////////
///////////////////////////////////////////////////////////////////

void evaluar2();

int main ()
{
    //Funcion evaluadora parte 1
    cout<<"Evaluador parte 1"<<endl<<"================="<<endl;
    evaluar();


    //Evaluacion parte 2
    //Descomentar para evaluar
    cout<<"Evaluador parte 2"<<endl<<"================="<<endl;
    evaluar2();


    return 0;
}


///////////////////////////////////////////////////////////////////////
///////////////////////////// Evaluador 2 /////////////////////////////
///////////////////////////////////////////////////////////////////////

void evaluar2()
{
    double nota = 0;
     Hijo a(10,'a');
     Hijo b(20,'b');
     Hijo c(30,'c');
     c.setNum(40);
     cout<<"Herencia:\t\t";
     if(a.getNum()==10
     && b.getNum()==20
     && c.getNum()==40
       )
    {
       nota+=2.5;
       cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
   }

    c.setLetra('z');
    cout<<"Get y sets:\t\t";
    if(a.getLetra()=='a'
        && b.getLetra()=='b'
        && c.getLetra()=='z'
        )
    {
       nota+=2.5;
        cout<<"Correcto"<<endl;
            }else
    {
    cout<<"Incorrecto"<<endl;
    }

    if(a.getNum()==10 && a.getLetra()=='a'
        && b.getNum()==20 && b.getLetra()=='b'
        && c.getNum()==30 && c.getLetra()=='c'
        )
    {
        nota+=0.5;
    }

    cout<<endl<<"Nota: "<<nota<<"/5"<<endl;
}
