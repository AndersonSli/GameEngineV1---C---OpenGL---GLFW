#include <iostream>
#include <string>
#include <vector>
#include <map>

class gato
{
    
    private: 
    
        std::string nome;
        
        int idade;
        
        std::string cor;
        
        std::string comportamento;

    public:
    
        gato(std::string nome, int idade, std::string cor, std::string comportamento);
    
        void mia();
        
        void aranha();
        
        void dorme();
        
        void come();
        
        //Set
        
        void setNome(std::string nome);
        
        void setIdade(int idade);
        
        void setCor(std::string cor);
        
        void setComportamento(std::string comportamento);
    
        //Get
        
        std::string getNome();
        
        int getIdade();
        
        std::string getCor();
        
        std::string getComportamento();

};


int main()

{

    gato laranja("laranja", 5, "laranja", "docil");
    gato galego("galego", 5, "branco", "agresivo");
    
    std:: cout << laranja.getNome();
    std:: cout << "\n";
    std:: cout << laranja.getIdade();
    std:: cout << "\n";
    std:: cout << laranja.getCor();
    std:: cout << "\n";
    std:: cout << laranja.getComportamento();
    
    std:: cout << "\n";
    
    std:: cout << galego.getNome();
    std:: cout << "\n";
    std:: cout << galego.getIdade();
    std:: cout << "\n";
    std:: cout << galego.getCor();
    std:: cout << "\n";
    std:: cout << galego.getComportamento();
    std:: cout << "\n";
    std:: cout << "\n";
    
    laranja.mia();
    std:: cout << "\n";
    galego.come();


    return 0;
}


    gato::gato(std::string nome, int idade, std::string cor, std::string comportamento)
    {
        this->nome = nome;
        this->idade = idade;
        this->cor = cor;
        this->comportamento = comportamento;
    }
    
    void gato::mia()
    {
        std:: cout << "Miau";
    }
    
    void gato::aranha()
    {
        std:: cout << "Aranhao!";
    }
    
    void gato::dorme()
    {
        std:: cout << "Dormindo..ZZZZ!";
    }
    
    void gato::come()
    {
        std:: cout << "Comendo!";
    }
    
    //Set
    
    void gato::setNome(std::string nome)
    {
        this->nome = nome;
    }
    
    void gato::setIdade(int idade)
    {
        this->idade = idade;
    }
    
    void gato::setCor(std::string cor)
    {
        this->cor = cor;
    }
    
    void gato::setComportamento(std::string comportamento)
    {
        this->comportamento = comportamento;
    }

    //Get
    
    std::string gato::getNome()
    {
        return this->nome;    
    }
    
    int gato::getIdade()
    {
        return this->idade;
    }
    
    std::string gato::getCor()
    {
        return this->cor;
    }
    
    std::string gato::getComportamento()
    {
        return this->comportamento;    
    }