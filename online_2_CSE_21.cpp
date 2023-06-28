#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

class Person
{
    int id;

    protected:
        string name, email;
        double contact;

    public:
        Person(int id=0, string name="", string email="", double contact=0)
        {
            this->id=id, this->name=name, this->email=email, this->contact=contact;
        }
        virtual void display()=0;
        virtual void add_member()=0;

        int get_id()
        {
            return id;
        }
};

class Student_member: virtual public Person
{
    int level;

    protected:
        string dept;

    public:
        Student_member(int level=0, string dept="", int id=0, string name="", string email="", double contact=0):Person(id,name,email,contact)
        {
            this->level=level, this->dept=dept;
        }

        int get_level()
        {
            return level;
        }

        void display_base()
        {
            cout<<name<<endl<<email<<endl<<get_id()<<endl<<contact;
        }

        void display_st()
        {
            cout<<dept<<" "<<level;
        }

        void display()
        {
            display_base(); cout<<" "; display_st();
            cout<<endl;
        }

        void add_member()
        {
            int llevel,iid;
            string ddept, nname, eemail;
            double ccontact;
            cout<<"Level: "; cin>>llevel;
            cout<<endl;
            cout<<"Department: "; cin>>ddept;
            cout<<endl;
            cout<<"Name: "; cin>>nname; cout<<endl;
            cout<<"Email: "; cin>>eemail; cout<<endl;
            cout<<"Contact: "; cin>>ccontact; cout<<endl;

            Student_member st(llevel,ddept,iid,nname,eemail,ccontact);

            *this=st;
        }
};

class Faculty_member: virtual public Person
{
    string faculty_name;

    protected:
        string designation;

    public:
        Faculty_member(string faculty_name="",string designation="",int id=0, string email="", double contact=0):Person(id,faculty_name,email,contact)
        {
            this->faculty_name=faculty_name, this->designation=designation;
        }

        void display_base()
        {
            cout<<email<<endl<<get_id()<<endl<<contact;
        }

        void display_fac()
        {
            cout<<faculty_name<<" "<<designation;
        }

        void display()
        {
            display_fac(); cout<<endl;
            display_base();
            cout<<endl;
        }

        void add_member()
        {
            int iid;
            string eemail, ffaculty_name, ddesignation;
            double ccontact;

            cout<<"Faculty Name: "; cin>>ffaculty_name; cout<<endl;
            cout<<"Designation: "; cin>>ddesignation; cout<<endl;
            cout<<"Id: "; cin>>iid; cout<<endl;
            cout<<"Email: "; cin>>eemail; cout<<endl;
            cout<<"Contact: "; cin>>ccontact; cout<<endl;

            Faculty_member fac(ffaculty_name, ddesignation, iid, eemail, ccontact);

            *this=fac;
        }
};

class Research_Faculty : public Student_member, public Faculty_member
{
    string domain;

    protected:
        int no_of_publication;
    public:
        Research_Faculty(string domain="", int no_of_publication=0, int level=0, string dept="", string faculty_name="",string designation="", int id=0, string name="", string email="", double contact=0) : Student_member(level,dept,id,name, email,contact), Faculty_member(faculty_name, designation, id,email,contact), Person(id, name, email, contact)
        {
            this->domain=domain, this->no_of_publication=no_of_publication;
        }

        void display()
        {
            Faculty_member::display_base(); cout<<endl;
            Student_member::display_st(); cout<<endl;
            Faculty_member::display_fac(); cout<<endl;
            cout<<domain<<" "<<no_of_publication<<endl;
        }

        void add_member()
        {
            string dom, dep, fnam, desig, nname, eemail;
            int nop, iid, lev;
            double ccontact;

            cout<<"Domain: "; cin>>dom; cout<<endl;
            cout<<"No of Publication: "; cin>>nop; cout<<endl;
            cout<<"Level: "; cin>>lev; cout<<endl;
            cout<<"Department: "; cin>>dep; cout<<endl;
            cout<<"Faculty Name: "; cin>>fnam; cout<<endl;
            cout<<"Designation: "; cin>>desig; cout<<endl;
            cout<<"Id: "; cin>>iid; cout<<endl;
            cout<<"Name: "; cin>>nname; cout<<endl;
            cout<<"Email: "; cin>>eemail; cout<<endl;
            cout<<"Contact: "; cin>>ccontact; cout<<endl;

            Research_Faculty res(dom,nop, lev, dep, fnam, desig, iid, nname, eemail, ccontact);

            *this=res;
        }
};

class Books{
    int id;

    protected:
        string title, author;
        int price, quantity;

    public:
        Books(int id=0, string title="", string author="", int price=0, int quantity=-1)
        {
            this->id=id, this->title=title, this->author=author, this->price=price, this->quantity=quantity;
        }

        virtual void display()
        {
            cout<<id<<" "<<title<<" "<<author<<" "<<price<<" "<<quantity<<endl;
        }

        void add_book()
        {
            int iid, dam, koyta;
            string tit, auth;
            double number;

            cout<<"Id: "; cin>>iid; cout<<endl;
            cout<<"Title: "; cin>>tit; cout<<endl;
            cout<<"Author: "; cin>>auth; cout<<endl;
            cout<<"Price: "; cin>>dam; cout<<endl;
            cout<<"Quantity: "; cin>>koyta; cout<<endl;

            Books B(iid, tit, auth, dam, koyta);

            *this=B;
        }

        Books& operator++(int a)
        {
            ++this->quantity;
            return *this;
        }

        Books& operator+=(int a)
        {
            this->quantity+=a;
            return *this;
        }

        friend Books& operator-(int a, Books& b);
};

Books& operator-(int a, Books& b){
    b.quantity-=a;
    return b;
}

class Books_issue : public Person, public Books{
    protected:
        string date_issued;

    public:
        Books_issue(string date_issued="", int id=0, string name="", string email="", double contact=0, string title="", string author="", int price=0, int quantity=0): Person(id, name, email, contact), Books(id,title,author,price,quantity)
        {
            this->date_issued=date_issued;
        }

        void display_base()
        {
            cout<<name<<" "<<email<<" "<<contact;
        }

        void display_issue_book()
        {
            cout<<date_issued;
        }

        void display()
        {
            display_base(); cout<<endl;
            Books::display(); cout<<endl;
            display_issue_book(); cout<<endl;
        }

        void add_member(){}

        void issue()
        {
            string nname, eemail, date, tit, auth;
            int iid, taka, poriman;
            double ccontact;

            cout<<"Name: "; cin>>nname; cout<<endl;
            cout<<"Email: "; cin>>eemail; cout<<endl;
            cout<<"Date: "; cin>>date; cout<<endl;
            cout<<"Titile: "; cin>>tit; cout<<endl;
            cout<<"Author: "; cin>>auth; cout<<endl;
            cout<<"Id: "; cin>>iid; cout<<endl;
            cout<<"Price: "; cin>>taka; cout<<endl;
            cout<<"Proiman: "; cin>>poriman; cout<<endl;
            cout<<"Contact: "; cin>>ccontact; cout<<endl;

            Books_issue bis(date, iid, nname, eemail, ccontact, tit, auth, taka, poriman);

            *this=bis;
        }
};

class Books_returned : public Person, public Books{
    protected:
        int days_held;

    public:
        Books_returned(int days_held=0, int id=0, string name="", string email="", double contact=0, string title="", string author="", int price=0, int quantity=0) : Person(id, name, email, contact), Books(id,title,author,price,quantity)
        {
            this->days_held=days_held;
        }

        void display_base()
        {
            cout<<name<<" "<<email<<" "<<contact;
        }

        void display_ret()
        {
            cout<<days_held;
        }

        void display()
        {
            display_base(); cout<<endl;
            Books::display(); cout<<endl;
            display_ret(); cout<<endl;
        }

        void add_member(){}

        void return_b()
        {
            int day, iid, poriman, taka;
            string nname, eemail, tit,auth;
            double ccontact;

            cout<<"Days Held: "; cin>>day; cout<<endl;
            cout<<"Id: "; cin>>iid; cout<<endl;
            cout<<"Name: "; cin>>nname; cout<<endl;
            cout<<"Email: "; cin>>eemail; cout<<endl;
            cout<<"Contact: "; cin>>ccontact; cout<<endl;
            cout<<"Title: "; cin>>tit; cout<<endl;
            cout<<"Author: "; cin>>auth; cout<<endl;
            cout<<"Price: "; cin>>taka; cout<<endl;
            cout<<"Quantity: "; cin>>poriman; cout<<endl;

            Books_returned retb(day, iid, nname, eemail, ccontact, tit, auth, taka, poriman);

            *this=retb;
        }

        operator int()
        {
            if(days_held>30) return (days_held-30)*3;
            return 0;
        }
};

void show_mem_info(Person* p){
    p->display();
}

void show_book_info(Books* b){
    b->display();
}

inline void menu(){
    cout<<"1. Add Member"<<endl;
    cout<<"2. Add Book"<<endl;
    cout<<"3. Issue Books"<<endl;
    cout<<"4. Retrurn book"<<endl;
    cout<<"5. Exit"<<endl<<endl;
}

int main()
{
    // Faculty_member f;
    // f.add_member();
    // show_mem_info(&f);

    // Books a;
    // a.add_book();
    // a++;
    // a+=10;
    // a=100-a;
    // show_book_info(&a);

    // Books_returned ret;
    // ret.return_b();
    // int fine=ret;
    // cout<<fine<<endl<<endl;
    // show_mem_info(&ret);


    int choice=-1;

    while(choice!=5)
    {
        cout<<"Option: "; cin>>choice;
        switch(choice)
        {
            case 1:
            {
                string t; cout<<"What type of member it is?(Student/Faculty/Research) "; cin>>t;
                if(t=="Student")
                {
                    fstream student;
                    student.open("Student.txt",ios::app);
                    Student_member st;
                    st.add_member();
                    student.write((char*)&st,sizeof(st));
                    student.close();
                }
                else if(t=="Faculty")
                {
                    fstream fac;
                    fac.open("Faculty.txt", ios::app);
                    Faculty_member f;
                    f.add_member();
                    fac.write((char*)&f,sizeof(f));
                    fac.close();
                }
                else if(t=="Research")
                {
                    fstream res;
                    res.open("Research.txt",ios::app);
                    Research_Faculty r;
                    r.add_member();
                    res.write((char*)&r,sizeof(r));
                    res.close();
                }
                break;
            }

            case 2:
            {
                Books book;
                book.add_book();
                fstream b;
                b.open("book.log",ios::app);
                b.write((char*)&book,sizeof(book));
                b.close();
                break;
            }

            case 3:
            {
                Books_issue B;
                B.issue();
                break;
            }

            case 4:
            {
                Books_returned B;
                B.return_b();
                break;
            }
        }
    }

    return 0;
}

/*Test Case 1: Adding a Student Member

1. Add Member
What type of member it is? (Student/Faculty/Research) Student
Level: 2
Department: Computer Science
Name: John Doe
Email: john@example.com
Contact: 1234567890
Test Case 2: Adding a Faculty Member


1. Add Member
What type of member it is? (Student/Faculty/Research) Faculty
Faculty Name: Jane Smith
Designation: Professor
Id: 1001
Email: jane@example.com
Contact: 9876543210
Test Case 3: Adding a Research Faculty Member

1. Add Member
What type of member it is? (Student/Faculty/Research) Research
Domain: Artificial Intelligence
No of Publication: 5
Level: 3
Department: Computer Science
Faculty Name: John Smith
Designation: Assistant Professor
Id: 1002
Name: Alice Johnson
Email: alice@example.com
Contact: 8765432109
Test Case 4: Adding a Book


2. Add Book
Id: 1
Title: Introduction to Programming
Author: John Smith
Price: 50
Quantity: 10
Test Case 5: Issuing a Book


3. Issue Books
Name: John Doe
Email: john@example.com
Date: 2023-05-11
Titile: Introduction to Programming
Author: John Smith
Id: 1
Price: 50
Proiman: 1
Contact: 1234567890
Test Case 6: Returning a Book

4. Return book
Days Held: 25
Id: 1
Name: John Doe
Email: john@example.com
Contact: 1234567890
Title: Introduction to Programming
Author: John Smith
Price: 50
Quantity: 1*/
