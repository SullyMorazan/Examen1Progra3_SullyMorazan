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
  int mayusculas = 0;
  for(int j=0; j<palabra.length(); j++)
   {
 if(palabra.at(j)== 'A' || palabra.at(j)=='B' || palabra.at(j)=='C' || palabra.at(j)=='D' || palabra.at(j)=='E' ||palabra.at(j)=='F' ||palabra.at(j)=='G' ||palabra.at(j)=='H' || palabra.at(j)=='I' ||
  palabra.at(j)=='J'||palabra.at(j)=='K' ||palabra.at(j)=='L' || palabra.at(j)=='M' || palabra.at(j)=='N' ||palabra.at(j)=='O' ||palabra.at(j)=='P' ||palabra.at(j)=='Q' || palabra.at(j)=='R' ||
  palabra.at(j)=='S'||palabra.at(j)=='T'||palabra.at(j)=='U'||palabra.at(j)=='V'||palabra.at(j)=='W'||palabra.at(j)=='X'||palabra.at(j)=='Y'||palabra.at(j)=='Z')
  mayusculas = mayusculas + 1;
   }
   if(mayusculas ==palabra.length())
   return true;
   else
   return false;
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
