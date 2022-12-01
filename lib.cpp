#include "lib.h"

bool verifica (int a){
    int i = 2;
    bool flag = false;
    if (a!=2){
        while (i!=a) {
            if (a%i==0){
                break;
            }
            i++;
            if (i==a) {
                flag = true;
            }
        }
    } else {
        flag = true;
    }
    return flag;
}
