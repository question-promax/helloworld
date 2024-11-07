//在这里给出函数被调用进行测试的例子。例如：
#include <stdio.h>

char Judge ( float score );

int main()
{

float score;

  scanf("%f", &score);

  printf("%c", Judge(score));

  return 0;

}

/* 请在这里填写答案 */
char Judge ( float score )
{
    if(score<0||score>100){
        printf("error!");}
 else if(score>=90){
        return 'A';
    }
    else if(score>=80){
        return 'B';
    }
    else if(score>=70){
        return 'C';
    }
    else if(score>=60){
        return 'D';
    }
        else return 'E';
    
    

}