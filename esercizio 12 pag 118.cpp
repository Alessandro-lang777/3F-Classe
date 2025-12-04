#include <iostream>;
using namespace std;
int main(){
    int fratello1, fratello2, fratello3;

    cout << "Inserisci l'eta del primo fratello: ";
    cin>>fratello1;

    cout << "Inserisci l'eta del secondo fratello: ";
    cin>>fratello2;

    cout << "Inserisci l'eta del terzo fratello: ";
    cin>>fratello3;

    //Trova eta maggiore e minore
    int maggiore=fratello1;
    int minore=fratello1;

    if(fratello2>maggiore) maggiore = fratello2;
    if(fratello3>maggiore) maggiore = fratello3;

    if(fratello2>minore) minore = fratello2;
    if(fratello3>minore) minore = fratello3;

    int differenza = maggiore-minore;
    cout<<"La differenza di eta tra il maggiore e il minore e': " 
    << differenza<<" anni."<<endl;

    return 0;
}