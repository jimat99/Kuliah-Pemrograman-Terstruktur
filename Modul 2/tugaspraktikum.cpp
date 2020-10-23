#include <iostream>

using namespace std;

int main(){

    int x, y, a, i, k, j;
    cout<<"X = ";
    cin>>x;
    cout<<"Y = ";
    cin>>y;
    cout<<"\n";

    for(i=x-1; i<y; i++){
        for(k=0; k<=((2*y)-(2*i)); k++){
            cout<<" ";
            }
            for(j=0; j<=i; j++){
            if(j==0||i==j){
                a=1;
                cout<<"   "<<a;
                }
            /*else if(a==5){
                a=a*(i+1-j)/j;
                cout<<"   "<<a-10;}
            else if(a==10){
                a=a*(i+1-j)/j-10;
                cout<<"   "<<a;}
            else if(a==0){
                a=a*(i+1-j)/j;
                cout<<"   "<<a+5;}*/
            else{
                a=a*(i+1-j)/j;
                cout<<"   "<<a%10;
                }
        }
        cout<<"\n";
    }
}
