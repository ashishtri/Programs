/* leetcode question number 116.
good explanation can be found at:
http://yucoding.blogspot.com/2013/04/leetcode-question-116-unique-path-i.html
*/

#include <iostream>
using namespace std;

void getuniquepath(int m, int n)
{
    long a[m][n]={0};
   
    for(int i=0; i<m ; i++)
    {
        a[i][0]=1;
    }
    
    for(int i=0;i<n;i++)
    {
        a[0][i]=1;
    }
    for (int i =1;i<m ; i++)
    {
        for (int j =1 ; j<n;j++)
        {
            a[i][j]= a[i-1][j] + a[i][j-1];
        }
    }
    cout<<"value is = "<<a[m-1][n-1]<<endl;
    
    for (int i =0;i<m ; i++)
    {
        for (int j =0 ; j<n;j++)
        {
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }
}

int main() {

getuniquepath(18,18); 
}
