//string is a class in c++. we can access various fuctions through this
#include<bits/stdc++.h>
using namespace std;
int main(){
    /* basic input output of strings
    string s;
   // cin>>s;  //here after space no string will be printed as output
    //getline(cin,s);//to overcome space problem this function to be used
   //char first=s[2];  input: qwertyui output=e
    //cout<<first;*/

    /* appending an element of string at the end
    string s="MIST";
    s.append("CSE");
    cout<<s;  // op: MISTCSE
    */

    /* //checking if a string is empty or not, using bool and as string s was MIST which is not empty, thus its wrong, so op: 0

    string s="MIST";
    bool b=s.empty();
    cout<<b;*/

    /*to insert element in a string at a specific position
    string s="BANGLADESH";
    s.insert(4,"la");
    cout<<s;// op: BANGlaLADESH
    */
   //converting integer to string

    /*
    string s;
    getline(cin,s);
    int n=25;
    string k=to_string(n);
    bool b=k.empty();
    cout<<b; */


    /* //converting string to integer
    string s="25";
    int k=stoi(s);//stoi=string to integer;
    k++;
    cout<<k;//op:26
    */

   /* string compare
    string s="MIST",p="CSE";
    if(s==p) cout<<"YES";
    else cout<<"NO";
        */

     /* string reverse
      string s="MIST";
      reverse(s.begin(),s.end());
      cout<<s; //op: TSIM
    */

    /*copy one string to another string
    string s="MIST";
    string m=s;
    cout<<m; //op: MIST(copied from m to n)
    */

    /* erasing the elements of string at a specific index and length
    string s="BANGLADESH";
    s.erase(3,2);// here 3 means the third index and l means the length after the index that should be erased
    cout<<s; //op: BANADESH
    */
}
