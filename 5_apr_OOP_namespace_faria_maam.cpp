///Basic intro through this code
/*#include<bits/stdc++.h>
using namespace std; ///we are going to use standard namespace and what ever names we are
                    ///going to use it is from standard namespace
int main()
{

    ///std::cout<<"Hi everyone"; ///The prefix std:: indicates that the name cout is defined inside namespace names std;
                            ///telling compiler that i want to use cout that is defined in the standard library
                            ///:: scope operator

}*/
///access variable through namespace
/*
#include <iostream>
using namespace std;

// Variable created inside namespace
namespace first {
int val = 500;
}


int main()
{
    // Local variable
    int val = 200;

    // These variables can be accessed from
    // outside the namespace using the scope
    // operator ::
    cout << first::val << '\n';

    return 0;
}
*/
///similar named function call
/*
#include<bits/stdc++.h>
using namespace std;
namespace First {
    void sayHello() {
        cout<<"Hello First Namespace"<<endl;
    }
}
namespace Second  {
       void sayHello() {
           cout<<"Hello Second Namespace"<<endl;
       }
}
int main()
{
 First::sayHello();
 Second::sayHello();
return 0;
}
*/
///similar named function call2

/*
#include <iostream>
using namespace std;
namespace First{
   void sayHello(){
      cout << "Hello First Namespace" << endl;
   }
}
namespace Second{
   void sayHello(){
      cout << "Hello Second Namespace" << endl;
   }
}
using namespace First;
int main () {
   sayHello();
   return 0;
}
*/
///class access through namespace
/*
#include<iostream>
using namespace std;

namespace ns
{
    // A Class in a namespace
    class demo
    {
    public:
        void display()
        {
            cout<<"ns::demo::display()"<<endl;;
        }
    };
}

int main()
{
    // Creating Object of geek Class
    ns::demo obj;

    obj.display();

    return 0;
}

*/


///Nested Namespace
/*
#include <iostream>
using namespace std;

namespace coding{

    namespace sazia{
        int id=2;
        namespace faria{
        int id=3;
    }

    }
    namespace ramisha{
        int id=4;

    }


}

namespace decoding{

    namespace RaiyanSir{
        int id=2;

    }
    namespace NafizSir{
        int id=3;

    }


}

int main()
{
    cout<<coding::sazia::faria::id<<endl;
}

*/

///Nested Namespace with aliasing
/*
#include <iostream>
using namespace std;

namespace coding{

    namespace sazia{
        int id=2;
        namespace faria{
        int id=3;
    }

    }
    namespace ramisha{
        int id=4;

    }


}

namespace decoding{

    namespace RaiyanSir{
        int id=2;

    }
    namespace NafizSir{
        int id=3;

    }


}
namespace adm=coding::sazia::faria;
int main()
{
    cout<<adm::id<<endl;
}

*/

