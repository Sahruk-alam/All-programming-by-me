#include<iostream>
using namespace std;
#include<cstring>
int main(){

char name[]="Sahruk";
char name1[]="alam";

int len=strlen(name);
cout<<len<<endl;

strcpy(name1,name);
cout<<name1<<endl;

strcat(name , name1);
cout <<name<<endl;

strupr(name);
cout <<name<<endl;

strlwr(name);
cout <<name<<endl;

strcmp(name,name1);
if (name==0){
cout <<"Equal"<<endl;}

else
{
 cout <<"Not equal"<<endl;
}




    return 0;
}
