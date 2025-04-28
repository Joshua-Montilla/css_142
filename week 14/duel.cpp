#include <iostream>
#include <ctime>

int rollF(){
    return rand() % 10 + 1;
}

int rollD(){
    return rand() % 10 + 1;
}

bool pierce(int att, int def){
    return att > def;
}

void duel(int battles){
    int obi = 0, maul = 0;
    for (int i = 1; i <= battles; i++)
    {
        int attack = rollF();
        int block = rollD();
        std::cout << "> Round " << i << " <\nObi-Wan tries to attack with " << attack << " against Darth Maul's " << block;

        if (pierce(attack, block))
        {
            std::cout << ": GUARD BREAK!" << std::endl;
            obi++;
        }
        else
        {
            std::cout << ": PARRIED!" << std::endl;
            maul++;
        }
        
    }

    std::cout << "\nObi finishes with " << obi << "\nMaul finishes with " << maul << "\n\nOur Winner is..." << std::endl;

    if (obi > maul)
    {
        std::cout << "OBI-WAAAAAAAAAAAAAAAAAAAANNNNNNN!!" << std::endl;
    }
    else if (obi < maul)
    {
        std::cout << "DARTH MAAAAAAUUUUUUUUULLLLLL!!" << std::endl;
    }
    else
    {
        std::cout << "Nobody. It's a TIE!" << std::endl;
    }
    
}

int main(){
    srand(time(NULL));
    duel(5);
    return 0;
}
