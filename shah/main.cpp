#include <iostream>

using namespace std;

int main()
{
    char figura, x, f1;
    int y, f2, d;

    cin >> figura;
    cin >> f1 >> f2 >> x >> y;
d=x-f1;
    switch(figura)
    {
    case 'R':
        if(f1 == x || f2 == y) cout << "Yes" << endl;
        else cout << "No" << endl;
        break;
    case 'N':
        if((x==f1-1&&y==f2-2)||(x==f1-1&&y==f2+2)) cout << "Yes" << endl;
else if((x==f1-2&&y==f2-1) || (x==f1-2&&y==f2+1)) cout << "Yes" << endl;
else cout << "No" << endl;
break;
    case 'B':
       if(y==d+f2||y==f2-d) cout << "Yes" << endl;
       else cout << "No" << endl;
       break;
    case 'Q':
        if(f1 == x || f2 == y) cout << "Yes" << endl;
        else if(y==d+f2||y==f2-d) cout << "Yes" << endl;
        else cout << "No" << endl;
        break;

    }





    return 0;
}
