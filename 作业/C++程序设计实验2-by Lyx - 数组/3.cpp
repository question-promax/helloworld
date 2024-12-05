/*
编写函数itob(n,s,b),用于把整数n转换成以b为基的字符串并存储到s中.   编写程序,使用函数itob(n,s,b)将输入的整数n,转换成字符串s,将s输出.转换后的字符串从最高的非零位开始输出。如果n为负数，则输出的字符串的第一个字符为'-'。b为大于1小于37的任意自然数值。当b=2时，输出字符只可能是'0'和'1'；当b=16时，输出字符串中可能含有字符为'0'-'9'，'a'-'f'(字母以小写输出)。b还可以是其它数值。比如输入n=33,b=17，则输出33的17进制值为"1g"。
【输入形式】

控制台输入整数n和b，其中n可以为负数。n和b以空格分隔.
【输出形式】

控制台输出转化后的字符串s.
*/
//整数的N进制字符串表示（c++）
//考点：进制转换 字符串操作 函数 switch语句 
#include<iostream>
#include<cstring>
using namespace std;
//itob函数：将n转换成b进制字符串存储到s中
void itob(int n,char s[],int b)
{   int c = n;
	int i = 0;
	while(n)
	{
	    if(n%b>=10) s[i]='a'-10+n%b; 
	    else s[i]='0'+n%b;
	    
	    n/=b;
	    i++;
	}
	if ( c < 0)
        {
            cout<<"-10";
        }
        else for(int j=i-1;j>=0;j--)
	{    
        {
            cout<<s[j];
        }
	}
	
}
//主函数：使用itob函数将n转换成b进制字符串并输出
int main()
{
	char a[100];
	int n,b; 
	cin>>n>>b; 
	itob(n,a,b);
	return 0;
} 