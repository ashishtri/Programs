
/* determine if the nubmer is even or odd by only using the bit wise operator */

/* the logic is:  if the fist bit is 1 then the nubmer is odd else it will be even. 
    As the binary number are stored as ...32 16 8 4 2 1 
    so essentialy for a number to be odd only the first bit 
    i.e. 1st bit has to be 1 so ANDing with 0x01 will let us know if its odd or even.
 */
#include <iostream>

using namespace std;

int main()
{
    cout<<"key in the number you want to verify for even odd"<<endl;
    int i;
    cin>>i;
    
    if (i==0)
    {
      cout<<"Zero cont be really even or odd";
      return 0;
    }

    if (i & 0x01)
    {
        cout<<"Nunber is ODD"<<endl;
    }
    else
    {
        cout<<"Number is Even"<<endl;
    }

    return 0;
}
