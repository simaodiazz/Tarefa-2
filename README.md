# Exercicio 1

a é 20

# Exercicio 2

y é 4

# Exercicio 3

5 5 e o p têm o endereço de i

# Exercicio 4

a e b têm endereço de c, c = 0 e d = 8

# Exercicio 5

*p é 5

# Exercicio 6

x é igual a 3 e y igual a 4

# Exercicio 7

```cpp
void main() {
    int x, *p;
    x = 100;
    p = x; //p deveria receber o endereço de x, já que p é um ponteiro (e x não).
    Ponteiros “armazenam” o endereço para o qual eles apontam! O código correto
    seria: p = &x;
    cout<<“Valor de *p: ”<< *p;
    cout<<“Valor de p: ”<< p;
}
```

# Exercicio 8
```cpp
void main(){
    double *a,*b, c, d;

    cout << "Digite o primeiro valor: ";
    cin >> *a;

    cout << "Digite o segundo valor: ";
    cin >> *b;

    b=&c;
    a=&d;

    if (*a == *b)
        cout<<"Mesmo conteúdo: "<< *a <<endl;
    system(“pause”);
}
```