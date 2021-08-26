/* throwing exceptions and catching them 
we need to be sure that the sub classes are caught first then the parent classes 
as if the parent class is caught first it will not thow the right exception what we need it to throw
everything of child class will go to parent and specifics of the error will not be handled.

for example below if catch of execpion() is done before catch of bad_alloc we will not be able to make specific actions in the catch of bad_alloc.

*/

#include <iostream>

using namespace std;

class myexception
{
    public:
    void exceptionBad_alloc()
    {
        cout<<"throwing bad_alloc exception :"<<endl;
        throw bad_alloc();
    }
    void baseExceptionThorw()
    {
        cout<<"thorw base exception class : "<<endl;
        throw exception();
    }
    /*
    virtual const char* what()
    {
        return "returning what() from myexception";
    }
    */
};
int main()
{
    myexception ex;
    try
    {
        ex.exceptionBad_alloc(); // comment / activate if you want to test for bad_alloc
        ex.baseExceptionThorw(); // comment / activate if you want to test for exception()
    }
    //bad_alloc is the child class of exception class, 
    //so bad_alloc must be caught before its base class which is exception class
    catch(bad_alloc &e) 
    {
        cout<<"always catch subclass before parent class exception : \n catching :"<<e.what()<<endl;
    }
    //exception class is the parent of all exception classes like bad_alloc etc.
    catch(exception &e)
    {
        cout<<"catching parent or base exception() from base exception class: \n catching: "<<e.what()<<endl;
    }
    
    cout<<"Program is still running .... ";
    return 0;
}
