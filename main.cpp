#include <iostream>
using namespace std;

int main() {
  int n=0, primonumero=0, secondonumero=1;
    cin >> n;
    int c=0;

    cout << primonumero+secondonumero << endl;

        while(c<n){
            c= primonumero+secondonumero;
            if(c<=n){
                cout << c << endl;
                primonumero= secondonumero;
                secondonumero= c;
            }
        }
   return 0;
}
