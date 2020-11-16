#include <iostream>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int n;
    unsigned int i, k, nc, altura[231] = {0};
    cin >> nc;
    while(nc--){
        cin >> n;

        for(i = 0; i < n; i++)
        {
            cin >> k;
            altura[k]++;
        }//lendo as alturas

/***********************************************************************/
       for(i = 20; i <= 230; i++) 
            if(altura[i])
            {
                cout << i;
                altura[i]--;
                break;
            }
        for(; i <= 230; i++)
        {
            while(altura[i])
            {
                cout << " " << i;
                altura[i]--;
            }
            
        }
        cout << endl;//impressão
/***********************************************************************/
    }
}
