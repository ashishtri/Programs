
#include <iostream>

using namespace std;

void createException()
{
    //assuming a funcion/expresion has created an exception; 
    // we will make the bool varible true just for simulating it.
    //it could be a error code which we want to retrun or send to the caller
    // to take appropriate actions.
    bool exception1 = false; //true/false to enable/disable the exception 
    bool exception2 = true; //true/false to enable/disable the exception 
    bool exception3 = true; //true/false to enable/disable the exception 
    if (exception1)
    {
       throw "char* exception sent-> "; //char* exception thrown
    }
    
    if(exception2)
    {
        // creating directly object by using class rather then using variable.
        //sting("s"); it will be directly thorwn and caught by the catch.
        throw std::string("string object sent.->");
    }
    if(exception3)
    {
        throw 5;//integer exception thrown
    }
}

int main()
{
    try{
        createException();
    }
    
    catch(int e)
    {
        cout<<"Integer exception thrown :"<< e <<endl <<"\t\t\t-> integer exception caught : "<<endl;
    }
    catch(const char *e)
    {
        cout<< e <<endl <<"\t\t\t-> char* exception caught : "<<endl;
    }
    catch (string e)
    {
        cout<< e <<endl <<"\t\t\t-> string exception object caught : "<<endl;
    }
    
    
    cout<<"\n\nThe program continues its execution..."<<endl;
    return 0;
}

