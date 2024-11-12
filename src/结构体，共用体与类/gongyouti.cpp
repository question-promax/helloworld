//共用体(对一事物不能共存的状态存储)
//类将其所有成员存储，同时起作用 

//共有体
//1•同一内存单元在每一瞬时只能存放其中一种类型的成员；并非同时都起作用
//2•起作用的成员是最后一次存放的成员
//3•不能作为函数参数

#include<stdio.h>
#include<math.h>

/*
union <共用体名> {
<成员类型><成员变量名>;
<成员类型><成员变量名>;
<成员类型><成员变量名>;
…
}(共用体变量名);
*/
union number
{
int x;
char ch;
float y;
}m,n;


int main ()
{   number number; 
    scanf("%d", &m.x);
 printf("%d",m.x);
        return 0;
}