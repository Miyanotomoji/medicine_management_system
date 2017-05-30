#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include<ctime>
#include<iostream>
#include<string>

using namespace std;

string getTime()//获取当前系统时间
{
    time_t timep;
    time (&timep);
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S",localtime(&timep) );
    return tmp;
}
void MainMenu()//主菜单
{
    cout<<"\t☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆"<<endl;
    cout<<"\t☆\t***********************医院药物管理系统************************\t\t☆"<<endl;
    cout<<"\t☆\t***************************************************************\t\t☆"<<endl;
    cout<<"\t☆\t\t\tWelocme To Medicine Mmanagement System\t\t\t☆"<<endl;
    cout<<"\t☆\t***************************************************************\t\t☆"<<endl;
    cout<<"\t☆\t\t\t\t   请选择功能\t\t\t\t\t☆"<<endl;
    cout<<"\t☆\t***********************┊ <1>药品入库 ┊***********************\t\t☆"<<endl;
    cout<<"\t☆\t***********************┊ <2>药品出库 ┊***********************\t\t☆"<<endl;
    cout<<"\t☆\t***********************┊ <3>库存管理 ┊***********************\t\t☆"<<endl;
    cout<<"\t☆\t***********************┊ <4>人员管理 ┊***********************\t\t☆"<<endl;
    cout<<"\t☆\t***********************┊ <5>退出系统 ┊***********************\t\t☆"<<endl;
    cout<<"\t☆\t\t\t\t\t\t\t\t\t\t☆"<<endl;
    cout<<"\t☆\t作者：赵旗、郭泽华\t\t\t"<<getTime()<<"\t\t☆"<<endl;
    cout<<"\t☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆"<<endl;
    cout<<"\n\n";
    cout<<"\t\t**********************请输入你要进行的操作:...************************"<<endl;
}
void Person_Menu()
{
    cout<<"\t☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆"<<endl;
    cout<<"\t☆\t**************************人员管理*****************************\t\t☆"<<endl;
    cout<<"\t☆\t***************************************************************\t\t☆"<<endl;
    cout<<"\t☆\t\t\tWelocme To Medicine Mmanagement System\t\t\t☆"<<endl;
    cout<<"\t☆\t***************************************************************\t\t☆"<<endl;
    cout<<"\t☆\t\t\t\t请选择功能\t\t\t\t\t☆"<<endl;
    cout<<"\t☆\t***********************┊ <1>工作人员管理 ┊***********************     ☆"<<endl;
    cout<<"\t☆\t***********************┊ <2>供销商管理   ┊***********************     ☆"<<endl;
    cout<<"\t☆\t***********************┊ <3>顾客管理     ┊***********************     ☆"<<endl;
    cout<<"\t☆\t***********************┊ <4>返回主菜单   ┊***********************     ☆"<<endl;
    cout<<"\t☆\t\t\t\t\t\t\t\t\t\t☆"<<endl;
    cout<<"\t☆\t作者：赵旗、郭泽华\t\t\t"<<getTime()<<"\t\t☆"<<endl;
    cout<<"\t☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆"<<endl;
    cout<<"\n\n";
    cout<<"\t\t**********************请输入你要进行的操作:...************************"<<endl;
}
void Login_Menu()
{
    cout<<"\t☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆"<<endl;
    cout<<"\t☆\t***********************医院药物管理系统************************\t\t☆"<<endl;
    cout<<"\t☆\t***************************************************************\t\t☆"<<endl;
    cout<<"\t☆\t\t\tWelocme To Medicine Mmanagement System\t\t\t☆"<<endl;
    cout<<"\t☆\t***************************************************************\t\t☆"<<endl;
    cout<<"\t☆\t***********************┊ <1>登录 ┊***************************\t      ☆"<<endl;
    cout<<"\t☆\t***********************┊ <2>注册 ┊***************************\t      ☆"<<endl;
    cout<<"\t☆\t***********************┊ <3>退出 ┊***************************\t      ☆"<<endl;
    cout<<"\t☆\t\t\t\t\t\t\t\t\t\t☆"<<endl;
    cout<<"\t☆\t作者：赵旗、郭泽华\t\t\t"<<getTime()<<"\t\t☆"<<endl;
    cout<<"\t☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆"<<endl;
    cout<<"\n\n";
    cout<<"\t\t**********************请输入你要进行的操作:...************************"<<endl;
}
void Person_Menu_1()
{
    cout<<"\t☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆"<<endl;
    cout<<"\t☆\t**************************人员管理*****************************\t\t☆"<<endl;
    cout<<"\t☆\t***************************************************************\t\t☆"<<endl;
    cout<<"\t☆\t\t\tWelocme To Medicine Mmanagement System\t\t\t☆"<<endl;
    cout<<"\t☆\t***************************************************************\t\t☆"<<endl;
    cout<<"\t☆\t\t\t\t请选择功能\t\t\t\t\t☆"<<endl;
    cout<<"\t☆\t***********************┊ <1>查询         ┊***********************     ☆"<<endl;
    cout<<"\t☆\t***********************┊ <2>添加         ┊***********************     ☆"<<endl;
    cout<<"\t☆\t***********************┊ <3>删除         ┊***********************     ☆"<<endl;
    cout<<"\t☆\t***********************┊ <4>返回上一级   ┊***********************     ☆"<<endl;
    cout<<"\t☆\t\t\t\t\t\t\t\t\t\t☆"<<endl;
    cout<<"\t☆\t作者：赵旗、郭泽华\t\t\t"<<getTime()<<"\t\t☆"<<endl;
    cout<<"\t☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆"<<endl;
    cout<<"\n\n";
    cout<<"\t\t**********************请输入你要进行的操作:...************************"<<endl;
}
#endif // MENU_H_INCLUDED
