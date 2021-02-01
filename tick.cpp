#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int i = 7;
    while(i>=5){
        for(int j = i;j >= 0;j--){
            if(j==0){
                cout << "*" << endl;
            }
            else{
                cout <<" ";
            }
        }
        i--;
    }
    cout << "*   *" << endl << " * *" << endl << "  *";
}
    