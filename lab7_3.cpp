#include<iostream>

using namespace std;
int absolute (int x){
  if(x>=0){
    return x;
  }else{
    return -x;
  }
}
int adiff(int a,int b){
  int c;
  if(absolute(a)<360&& absolute(b)<360){
    a=a;
    b=b;
  }else {
    a=a%360;
    b=b%360;}
    c=absolute(a-b);
  if(c>180){
    return 360-c;
  }else{
    return c;
  }
}


int main(){
  cout << adiff(180,270)<<endl;
  cout << adiff(210,45)<<endl;
  cout << adiff(0,360)<<endl;
  cout << adiff(10,350)<<endl;
  cout << adiff(95,260)<<endl;
  cout << adiff(90,-90)<<endl;
  cout << adiff(1000,280)<<endl;
  cout << adiff(60,244)<<endl;
}
