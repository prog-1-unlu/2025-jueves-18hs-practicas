// Calcular el resultado de elevar un número base a una potencia dada RECURSIVAMENTE


int potencia(int base, int potencia);

int main()
{

    int resultado;
    int base, pot;

    base = 3;
    pot =3;

    resultado = potencia(base, pot);
    printf("El resultado es: %d", resultado);

    return 0;
}



int potencia(int base, int pot){
    if(pot == 0){
        return 1;
    } else {
        return base * potencia(base, pot - 1);
    }
}
