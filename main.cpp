#include<iostream>

using namespace std;

int main(){
    string nama1,nama2;
    bool login = true;

    do{
    cout << "                       ===========================" << endl;
    cout << "                        C H E S S   P R O G R A M " << endl;
    cout << "                       ===========================" << endl << endl;

    cout << "Masukkan username (White Side) : ";cin >> nama1;
    cout << "Masukkan username (Black Side) : ";cin >> nama2;

    if(nama1 != nama2)
    {
        cout << "Login berhasil!" << endl;
        login = false;
        system("pause");
        system("cls");
    }

    else
    {
        cout << "Username yang anda masukkan sudah digunakan." << endl;
        system("pause");
        system("cls");
    }

    }while(login);


}
