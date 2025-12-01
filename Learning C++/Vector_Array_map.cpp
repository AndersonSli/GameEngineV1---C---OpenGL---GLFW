#include <iostream>
#include <string>
#include <vector>
#include <map>

int main()
{
    //Aray
    int numeros[10];
    
    for (int i = 0; i <= 10; i++)
    {
        numeros[i] = i;
    }
    
    //Tentei mostra os valores dentro do array, as moustrou o local na memoria.
    std:: cout << numeros << "\n";
    
    for (int i = 0; i <= 10; i++)
    {
        std:: cout << numeros[i];

    }

    std:: cout << "\n";

    //Vetor
    std::vector<int> idades;
    
    for (int i = 0; i <= 10; i++)
    {
        idades.push_back(i);
    }
    
    for (int i = 0; i <= 10; i++)
    {
        std:: cout << idades[i] << "\n";
    }
    
    
    //Mapas
    
    std::map<std::string, float> tamanhos;
    
    tamanhos["Pedro"] = 1.85;
    
    float tamanho = tamanhos["Pedro"];
    
    std:: cout << tamanho << "\n";
    
    for (int i = 0; i <= 10; i++)
    {
        std::string chave;
        float altura;
        
        std:: cout << "Chave: ";
        getline(std::cin, chave);
        
        std:: cout << "\n";
        
        std:: cout << "Valor: ";
        std:: cin >> altura;
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        std:: cout << "\n";
        
        tamanhos[chave] = altura;
        
    }
    
    
}    