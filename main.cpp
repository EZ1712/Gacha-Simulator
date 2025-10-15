#include <iostream>
#include <cstdlib>

using namespace std;

void item() {

    int pull = rand() % 100;

    if ( pull >= 90) {
        cout << "SUPER RARE" << endl;
    } else if ( pull >= 70 ) {
        cout << "RARE" << endl;
    }  else {
        cout << "COMMON" << endl;
    }

    cout << endl;
}

void exit() {
    cout << "\n<==========> EXIT <==========>" << endl;
}

int main() {

    int pity = 80;
    char gacha, menu;
    int count = 0;

    cout << "\n<====================>  Gacha Simulator  <====================> \n\n";
    cout << "selamat datang di gacha simulator, program untuk latihan keberuntungan" << endl << endl;
    
    do {
        cout << "apakah anda siap gacha? (y/n) : ";
        cin >> menu;

        if (menu != 'y' && menu != 'n') {
            cout << "\n<=====> Input Invalid <=====>\n" << endl;
        }
    } while ( menu != 'y' && menu !='n');

    if (menu == 'y') {

        cout << "mulai gacha (y/n) : ";
        cin >> gacha;

        if (gacha == 'y') {

            do {
                cout << "=========================" << endl;
                cout << "pity = " << pity << " || " << "gacha ke-" << count << endl << endl;

                cout << "result =====>  ";
                item();
                
                cout << "=========================" << endl;
                cout << "gacha lagi (y/n) : ";
                cin >> gacha;

                pity--;
                count++;

                if (pity <= 0) {
                    pity += 80;
                }
                
            } while (gacha == 'y');

            exit();
        } else {
            exit();
        }

    } else {
       exit();
    }

    return 0;
}
