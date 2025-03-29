#include<iostream>
#include<limits>
using namespace std;struct a{string b;double c;};int main(){int d;while(true){cout<<"Enter a rebirth amount: ";cin>>d;if(cin.fail()||d<1)cin.clear(),cin.ignore(numeric_limits<streamsize>::max(),'\n'),cout<<"Invalid input! Please enter an integer greater than or equal to 1.\n";else break;}a e[]={{"Tiny",.025},{"Punching",.05},{"Large",.075},{"Golden",.2},{"Frozen",.375},{"Mystic",.75},{"Inferno",1.125},{"Legends",2.5},{"Muscle King",12.5},{"Ancient Jungle",16.25}};for(auto f:e)cout<<f.b<<" rock: "<<(d+20)*f.c<<endl;}
