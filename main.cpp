#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int numero=0;
int *suma(int*,int*);
int*ptr1=NULL,*ptr2=NULL,numero1=0,numero2=0;

//variable global
void *registro(){
        cout<<"ingrese primer numero: ";
        cin>>numero1;
        cout<<"ingrese segundo numero: ";
        cin>>numero2;
        ptr1=&numero1;
        ptr2=&numero2;
}

//Funciones
int *suma(int*pt1,int*pt2)
    {
        int *ptr=(int*)malloc(sizeof(int));
        *ptr=(*pt1+*pt2);
        return ptr;
    }

int *resta(int*pt1,int*pt2)
    {
        int *ptr=(int*)malloc(sizeof(int));
        *ptr=(*pt1-*pt2);
        return ptr;
    }
int *multiplicacion(int*pt1,int*pt2)
    {
        int *ptr=(int*)malloc(sizeof(int));
        *ptr=((*pt1)*(*pt2));
        return ptr;
    }

int *division(int*pt1,int*pt2)
    {
        int *ptr=(int*)malloc(sizeof(int));
        *ptr=((*pt1)/(*pt2));
        return ptr;
    }
void menu(){
int opcion=0;
  cout<<"--------------------------------------------------------------------------------"<<endl;
  cout<<"|                                     Menu                                     |"<<endl;
  cout<<"--------------------------------------------------------------------------------"<<endl;
  cout<<"1) suma "<<endl<<endl;
  cout<<"2) resta "<<endl<<endl;
  cout<<"3) multiplicacion "<<endl<<endl;
  cout<<"4) division "<<endl<<endl;
  cout<<"0) salir "<<endl<<endl;
  cout<<"Opcion: ";
  cin>>opcion;
  switch(opcion){
      //Suma

  case 1: {
        system("cls");
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"|                                      Suma                                    |"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        registro();
        cout<<"Resultado suma:"<<*suma(ptr1,ptr2)<<endl;
        system("pause>>cls");  }break;
   //Resta
    case 2: {
        system("cls");
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"|                                     Resta                                    |"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        registro();
        cout<<"Resultado suma:"<<*resta(ptr1,ptr2)<<endl;
   }break;
   //Multiplicacion
     case 3: {
        system("cls");
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"|                                Multiplicacion                                |"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        registro();
        cout<<"Resultado suma:"<<*multiplicacion(ptr1,ptr2)<<endl;
   }break;
   //Division
     case 4: {
        system("cls");
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"|                                    Division                                  |"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        registro();
        cout<<"Resultado suma:"<<*division(ptr1,ptr2)<<endl;
   }break;


  }

}

int opc=0;
int main(int argc, char** argv) {



do{
    system("cls");
    menu();
    cout<<endl<<endl<<endl<<endl<<"Desea continuar ejecutando 1[si] 0 [no]: ";
    cin>>opc;
    cout<<endl<<endl<<endl<<"Presione (Enter) para salir."<<endl;
}while(opc!=0);

system("pause>>cls");
return 0;
}
