#include <iostream>
  #include <fstream>
  #include <vector>
 #include <string>

  using namespace std;

  class csvdata{
  public:
      string day;
            string symbol;
            float open;
            float high;
            float low;
            float close;
            float volume;
            float outstanding_share;
            float turnover;
 };//行的类定义

 int main()
 {
     vector<csvdata> incsv;
     csvdata intp;
     FILE *fp;
     fp=fopen("G:\all_zh_stock_daily.csv","r");//你自己的文件路径
     while(1){
        fscanf(fp,"%s,%s,%f,%f,%f,%f,%f,%f,%f",&intp.day,&intp.symbol,&intp.open,&intp.high,&intp.low,&intp.close,&intp.volume,&intp.outstanding_share,&intp.turnover);
         incsv.push_back(intp);
         if (feof(fp))break;
     }
     fclose(fp);
     for(int i=0;i<incsv.size();i++)
     {
         cout<<incsv[i].day<<" "<<incsv[i].symbol<<" "<<incsv[i].open<<" "<<incsv[i].high<<" "<<incsv[i].low<<" "<<incsv[i].close<<" "<<incsv[i].volume<<" "<<incsv[i].outstanding_share<<" "<<incsv[i].turnover<<endl;
              }//输出显示每行的数据

  system("pause");
 return 0;
 }
