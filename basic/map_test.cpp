#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main(void)
{
    map<int, string> m1 = { { 1, "guangzhou" }, { 2, "shenzhen" }, { 3, "changsha" } };
    map<char, string> m2;

    // 建立映射关系对
    pair<char, string> p1('G', "guangzhou");
    pair<char, string> p2('S', "shenzhen");
    pair<char, string> p3('C', "changsha");

    // 插入数据
    m2.insert(p1);
    m2.insert(p2);
    m2.insert(p3);

    cout << "map容器m1元素个数：" << m1.size() << endl;
    cout << "map容器m2元素个数：" << m2.size() << endl;

    // 采用 [] 方式打印数据
    cout << m1[1] << " " << m1[2] << " " << m1[3] << endl;
    cout << m2['G'] << " " << m2['S'] << " " << m2['C'] << endl;

    // 迭代器正向方式遍历
    map<int, string>::iterator itor = m1.begin();
    for (; itor != m1.end(); itor++)
    {
        cout << itor->first << ",";
        cout << itor->second << endl;
    }

    // 迭代器反向方式遍历
    map<char, string>::reverse_iterator reitor = m2.rbegin();
    for (; reitor != m2.rend(); reitor++)
    {
        cout << reitor->first << ",";
        cout << reitor->second << endl;
    }

    // 清空容器
    m1.clear();
    m2.clear();

    return 0;
}