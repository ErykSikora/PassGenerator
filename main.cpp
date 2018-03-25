#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

using namespace std;

int howmuch;
char pick;

int main()
{
    for (;;){


    cout << "Generator hasel v0.1" << endl;
    cout << "Wybierz typ generowanego hasla: " << endl << endl;
    cout << "------------------------" << endl;
    cout << "1. Tylko litery" << endl;
    cout << "2. Tylko cyfry" << endl;
    cout << "3. Skomplikowane" << endl;
    cout << "4. Szybkie losowanie" << endl;
    cout << "5. Zakoncz program" << endl;
    cout << "------------------------" << endl << endl;

    pick = getch();

    if (pick == '5') {
        return 0;
    }

    if (pick!='4'){
        cout << "Dlugosc hasla (losowo: wybierz 0): ";
        cin >> howmuch;
    } else {
        pick = '3';
        howmuch = 0;
    }
    srand(time(NULL));

        while (howmuch<0) {
            cout << "wartosc nie moze byc mniejsza niz 0! sprobuj ponownie: ";
            cin >> howmuch;
        }
        if (howmuch==0){
            howmuch=rand()%8+4;
        }

    switch (pick) {
        case '1': {
            int abc = 26, which;
            string letters="abcdefghijklmnopqrstuvwxyz", pass="";
            for (int j=0; j<10; j++){
                    system("cls");
                    pass ="";
                for (int i=1; i<=howmuch;i++){
                    which=rand()%abc;
                    pass += letters[which];
                }
                cout << "Wygenerowane haslo: " << pass;
                Sleep(15);
            }
            break;
        }
        case '2': {

            string numbers = "0123456789", pass="";
            int which;

            for (int j=0; j<10; j++){
                    system("cls");
                    pass ="";
                for (int i=1; i<=howmuch; i++){
                    which = rand()%10;
                    pass += numbers[which];
                }
                cout << "Wygenerowane haslo: " << pass;
                Sleep(15);
            }

            break;
        }
        case '3': {
            string chars = "0123456789qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM!@#$%^&*()-_+:", pass="";
            int which;

            for (int j=0; j<10; j++){
                    system("cls");
                    pass="";
                for (int i=1; i<=howmuch; i++){
                    which=rand()%chars.length()-1;
                    pass+=chars[which];
                }
                cout<<"Wygenerowane haslo: "<<pass;Sleep(15);
            }

            break;
        }
        case '5': {
            exit (0);
        }
        default: {
            cout << "Niewlasciwy wybor, sprobuj ponownie";
            break;
        }
    }
    getchar();getchar();
    system("cls");
}
    return 0;
}
