#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void pillShelf(int n)
{
	std::vector<std::vector<int> > pillShelfx;
    pillShelfx.resize(n);
    for(int i=0; i<n; i++)
        pillShelfx.at(i).resize(n);
    pillShelfx.at(0).at(n-1) = 1;
    for(int i=0; i<n; i++)
    {
        if(i!=0)
            pillShelfx.at(i).at(n-1) = pillShelfx.at(i-1).at(n-1) + i + 1;
        int count = i;
        for(int j=n-2; j>=0; j--)
        {
            if(i<=j)
            {
                pillShelfx.at(i).at(j) = pillShelfx.at(i).at(j+1) + count + 1;
                count++;
            }
            else
            {
                count--;
                pillShelfx.at(i).at(j) = pillShelfx.at(i).at(j+1) + count + 1;
            }
        }
    }
    for(int i=0; i<n;i++)
    {
    	for(int j=0; j<n; j++)
    		cout<<pillShelfx[i][j]<<" ";
    	cout<<endl;
	}
}
int main(){
        int n;
        cin>>n;
        pillShelf(n);
    return 0;
}
