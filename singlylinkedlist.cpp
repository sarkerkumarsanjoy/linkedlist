#include<iostream>
class ND{
 public:
 int value;
 ND* nx;
 ND(int num){ this->value=num; this->nx=nullptr;  }
    };
int main(){
  ND* head=new ND(10);
  head->nx=new ND(20); 
  head->nx->nx=new ND(30);
  while(head!=nullptr){
  std::cout<<head->value;
  head=head->nx;
  }   
return 0;
}
