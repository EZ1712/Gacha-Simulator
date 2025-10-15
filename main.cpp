#include <iostream>
#include <cstdlib>

using namespace std;

void item(int pull) {

    cout << endl << pull << " ";

    if ( pull >= 90) {
        cout << "SUPER RARE" << endl;
    } else if ( pull >= 70 ) {
        cout << "RARE" << endl;
    }  else {
        cout << "COMMON" << endl;
    }

    cout << endl;
}


int main() {

    int pity = 80;
    char gacha, menu;
    int pull = rand();

    cout << "=====>  Gacha Simulator  <=====" << endl;
    cout << "selamat datang di gacha simulator, program untuk latihan keberuntungan" << endl;
    
    do {
        cout << "apakah anda ingin gacha (y/n) : ";
        cin >> menu;

        if (menu != 'y' && menu != 'n') {
            cout << "input invalid" << endl;
        }
    } while ( menu != 'y' && menu !='n');

    if (menu == 'y') {
        cout  << "sudah saatnya gacha" << endl;

        cout << "mulai gacha (y/n) : ";
        cin >> gacha;

        while (gacha == 'y') {
            cout << "pity = " << pity << endl;
            cout << "gacha lagi (y/n) : ";
            cin >> gacha;

            cout << pull << endl;
            // cout << rand();
            // item(pull);

            pity--;
        }

        // do {
        //     cout << "pity = " << pity << endl;
        //     cout << "gacha (y/n)";
        //     cin >> gacha;

            

        //     pity--;
        // } while ( gacha == 'y');

        cout << "sudahan" << endl;
    } else {
        cout << "silahkan keluar" << endl;
    }

    return 0;
}
