#include <iostream>;
using namespace std;
int main(){
    int eta;

    cout << "Inserisci l'eta: ";
    cin >> eta;

    cout << "\nMezzi che puoi guidare;\n";

    if(eta < 14){
        cout << "Nessun mezzo a motore puoi guidare. \n";
        return 0;
    }
    if (eta >= 14){
        cout << "- Scooter 50cc\n";
    }
    if (eta >= 16){
        cout << "- Moto 125cc\n";
    }
    if (eta >= 18){
        cout << "- Auto fino a 95 cavalli\n";
    }
    if (eta >= 21){
        cout << "Qualsiasi auto o moto senza limitazioni\n ";
    }
    return 0;
}