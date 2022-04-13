/*Simulare un’asta in cui ci siano due compratori che si contendono l’acquisto di un oggetto, 
a turno i due compratori dovranno fare un’offerta per l’oggetto da comprare, l’asta termina quando uno dei due compratori 
si ritira offrendo ‘0’,
a quel punto l’altro compratore si sarà aggiudicato l’asta.
Stampare quale compratore si è aggiudicato l’asta e con che cifra. */

#include <iostream>
using namespace std;

int main ()
{
    int soldi1 = 0;
    int soldi2 = 0;
    int valore = 0;
        
        do
        {
            valore == 0;
            cout << "Compratore 1 offre: "; cin >> soldi1; cout << endl;
            cout << "Compratore 2 offre: "; cin >> soldi2; cout << endl;
            
                if ((soldi1 < soldi2 ) && (soldi1 != 0) && (soldi2 != 0))
                {
                    valore = valore + soldi2;
                    cout << "Il valore attuale e': " << valore <<endl;
                }
                
                if ((soldi2 < soldi1) && (soldi1 != 0) && (soldi2 != 0))
                {
                    valore = valore + soldi1;
                    cout << "Il valore attuale e': " << valore <<endl;
                }

                if ((soldi1 == soldi2) && (soldi1 != 0) && (soldi2 != 0))
                {
                    cout << "Non potete offrire la stessa somma!"<<endl;
                    cout <<"Fate offerte piu' alte!"<<endl;

                }

                    if ((soldi1 == 0) && (soldi2 == 0))
                    {
                        cout << "I 2 giocatori hanno abbandonato l'asta!" << endl;
                        cout << "L'asta e' terminata con nessun vincitore" <<endl;
                    }
                    else
                    {
                        if (soldi1 == 0)
                        {
                            valore = valore + soldi2;
                            cout << "Compratore 1 ha abbandonato l'asta!"<<endl;
                            cout << "Venduto a compratore 2 per " << valore - soldi2<< " euro";
                        }
                        if (soldi2 == 0)
                        {
                            valore = valore + soldi1;
                            cout << "Compratore 2 ha abbandonato l'asta" <<endl; 
                            cout << "Venduto a compratore 1 per " << valore - soldi1 << " euro";
                        }
                    }
                    
        }
        while ((soldi1 != 0) && (soldi2 != 0));


    return 0;
}