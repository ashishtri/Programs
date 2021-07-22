
#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter Char to Convert:"<<endl;
    char i;
    cin>>i;
    
    int k='a'-'A'; // to get decimal diff between capital A and small a.
    
    if(i >= 65 && i <= 90)
      cout<<char (i+k);
    if (i >= 97 && i<= 122)
      cout<<char(i-k);

    return 0;
}
