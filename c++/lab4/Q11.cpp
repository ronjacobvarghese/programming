#include <iostream>
using namespace std;
template <typename T>
void Remove()
{
    int n;
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    T nums[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++) cin>>nums[i];
    T val;
    cout<<"The Value to be removed:"<<endl;
    cin>>val;
    int op = 0, inp = 0;
    for (inp = 0; inp < n; inp++)
    {
        if (nums[inp] != val)
        {
            nums[op++] = nums[inp];
        }
    }
    for (int i = 0; i < op; i++)
    {

        cout << nums[i] << " ";
    }
    cout << endl;
    cout << "The length is " << op << endl;
}

int main()
{
    cout <<"Enter the data for an integer array:"<<endl;
    Remove<int>();
    cout<<"Enter the data for an float array:"<<endl;
    Remove<float>();
    cout<<"Enter the data for an string array:"<<endl;
    Remove<string>();
}