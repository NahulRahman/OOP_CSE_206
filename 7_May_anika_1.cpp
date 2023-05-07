#include<bits/stdc++.h>
#define ll       long long
#define endl     "\n"
#define ff       first
#define ss       second
#define vll      vector<ll>
#define vllp     vector<pair<ll,ll>>
#define pr       pair<ll,ll>
#define test     ll T; cin>>T; while(T--)
#define MAX      INT64_MAX
#define MIN      INT64_MIN
#define f()      for(ll i=0;i<n;i++)
#define all(z)   sort(z.begin() , z.end())
#define allr(z)  sort(z.rbegin() , z.rend())
#define up(s)    transform(s.begin(), s.end(), s.begin(), ::toupper)
#define lw(s)    transform(s.begin(), s.end(), s.begin(), ::tolower)
#define dbg1(x)          cout<<"["<<#x<<": "<<x<<"]"<<endl;
#define dbg2(x, y)       cout<<"["<<#x<<": "<<x<<"]"<<"  ["<<#y<<": "<<y<<"]"<<endl;
#define dbg3(x, y, z)    cout<<"["<<#x<<": "<<x<<"]"<<"  ["<<#y<<": "<<y<<"]"<<"  ["<<#z<<": "<<z<<"]"<<endl;
#define dbg4(x, y, z, k) cout<<"["<<#x<<": "<<x<<"]"<<"  ["<<#y<<": "<<y<<"]"<<"  ["<<#z<<": "<<z<<"]"<<"  ["<<#k<<": "<<k<<"]"<<endl;
#define  yes     cout<<"YES"<<endl
#define  no      cout<<"NO"<<endl
#define sbf      ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ull unsigned long long int
using namespace std;

class FileHandler
{
    public:
    char name[100];
    FILE * fp;
    FileHandler()
    {
        fp = fopen("input.txt", "r");
    }
    void vowelCount()
    {

        ll v=0;
        while (!feof(fp))
        {
            fgets(name, 100, fp);
            //  cout << name << endl;
            string s=name;
            //cout<<s<<endl;
            for(ll i=0;i<s.size();i++)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                    v++;
                }
            }
        }
        cout<<"Vowel= "<<v<<endl;
    }
    void print()
    {
        fp = fopen("input.txt", "r");
        while (!feof(fp))
        {
            fgets(name, 100, fp);
            //  cout << name << endl;
            string s=name;
            cout<<s<<endl;
        }
    }
};


int main()
{
  FileHandler f;
  f.vowelCount();
  f.print();
}
