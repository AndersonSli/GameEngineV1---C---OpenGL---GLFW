#include <iostream>
#include <string>
#include <random>

int gerador_numero_aleatorio()
{
    std:: random_device rd;
    std:: mt19937 gen(rd());
    
    
    std:: uniform_int_distribution<> distrib(1, 3);
    
    int numero_aleatorio = distrib(gen);
    
    return numero_aleatorio;
}

void calculadora()
{
    double num1, num2, resultado;
    int operacao;
    
    std:: cout << "\n------------------------------------------------------\n";
    std:: cout << "Somar[1] | Subtrair[2] | Multiplicar[3] | Dividir[4]\n";
    std:: cout << "\n------------------------------------------------------\n";
    std:: cin >> operacao;
    
    if (operacao == 1)
    {
        std:: cout << "Digite o num1: ";
        std:: cin >> num1;
        std:: cout << "Digite o num2: ";
        std:: cin >> num2;
        resultado = num1 + num2;
        std:: cout << "Resultado: " << resultado;
    }
    if (operacao == 2)
    {
        std:: cout << "Digite o num1: ";
        std:: cin >> num1;
        std:: cout << "Digite o num2: ";
        std:: cin >> num2;
        resultado = num1 - num2;
        std:: cout << "Resultado: " << resultado;
    }
    if (operacao == 3)
    {
        std:: cout << "Digite o num1: ";
        std:: cin >> num1;
        std:: cout << "Digite o num2: ";
        std:: cin >> num2;
        resultado = num1 * num2;
        std:: cout << "Resultado: " << resultado;
    }
    if (operacao == 4)
    {
        std:: cout << "Digite o num1: ";
        std:: cin >> num1;
        std:: cout << "Digite o num2: ";
        std:: cin >> num2;
        resultado = num1 / num2;
        std:: cout << "Resultado: " << resultado;
    }
}

bool joken_po()
{
    int oponente, jogador;
    bool resultado;
    
    std:: cout << "Escolha: PEDRA[1] | PAPEL[2] | TESOURA[3]\n";
    std:: cin >> jogador;
    
    oponente = gerador_numero_aleatorio();
    
    if(oponente == jogador)
    {
        std:: cout << "Empate, tente novamente! \n";
        resultado = false;
        return resultado;
    }
    if(oponente == 1 and jogador == 2)
    {
        std:: cout << "Ganhou! \n";
        std:: cout << "Oponente: [PEDRA] X " << "Jogador: [PAPEL]";
        resultado = true;
        return resultado;  
    }
    if(oponente == 2 and jogador == 3)
    {
        std:: cout << "Ganhou! \n";
        std:: cout << "Oponente: [PAPEL] X "<< "Jogador: [TESOURA]";
        resultado = true;
        return resultado;
    }
    if(oponente == 3 and jogador == 1)
    {
        std:: cout << "Ganhou! \n";
        std:: cout << "Oponente: [TESOURA] X "<< "Jogador: [PEDRA]";
        resultado = true;
        return resultado;
    }
    else
    {
        std:: cout << "Perdeu, tente novamente! \n";
        resultado = false;
        return resultado;
    }
}

void menu()
{
    std:: cout << "Para utilizar a calculadora, Ganhe de mim no Joken PO!!!\n";
    
    bool resultado_joken_po = joken_po();
    
    if (resultado_joken_po == false)
    {
        std:: cout << "\nTente Novamente!\n";
    }
    
    if (resultado_joken_po == true)
    {
        calculadora();
    }
}

int main()
{
    
    int close = 0;
    
    while (close != 1)
    {
        menu();
        
        std:: cout << "\nTo close didite: [1] \n";
        std:: cin >> close;
    }
}