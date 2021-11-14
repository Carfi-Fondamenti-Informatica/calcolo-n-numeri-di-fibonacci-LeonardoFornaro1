#include <iostream>
using namespace std;
int main() {
    int z;
    cin >> z;
    int primo=0;
    int secondo=1;
    int terzo=1;

    if(z>=2){
    for(int i=0; i<z; ++i){
        cout << terzo << endl;
        terzo=primo+secondo;
        primo=secondo;
        secondo=terzo;
    }
    }
    else{
        cout << "errore" << endl;
    }

    return 0;
}
