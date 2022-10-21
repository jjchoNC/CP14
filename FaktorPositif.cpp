#include <iostream>
using namespace std;

int g(int a)
{
    int temp = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            temp += 1;
        }      
    }
    return temp;
}

int h(int a){
    int faktor = 0;

    for (int i = 1; i <= a; i++)
    {  
        faktor += g(i);
    }

    return faktor;
}

int main (){
    int a;
    cin >> a;
    cout << h(a);
}