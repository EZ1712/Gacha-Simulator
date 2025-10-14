#include <iostream>
#include <cstdlib>

using namespace std;

int pull() {
    int pull;
    pull = rand() % 100;
    return pull;

}

int main() {

    int pity = 80;
    char gacha, menu;

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

        cout << "pity = " << pity << endl;
        cout << "mulai gacha (y/n) : ";
        cin >> gacha;

        while (gacha == 'y') {
            cout << "pity = " << pity << endl;
            cout << "gacha lagi (y/n) : ";
            cin >> gacha;

            cout << pull() << endl;

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
