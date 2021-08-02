// Example program
#include <iostream>
#include <string>
 using namespace std;
int main()
{
    string articulos[10];
    float precios[10];
    int c=0;
    float suma=0,iva=0,desc=0,total=0;
    cout << "Ingrese el Articulo con su valor\n";
    cout<<"--------------------------------\n";
    while(c<10)
    {
        cout<<"Articulo "<<c+1<<": ";
        cin>>articulos[c];
        cout<<"Precio: ";
        cin>>precios[c];
        suma+=precios[c];
        c++;
    }
    system("cls");
    iva = suma * 0.12;
    desc = suma * 0.1;
    total = suma + iva - desc;
    c = 0;
    while(c<10)
    {
        cout<<c+1<<"."<<"\t"<<articulos[c]<<"\t"<<precios[c]<<"\t"<<endl;
        c++;
    }
    cout<<"\t"<<"Subtotal: "<<suma<<endl;
    cout<<"\t"<<"IVA: "<<iva<<endl;
    cout<<"\t"<<"Descuento:"<<desc<<endl;
    cout<<"\t"<<"Total: "<<total<<endl;
}