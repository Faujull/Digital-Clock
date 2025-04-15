#include<bits/stdc++.h>
#include<windows.h>

using namespace std;

int main() {
    int h,m,s,a=0,e=0;
    while(e==0)
    {
        cout << "Current Hour: " << endl;
        cin >> h;
        cout << "Current Minutes: " << endl;
        cin >> m;
        cout << "Current Second: " << endl;
        cin >> s;
        if(h<24 && m<60 && s<60)
        {
            e++;
        }
        else
        {
            system("cls");
        }
    }
    while (a==0)
    {
        system("cls");
        cout << h << ":" << m << ":" << s << endl;
        Sleep(1000);
        s++;
        if(s>59)
        {
            s=0;
            m++;
        }
        if(m>59)
        {
            m=0;
        }
        if(h>24)
        {
            h=0;
        }
    }
    return 0;
}

