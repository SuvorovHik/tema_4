# include <iostream>
# include <conio.h>
using namespace std;
int power(int x, int y);
int main() {
    int n, m, k;
    cout<<"Chislo 1 = "; cin>>n;
    cout<<"Chislo 2 = "; cin>>m;
    if (power(n, k)>power(m, k)) cout<<"V chisle 1 bolshe"<<endl;
    else cout<<"V chisle 2 bolshe"<<endl;
    _getch();
}
int power(int x, int y)
{
    do {
        y+=1;
        x=x/10;
    }while(x>0);
    return y;
}
