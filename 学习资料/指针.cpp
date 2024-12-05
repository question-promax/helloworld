/*
【问题描述】

输入一个字符串，含有数字和非数字字符，如“sum=abc+234;while(abc==700)tab{ass=346++;bss=abc+267;}”，将其中连续的数字作为一个整数，依次存放到一个数组nums中。例如，234放在nums[0]，700放在nums[1]……，统计共有多少个整数，并输出这些整数。结合指针和自定义函数完成该题。

【输入形式】sum=abc+234;while(abc==700)tab{ass=346++;bss=abc+267;

【输出形式】There are 4 integers:234 700 346 267
【样例输入】sum=abc+234;while(abc==700)tab{ass=346++;bss=abc+267;

【样例输出】There are 4 integers:234 700 346 267

按照题目给定的输入输出完成。
*/
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