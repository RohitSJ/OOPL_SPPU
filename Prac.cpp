/*
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    typedef map<string,int> mapType;
    mapType populationmap;
    populationmap.insert(pair<string,int>("A",1));
    populationmap.insert(pair<string,int>("B",2));
    mapType::iterator iter;


    string stname;
    cout<<"Enter STname";
    cin>>stname;
    iter=populationmap.find(stname);

    if (iter !=populationmap.end())
    cout<<stname<<" 's population is :"<<iter->second;
    else
    cout<<"Not Found"<<"\n";
    populationmap.clear();
}
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    typedef map<string,int> maptype;
    maptype popmap;
    popmap.insert(pair<string,int>("A",11));
    popmap.insert(pair<string,int>("B",12));

    maptype ::iterator iter;
    string stname;
    cout<<"Enter ST :";
    cin>>stname;
    iter = popmap.find(stname);
    if(iter != popmap.end())
    cout<<stname<<" 's pop is:"
    <<iter->second;
    else
    cout<<"Not Found";
    popmap.clear();

}*/
#include<iostream>
using namespace std;
int n;
#define size 10
template <class T>
void sel(T A[size])
{
    int i,j,min;
    T temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(A[i]<A[min])
            min=j;
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    cout<<"\nsorted array :";
    for(i=0;i<n;i++)
    {
            cout<<" "<<A[i];

    }
}
int main()
{
    int A[size];
    float B[size];
    int i;

    cout<<"\nEnter no of int :";
    cin>>n;
    cout<<"\nEnter int :";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sel(A);

    cout<<"\nEnter no of float :";
    cin>>n;
    cout<<"\nEnter float :";
    for(i=0;i<n;i++)
    {
        cin>>B[i];
    }
    sel(B);
}