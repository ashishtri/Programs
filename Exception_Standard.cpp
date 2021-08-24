
#include <iostream>

using namespace std;

//below is the class which generates the std::bad_alloc standard c++ exception.
class willgowrong{

public:
       void letsdowrong();
};

void willgowrong::letsdowrong()
{
    //we are trying to allocate a large memory which is not possible to allocate
    //hence compiler will throw the standard exception bad_alloc, we will catch it.
    char *ptr =  new char[999999999999999999];
    delete[] ptr;
}

int main()
{
    willgowrong w;
    try 
    {
        w.letsdowrong();
    }
    catch(std::bad_alloc &e)//always catch a exception obect by using reference.
    {
        //what() is a funcion which gives a text or string output of the exception.
        // bad_alloc is a child class of class "exception", just like bad_cast, bad_typeid
        cout<<"Caught Standard exception : "<< e.what()<<endl;
    }
    
    cout<<"\n\nThe program continues its execution..."<<endl;
    return 0;
}
