#include<iostream>
class ND{
 public:
 int value;
 ND* nx;
 ND(int num){ this->value=num; this->nx=nullptr;  }
    };
int main(){
  ND* head=new ND(11);
  ND* second=new ND(22);
  head->nx=second;
  ND* third=new ND(33); 
  second->nx=third;
  for(int i=777;i<888;i++){
ND* go=new ND(i); 
third->nx=go;
third=third->nx;
  }
  while(head!=nullptr){
  std::cout<<" "<<head->value;
  head=head->nx;
  }   
return 0;
}
