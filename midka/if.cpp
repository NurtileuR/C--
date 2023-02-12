#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c;
cin >>a>>b>>c;
int n,m,d;
cin >>n>>m>>d;
int a1,a2;
a2 =max(max(a,b),c)*max(max(n,m),d);
a1 =min(min(a,b),c)*min(min(n,m),d);
if((a>b && a <c) || (a>c && a<b)){
    if((n>m && n <d) || (n<m && n>d) ){
        cout << (a*n)+a1+a2;
    }  
    return 0;
}
else if((b>a && b<c) || (b<a && b>>c)){
    if((m>n && m<d) || (m>d && m<n)){
        cout << (b*m)+a1+a2;
    }
    return 0;
}
if((a>b && a<c) || (a>c && a<b)){
    if((m>n && m<d) || (m>d && m<n)){
    cout << (a*m)+a1+a2;
    }   
    return 0;
}
else if((a>b && a <c) || (a>c && a<b)){
    if((d>n && d<m) || (d>m &&d<n)){
        cout << (a*d)+a1+a2;
    }
    return 0;
}
if((b>a && b<c) || (b<a && b>>c)){
    if((n>m && n <d) || (n<m && n>d)){
        cout << (b*n)+a1+a2;
    }
    return 0;
}
else if((b>a && b<c) || (b<a && b>>c)){
    if((d>n && d<m) || (d>m &&d<n)){
        cout << (b*d)+a1+a2;
    }
    return 0;
}
if((c>a && c<b) || (c>b && c<a)){
    if((n>m && n <d) || (n<m && n>d)){
        cout<<(c*n)+a1+a2;
    }
    return 0;
}
else if((c>a && c<b) || (c>b && c<a)){
     if((m>n && m<d) || (m>d && m<n)){
        cout <<(c*m)+a1+a2;
    }
    return 0;
}
 else if((c>a && c<b) || (c>b && c<a)){
    if((d>n && d<m) || (d>m &&d<n)){
        cout << (c*d)+a1+a2;
        }
        return 0;
    }
}


