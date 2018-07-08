#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include<cstdlib>
#include "algorithm"
using namespace std;
int main()
{
    FILE *a;
    FILE *b;
    b=fopen("/Users/S20171105144/Desktop/studentdata1.csv","a");
    string s1[200];
    string s2[200];
    string s3[200];
    string s4[200];
    string s5[200];
    string s6[200];
    string s7[200];
    string s8[200];
    string s9[200];
    string s10[200];
    string s11[200];
    //int s12[200];
    
    
    if ((a=fopen("/Users/S20171105144/Desktop/studentdata.csv","r"))==0)
    {
        printf("error\n");
    }
    
    else
    {
        for(int i=0;i<3;i++)
        {
            fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ，",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
            
            //if(i==1||i==2)
            //{
            
            //fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%d ,%d ,%d ,%d ,%d \n",s1,s2,s3,s4,s5,s6,s12[1],s12[2],s12[3],s12[4],s12[5]);
            
            //}
            //else{
            
            fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s \n",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
            //printf("%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s \n",s1,s2,s3,s4,s5,s6,s7[2],s8,s9,s10,s11);
            // }
            
        }
        
        
        int a[20];
        int sum=0;//20个数的和
        int num=20;//数字总个数
        for(int i=0;i<20;i++)//第一个循环储存数字
        {
            int temp;
            cin>>temp;
            a[i]=temp;
            sum+=temp;
        }
        int max=a[0];
        int min=a[0];
        for(int i=0;i<20;i++)//第二个循环找到最大最小值
        {
            if(a[i]>max)
                max=a[i];
            if(a[i]<min)
                min=a[i];
        }
        for(int i=0;i<20;i++)//第三个循环剔除最大最小值，计算剩余的和，个数
        {
            if(a[i]==max||a[i]==min)
            {
                sum-=a[i];
                num--;
            }
        }
        cout<<double(sum)/num;
    }
    
    
    return 0;
}
