/* Question : 

Print the pattern :

*****
*****
*****
*****
*****

*/

#include<iostream>
using namespace std;


void pattern(int r , int c){

for(int i =0; i<r;i++){
    for(int j =0;j<c;j++){
        cout<<"*";
    }
    cout<<endl;

} }


int main(){

int r,c;

cout<<"Enter the number of rows required: "<<endl;
cin>>r;

cout<<"Enter the number of columns required: "<<endl;
cin>>c;


pattern(r,c);

return 0 ;

}

