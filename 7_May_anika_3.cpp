#include <bits/stdc++.h>
using namespace std;
class String
{
    int len;
    char *ptr;
public:
    String()
    {
        len=0;
        ptr= new char[100];
    }
    char get(int ind)
    {
//return the character at the given index
//Check if index is out of bound
//return 0 in case of error

        return ptr[ind];
    }
    void put(int ind,char c)
    {
//Assign character c at position index
//Check if index is out of bound
//return -1 in case of error
        for(int i=len-1;i>=ind; i--)
        {
            ptr[i+1]=ptr[i];
        }
        ptr[ind]=c;
        //cout<<c<<endl;
        //cout<<ptr[ind];
        len++;
    }
    int getlength()
    {
//return the allocation length of the string
        return len;
    }
    void print()
    {
//print the string upto allocation size
        for(int i=0; i<len; i++)
        {
            cout<<ptr[i];
        }
        cout<<endl;
    }

};
void compare(String s1,String s2)
{
    if(s1.getlength()!=s2.getlength())
    {
        cout<< "Not equal\n";
        return;
    }
    for(int i=0;i<s1.getlength();i++)
    {
        if(s1.get(i)!=s2.get(i))
        {
            cout<< "Not equal\n";
        return;
        }
    }
    cout<< "equal"<<endl;
}
String concat(String s1, String s2){
    String ans;
    int d=0;
    for(int i=0;i<s1.getlength();i++)
    {
        ans.put(d,s1.get(i));
        d++;
    }
    for(int i=0;i<s2.getlength();i++)
    {
        ans.put(d,s2.get(i));
        d++;
    }
    return ans;
}
void insert(String &st, int index, char c) {
//string s1=�abcd�
//insert(s1,0,�k�) //kabc
// Insert char c at index position of st. Shift other characters to
st.put(index,c);
return;
}

int main()
{
    String s1,s2;
    s1.put(0,'e');
    s1.put(1,'s');
    s1.put(2,'y');
    s1.put(3,'q');
    /*cout<<s.getlength()<<endl;
    cout<<s.get(0)<<endl;
    s.print();*/
    s2.put(0,'e');
    s2.put(1,'l');
    s2.put(2,'y');
    s2.put(3,'q');
    compare(s1,s2);
    String ans=concat(s1,s2);
    ans.print();
    insert(ans,3,'p');
    ans.print();
}

