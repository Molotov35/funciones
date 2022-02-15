#include <iostream>
using namespace std;
void print (string messege)
{
    cout << messege << endl;
}
void printb (float mensaje)
{
    cout << mensaje << endl;
}
float Suma(float num1, float num2)
{
    return num1+num2;
}
float Resta (float num1,float num2)
{
    return num1-num2;
}
float Div (float num1,float num2)
{
    return num1/num2;
}
float Mul (float num1,float num2)
{
    return num1*num2;
}
int main()
{
    float num1,num2;
    print("Ingrese el primer numero: ");
    cin >> num1;
    print("ingrese el segundo numero: ");
    cin >> num2;
    float SUM = num1+num2;
    float RES = num1-num2;
    float DIV = num1/num2;
    float MULT = num1*num2;
    print("la suma de los numeros es: ");
    printb(SUM);
    print("la resta de los numeros es: ");
    printb(RES);
    print("la division de los numeros es: ");
    printb(DIV);
    print("la multiplicacion de los numeros es: ");
    printb(MULT);
    return 0;
}
