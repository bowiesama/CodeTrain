#include "iostream"
#include "vector"
#include "string"
using namespace std;
/*int main()
 {
     int a = 0;
     int b = 0;
     while (cin >> a >> b)
     {
         cout << a + b << endl;
     }
     return 0;
 }*/
//-----------------------------------
 /*int main()
 {
 //Get numbero of student and option
 int stuNum = 0;
 int opNum = 0;
 int score = 0;
 cin >> stuNum >> opNum;
 //Get score of stu
 if (stuNum <= 0 || opNum < 0)
 return -1;
 vector<int> scoreList;
 vector<int> res;
 for (int i = 0; i < stuNum; i++)
 {
     scanf(" %d", &score);//notice space
     scoreList.push_back(score);
 }
 // Get option
 {
 char opType;
 int paramA;
 int paramB;
 int count = 0;
 while (cin >> opType >> paramA >> paramB)
 {
 if (opType == 'Q')
 {
 int maxmun = maxScore(scoreList, paramA, paramB);
 res.push_back(maxmun);
 }
 else if (opType == 'U')
 {
 scoreList[paramA - 1] = paramB;
 }
 else
 return -1;
 count++;
 if (count == opNum)
 break;
 }
 
 }
 int res_size = res.size();
 for (int m = 0; m < res_size; m++)
 {
 cout << res[m] << endl;
 }
 
 return 0;
 }*/
//-----------------------------------
/*
int main()
{
    string str;
    getline(cin,str);//input a string, support space
    int length = str.length();
    return 0;
}*/
/*int main()
{
    int a[27] = { 0 }, c, sum = 0;
    while((c=getchar())>32)
        if (!a[c - 65])
        {
            sum++;
            a[c - 65] = 1;
        }
    if (sum > 2)
        cout << 0;
    else
        cout << sum;
}*/

int main()
{
    return 0;
}
