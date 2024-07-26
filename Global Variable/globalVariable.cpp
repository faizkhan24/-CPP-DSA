#include<bits/stdc++.h>
using namespace std;

int score = 24;

void a( int& i) {
    cout<<"score in a "<<score<<endl;

   
    cout<<i<<endl;
}
void b( int& i) {
       cout<<"score in b "<<score<<endl;
    cout<<i<<endl;
}

int main(){
        cout<<"score in main "<<score<<endl;
    int i=5;
    a(i);
    b(i);
      


}