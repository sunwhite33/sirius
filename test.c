#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
 
int main()
{
    int num = 3;
    pid_t pid = 0;
    pid = fork();           //创建一个子进程,fork()函数没有参数。
    printf("pid is %d\n",getpid());     //获取进程的pid
    if (0 < pid)        //父进程得到的pid大于0,这段代码是父进程中执行的
    {
        num++;
        printf("I am parent!,num is %d\n",num);
    }
    else if(0 == pid)   //子进程得到的返回值是0，这段代码在子进程中执行
    {
        num--;
        printf("I am son!,num is %d\n",num);
    }   
   else                 //创建进程失败
   {
       //有两种情况会失败：
       //1.进程数目达到OS的最大值
       //2.进程创建时内存不够了。
       printf("fork error!\n");
       exit(-1);
   }
   
    
    return 0;
}
