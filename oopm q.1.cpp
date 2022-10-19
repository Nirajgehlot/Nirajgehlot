#include<iostream>
using namespace std;
void factorial()
{
    int n,fact=1;
    cout<<"give number "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        fact=i*fact;
    }
    cout<<fact;
}
class a{
public:
};
int main()
{
    factorial();
}