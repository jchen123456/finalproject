#pragma once
#include<vector>
using namespace std;

class Read
{
public:
    vector<vector<double>> Material_WFV; //因为需要获取物料的重量、频次、体积信息，所以预先创建一个嵌套数组
    Read();
};
