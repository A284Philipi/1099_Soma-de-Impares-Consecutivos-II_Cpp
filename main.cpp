#include <iostream>

using namespace std;

int main()
{
    int cont = 0, i = 0, x = 0, y = 0, soma = 0, casos = 0, veri = 0;
    cin >> casos;
    while (cont < casos){
        cin >> x;
        cin >> y;
        if (x > y){
            veri = y;
            y = x;
            x = veri;
        }else{
            x = x;
            y = y;
        }
        i = x + 1;
        for (i; i < y; i++){
            if (i % 2 == 1){
                soma = soma + i;
            }
        }
        cout << soma <<endl;
        soma = 0;
        cont++;
    }
    return 0;
}
