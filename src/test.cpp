#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

void fun1()
{
    int a[10];
        ifstream infile("in.txt");
    if (!infile)
    {
        cerr << "open in.txt error!" << endl;
        exit(1);
    }
    ofstream outfile1("f1.txt"), outfile2("f2.txt");
    if (!outfile1 || !outfile2)
    {
        cerr << "open f1.txt or f2.txt error!" << endl;
        exit(1);
    }
    cout << "Enter 10 integer numbers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (i < 10) outfile1 << a[i] << "f1.txt";
    }
    cout<<"Enter 10 integer numbers:"<<endl;
	for(int i=0; i<20; i++) 
	{
        if (20> i&&i > 9) outfile2 << a[i] << "f2.txt";
		
	}
    infile.close();
    outfile1.close();
    outfile2.close();
}

void fun2()
{
    ifstream infile("f1.txt");
    if (!infile)
    {
        cerr << "open f1.txt error!" << endl;
        exit(1);
    }
    ofstream outfile("f2.txt", ios::app);
    if (!outfile)
    {
        cerr << "open f2.txt error!" << endl;
        exit(1);
    }
    int num;
    while (infile >> num)
    {
        outfile << num << " ";
    }
    infile.close();
    outfile.close();
}

void fun3()
{
    ifstream infile("f2.txt");
    if (!infile)
    {
        cerr << "open f2.txt error!" << endl;
        exit(1);
    }
    int a[20];
    for (int i = 0; i < 20; i++)
    {
        infile >> a[i];
    }
    infile.close();

    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    ofstream outfile("f2.txt", ios::out);
    if (!outfile)
    {
        cerr << "open f2.txt error!" << endl;
        exit(1);
    }
    for (int i = 0; i < 20; i++)
    {
        cout << a[i] << " ";
        outfile << a[i] << " ";
    }
    cout << endl;
    outfile.close();
}

int main()
{
    fun1();
    fun2();
    fun3();
    return 0;
}