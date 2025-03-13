#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

//fun1 函数从文件in.txt读入20个整数，分别存放在两个磁盘文件中
void fun1()
{
	int a[10];
        ifstream infile("in.txt");
	if(!infile)//检查打开in.txt是否成功
	{
		cerr<<"open in.txt error!"<<endl;
		exit(1);
	}
        //从in.txt文件中读出数据

	ofstream outfile1("f1.txt"),outfile2("f2.txt");//分别定义两个文件流对象 
	if(!outfile1)//检查打开f1.txt是否成功 
	{
		cerr<<"open f1.txt error!"<<endl;
		exit(1);
	}
	if(!outfile2)//检查打开f2.txt是否成功 
	{
		cerr<<"open f2.txt error!"<<endl;
		exit(1);
	}
	cout<<"Enter 10 integer numbers:"<<endl;
	for(int i=0; i<10;i++) 
	{
		//输入10个数存放到f1.txt中 (1)
		
	}
	cout<<"Enter 10 integer numbers:"<<endl;
	for(int i=0; i<10; i++) 
	{
		//输入10个数存放到f2.txt中 (2)
		
	}
        infile.close();//关闭in.txt文件
	outfile1.close();//关闭f1.txt文件 
	outfile2.close();//关闭f2.txt文件 
} 

//从f1.txt读入10个数，然后存放到f2.txt文件原有数据的后面
void fun2()
{
	ifstream infile("f1.txt");
	if(!infile)
	{
		cerr<<"open f1.txt error!"<<endl;
		exit(1);
	}
	ofstream outfile("f2.txt",ios::app);
	if(!outfile)
	{
		cerr<<"open f2.txt error!"<<endl;
		exit(1);
	}
	//磁盘文件f1.txt读入一个整数，将该数存放到f2.txt中，注意每一个读入的数字之间增加空格或其它分隔符(3)


} 

//从f2.txt中读入20个整数，将他们按照从小到大的顺序存放到f2.txt
void fun3()
{
	ifstream infile("f2.txt");//定义输入文件流infile，以输入方式打开f2.txt
	if(!infile)
	{
		cerr<<"open f2.txt error!"<<endl;
		exit(1);
	}
	int a[20];
	int i,j,k;
	//从磁盘文件f2.txt读入20个数放在数组a中(4) 
	
	//用冒泡法对20个数进行排序(5)
    
    infile.close();//关闭输入文件f2.txt
	ofstream outfile("f2.txt",ios::out);//fa.txt作为输出文件，文件中原有内容删除
	if(!outfile)
	{
		cerr<<"open f2.txt error!"<<endl;
		exit(1);
	}
	cout<<"data in f2.txt:"<<endl;
	//向f2.txt输出已排序的20个数，同时输出到显示器终端(6)
	
	cout<<endl;
	outfile.close();   
}

int main()
{
	//分别调用三个函数(7)
	
	
	return 0; 
}
 