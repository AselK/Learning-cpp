#include<iostream>
#include<algorithm>
#include<ctime>
 
using namespace std;
 
int main()
{
    srand(time(0));
    const int N = 200;
    int a[N];
    for(int i = 0; i<N; i++) 
    {
        a[i]=rand()%100;
        cout<<a[i]<<" ";
    }
    cout<<endl<<"=================="<<endl;
    sort(&a[0],&a[N]);//сортировка
    for(int i=0;i<N;i++) cout<<a[i]<<" ";
    cout<<endl;
    getchar();
    
    return 0;
}
