#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string frase;
    while(cin >> frase)
    {
        if(frase =="brasil") cout <<"Feliz Natal!\n";
        else if(frase =="alemanha") cout <<"Frohliche Weihnachten!\n";
        else if(frase =="austria") cout <<"Frohe Weihnacht!\n";
        else if(frase =="coreia") cout <<"Chuk Sung Tan!\n";
        else if(frase =="espanha") cout <<"Feliz Navidad!\n";
        else if(frase =="grecia") cout <<"Kala Christougena!\n";
        else if(frase =="estados-unidos") cout <<"Merry Christmas!\n";
        else if(frase =="inglaterra") cout <<"Merry Christmas!\n";
        else if(frase =="australia") cout <<"Merry Christmas!\n";
        else if(frase =="portugal") cout <<"Feliz Natal!\n";
        else if(frase =="suecia") cout <<"God Jul!\n";
        else if(frase =="turquia") cout <<"Mutlu Noeller\n";
        else if(frase =="argentina") cout <<"Feliz Navidad!\n";
        else if(frase =="chile") cout <<"Feliz Navidad!\n";
        else if(frase =="mexico") cout <<"Feliz Navidad!\n";
        else if(frase =="antardida") cout <<"Merry Christmas!\n";
        else if(frase =="canada") cout <<"Merry Christmas!\n";
        else if(frase =="irlanda") cout <<"Nollaig Shona Dhuit!\n";
        else if(frase =="belgica") cout <<"Zalig Kerstfeest!\n";
        else if(frase =="italia") cout <<"Buon Natale!\n";
        else if(frase =="libia") cout <<"Buon Natale!\n";
        else if(frase =="siria") cout <<"Milad Mubarak!\n";
        else if(frase =="marrocos") cout <<"Milad Mubarak!\n";
        else if(frase =="japao") cout <<"Merii Kurisumasu!\n";
        else  cout << "--- NOT FOUND ---\n";  
    }
}