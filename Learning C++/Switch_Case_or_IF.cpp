#include <iostream>
#include <string>

int main()
{

    int exemplo;
    
    std:: cout << "Digite [1] | [2] | [3] | [4]\n";
    std:: cin >> exemplo;
    
    /*switch (exemplo)
    {
        case 1:
            std:: cout << "Charmander\n";
            break;
        case 2:
            std:: cout << "Squirtle\n";
            break;
        case 3:
            std:: cout << "Bulbasaur\n";
            break;
        case 4:
            std:: cout << "Pikachu\n";
            break;
    }*/
    
    if (exemplo == 1)
    {
        std:: cout << "Charmander\n";
    }
    if (exemplo == 2)
    {
        std:: cout << "Squirtle\n";
    }
    if (exemplo == 3)
    {
        std:: cout << "Bulbasaur\n";
    }
    if (exemplo == 4)
    {
        std:: cout << "Pikachu\n";
    }

}