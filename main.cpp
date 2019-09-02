#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int lp = 100;
    int step = 1;
    int points = 0;
    int good = 0;
    char opc = 'x';
    cout << "-----------Ejemplo Adventure------------" << endl;
    cout << "paso " << step << " de 20";
    cout << " puntos: " << points << "-----------Vida: " << lp << endl;
    cout << "Estas perdido en un bosque tienes 3 opciones:" << endl;
    cout << "a-Prender una fogata para pasar la noche"<< endl;
    cout << "b-Subir a un arbol para pasar la noche"<< endl;
    cout << "c-Caminar e intentar buscar ayuda"<< endl;
    cin >> opc;
    if (opc == 'a' || opc == 'b') {
        if (opc == 'a'){
            good ++;
            points += 100;
            cout << "Bien el fuego evita la hipotermia" << endl;
        }
        if (opc == 'b'){
            good = 0;
            points += 50;
            lp -=40;
            cout << "Sufres de hipotermia pierdes 40 puntos de vida" << endl;
        }
        step ++;
        cout << "Pasas la noche a salvo" << endl;
        system("pause");
        system("cls");

        //paso 2
        cout << "paso " << step << " de 20";
        cout << " puntos: " << points << "-----------Vida: " << lp << endl;
        cout << "Empiezas a tener hambre que eliges:" << endl;
        cout << "a-Cazar un venado"<< endl;
        cout << "b-Comer hongos que encuentras debajo de los arboles"<< endl;
        cout << "c-No comer"<< endl;
        cin >> opc;

        if (opc == 'b' || opc == 'c') {
            if (opc == 'b') {
                good ++;
                points += 100;
                cout << "Bien los hongos que crecen debajo de los arboles son comestibles" << endl;
            }
             if (opc == 'c'){
                good = 0;
                points += 50;
                lp -=40;
                cout << "Te debilitas por no comer pierdes 40 puntos de vida" << endl;
            }
            step ++;
            cout << "Pasas la noche a salvo" << endl;
            system("pause");
            system("cls");

            //paso 3
            cout << "paso " << step << " de 20";
            cout << " puntos: " << points << "-----------Vida: " << lp << endl;
            cout << "Te persigue un Oso salvaje!:" << endl;
            cout << "a-Huyes"<< endl;
            cout << "b-Peleas contra el Oso"<< endl;
            cout << "c-Subes a un arbol"<< endl;
            cin >> opc;

            if (opc == 'a' || opc == 'c') {
                if (opc == 'c') {
                    good ++;
                    points += 100;
                    cout << "Bien el oso no puede trepar" << endl;
                    if (good >= 2 && lp < 100) {
                        cout << "Recuperas 40 de vida por buenas elecciones" << endl;
                        lp += 40;
                        good = 0;
                    }
                }
                if (opc == 'a'){
                    good = 0;
                    points += 50;
                    lp -=40;
                    cout << "Te lastimas en la huida pierdes 40 puntos de vida" << endl;
                    if (lp <= 0) {
                        cout << "No puedes continuar tus heridas te cuestan la vida" << endl;
                        cout << " puntos: " << points << "-----------Vida: " << lp << endl;
                        return 0;
                    }
                }
                step ++;
                cout << "Pasas la noche a salvo" << endl;
                system("pause");
                system("cls");

                //paso 4
                cout << "Ganaste!!" << endl;
                cout << " puntos: " << points << "-----------Vida: " << lp << endl;
            }else {
                lp = 0;
                cout << "El oso es mas fuerte que tu has muerto" << endl;
                cout << " puntos: " << points << "-----------Vida: " << lp << endl;
                return 0;
            }
        }else {
          lp = 0;
          cout << "El venado te embiste y mueres" << endl;
          cout << " puntos: " << points << "-----------Vida: " << lp << endl;
          return 0;
        }

    }else {
        lp = 0;
        cout << "mueres devorado por un oso" << endl;
        cout << " puntos: " << points << "-----------Vida: " << lp << endl;
        return 0;
    }
}
