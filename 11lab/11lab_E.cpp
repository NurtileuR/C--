#include <bits/stdc++.h>
using namespace std;
 
const int MAX_CHAR = 26;
 
void commonCharacters(string str[], int n)
{
    // primary array for common characters
    // we assume all characters are seen before.
    bool prim[MAX_CHAR];
    memset(prim, true, sizeof(prim));

    for (int i = 0; i < n; i++) {
 

        bool sec[MAX_CHAR] = { false };
 

        for (int j = 0; str[i][j]; j++) {
 
            if (prim[str[i][j] - 'a'])
                sec[str[i][j] - 'a'] = true;
        }
        memcpy(prim, sec, MAX_CHAR);
    }

    for (int i = 0; i < 26; i++)
        if (prim[i])
            printf("%c ", i + 'a');
}

int main()
{   int m;
    cin >> m;
    string a[m];
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    int n = sizeof(a)/sizeof(a[0]);
    commonCharacters(a,n);
    return 0;

}