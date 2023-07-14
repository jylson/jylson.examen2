//Ejecicio 3 _GUAÑUNA_JESUS_:)//
//Hace un programa que muestre 3 números ordenados de ascendentemente,//
//utilizar un procedimiento para cada operación//
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    int A, B, C;
    system("cls");
	
    cout << "\nPrimer numero: ";
    cin >> A;
    cout << "\nSegundo numero: ";
    cin >> B;
    cout << "\nTercer numero: ";
    cin >> C;

    if(A > B)
       if( B > C)
           cout << C << " " << B << " " << A << endl;
       else if(A > C)
               cout << B << " " << C << " " << A << endl;
            else
               cout << B << " " << A << " " << C << endl;
    else if(B > C)
            if(A > C)
               cout << C << " " << A << " " << B << endl;
            else
               cout << A << " " << C << " " << B << endl;
         else
            cout << A << " " << B << " " << C << endl;
    
    system("pause");
}
