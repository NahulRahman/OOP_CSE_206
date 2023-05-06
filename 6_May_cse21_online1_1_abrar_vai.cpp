#include <iostream>
#include <cstring>
using namespace std;
class User{
    char *id, *name;
public:
    User(char *a, char *b){
        int size_a = strlen(a);
        id = new char[size_a];
        strcpy(id, a);
        int size_b = strlen(b);
        name = new char[size_b];
        strcpy(name, b);
    }
    void setId(char *a){
        int size_a = strlen(a);
        id = new char[size_a];
        strcpy(id, a);
    }
    void setName(char *a){
        int size_a = strlen(a);
        name = new char[size_a];
        strcpy(name, a);
    }
    char *getId() { return id; }
    char *getName() { return name; }
    void print() { cout << "ID: " << id << ", Name: " << name << " "; }
    ~User() { delete id, delete name; }
};

class Account
{
    User *user;
    char *phone;
    int *balance;

public:
    Account(char *a, char *b, char *c){
        user = new User(a, b);
        int size_c = strlen(c);
        phone = new char[size_c];
        strcpy(phone, c);
        balance = new int;
        *balance = 500;
    }
    Account(const Account &x){
        user = new User(x.user->getId(), x.user->getName());
        int s = strlen(x.phone);
        phone = new char[s + 1];
        strcpy(phone, x.phone);
        balance = new int;
        *balance = *x.balance;
    }
    void setId(char *a) { user->setId(a); }
    void setName(char *a) { user->setName(a); }
    void setPhoen(char *a){
        int size_a = strlen(a);
        phone = new char[size_a];
        strcpy(phone, a);
    }
    char *getPhone() { return phone; }
    void setBalance(int a) { *balance += a; }
    int getBalance() { return *balance; }
    void print() { user->print(), cout << ", Phone: " << phone << ", Balance: " << *balance << endl; }
    ~Account() { delete user, delete phone, delete balance; }
};
Account acc[4] = {Account("10", "Rafi", "010"), Account("15", "Binita", "015"), Account("29", "Nabil", "029"), Account("36", "Maisha", "036")};
void transfer(int i, int j, int ammount){
    int c, d;
    if (acc[i].getPhone() == acc[j].getPhone())  cout << "Invalid transaction\n";
    else if (acc[i].getBalance() < ammount)  cout << "Insufficient balance\n";
    else{
        acc[i].setBalance(-1 * ammount);
        acc[j].setBalance(ammount);
        cout << "Transaction successful\n";
    }
}
int main(){
    Account admin = acc[0];
    admin.setId("A-11");
    admin.setName("Admin");
    admin.setPhoen("01511"); //? rafi,binta, nabil, maisha
    transfer(2, 0, 100);     //! 600, 500,400,500
    transfer(1, 0, 150);     //!  750 ,350,400, 500
    transfer(1, 1, 100);     //! invalid
    transfer(2, 3, 800);     //! insufficient
    for (int i = 0; i < 4; ++i)
        acc[i].print();
    admin.print();
}
