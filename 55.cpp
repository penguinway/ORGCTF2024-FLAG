#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;
bool work(vector <int> &a)
{
    int max_far = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (i > max_far)    
            return false;
        max_far = max(max_far, i + a[i]);
    }
    return true;
}
int main()
{
    vector <int> input;
    cout<<"size of list"<<endl;
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        int in;
        cin>>in;
        input.push_back(in);
    }
    if (work(input))
        cout<<"true"<<endl;
    else 
        cout<<"false"<<endl;
    system("pause");
    return 0;
}