#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c1[]="vertebrado", c11[22]="ave", c12[]="mamifero";
    char c111[]="carnivoro", c112[]="onivoro", c124[]="herbivoro";
    char a1[]="aguia", a2[]="pomba", a3[]="homem", a4[]="vaca";
    char c2[]="invertebrado", c21[]="inseto", c22[]="anelideo";
    char c211[]="hematofago", a5[]="pulga", a6[]="lagarta";
    char a7[]="sanguessuga", a8[]="minhoca";
    char a[22], b[22], c[22];
    cin>> a;
    if(0==strcmp(a,c1))
    {
        cin>>b;
        if(0==strcmp(b,c11))
        {
            cin>>c;
            if(0==strcmp(c,c111))
                cout<<a1<<endl;
            else if(0==strcmp(c,c112))
                cout<<a2<<endl;
        }
        if(0==strcmp(b,c12))
        {
            cin>>c;
            if(0==strcmp(c,c112))
                cout<<a3<<endl;
            else if(0==strcmp(c,c124))
                cout<<a4<<endl;
        }
    }
    else if(0==strcmp(a,c2))
    {
        cin>>b;
        if(0==strcmp(b,c21))
        {
            cin>>c;
            if(0==strcmp(c,c211))
                cout<<a5<<endl;
            else if(0==strcmp(c,c124))
                cout<<a6<<endl;
        }
        if(0==strcmp(b,c22))
        {
            cin>>c;
            if(0==strcmp(c,c211))
                cout<<a7<<endl;
            else if(0==strcmp(c,c112))
                cout<<a8<<endl;
        }
    }
    return 0;
}




/*
int main(){
    char x[20],y[20],z[20];
    string a,b,c,d,e,f,g,h,i,j,k;
    a="vertebrado";

    c="ave";
    d="mamifero";

    e="carnivoro";
    f="onivoro";
    g="herbivoro";

    b="invertebrado";
    i="inseto";
    j="anelideo";
    k="hematofago";


    cin>>x>>y>>z;



    if(x==a){
        if(y==c){
            if(z==e){
                cout<<"aguia"<<endl;
            }else if(z==f){
                cout<<"pomba"<<endl;
            }
        }else if(y==d){
            if(z==f){
                cout<<"homem"<<endl;
            }else if(z==g){
                cout<<"vaca"<<endl;
            }
        }
    }else if(x==b){
        if(y==i){
            if(z==k){
                cout<<"pulga"<<endl;
            }else if(z==g){
                cout<<"lagarta"<<endl;
            }
        }else if(y==j){
            if(z==k){
                cout<<"sunguessuga"<<endl;
            }else if(z==f){
                cout<<"minhoca"<<endl;
            }
        }
    }





return 0;}*/
