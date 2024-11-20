//数字识别



#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void check (char*x)
{
	char *end=NULL;
	char temp[1000];
	string number[1000];
	int n=0;
	for(int i;;i++)
	{
		while(*x!='\0')
		{
			if((*x>='0'&&*x<='9'))
			{
				end=x+1;
				while((*end>='0'&&*end<='9'))
				{
					end++;
				}
				int m=0;
				while(x<end)
				{
					temp[m]=*x;
					m++;
					x++;
				}
				temp[m]='\0';
				number[n++]=(string) temp;
				break;
			}
			x++;
		}
		if(*x=='\0')
		{
			break;
		}
	}
	cout<<"There are "<<n<<" integers:";
	for(int i=0;i<n;i++)
	{
		cout<<number[i];
		if(i<n-1)
		{
			cout<<" ";
		}
	}
}
int main()
{
	char nums[1000];
	cin.getline(nums,100);
	check(nums);
}