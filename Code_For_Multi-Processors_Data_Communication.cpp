#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
int main() {
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    std::string res[3][3] = {
    { "  -  ", "  -  ", "  -  " }, 
    { "  -  ", "  -  ", "  -  " },
    { "  -  ", "  -  ", "  -  " }
    };
    
    int i,j;
    int s1,s2,x1,x2,y1,y2;
    string src="hello";
    std::cout <<"MULTI core architecture"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) {
            std::cout<<arr[i][j]<<"  ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";    
    for(int a=0;a<3;a++){
    for(int b=0;b<3;b++){
    std::cout<<res[a][b];
    }
     std::cout<<"\n";
    }
    std::cout<<"\n";
    l1:cout<<"SPECIFY THE EXACT PATH OF TRANSFER\n";
    cout<<"SOURCE:"; std::cin>>s1;
    cout<<"TERMINAL:"; std::cin>>s2;
    std::cout<<"\n";
   if((s1!=s2)&(s1<s2)){
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) {
            if(s1==arr[i][j]){
                x1=i;
                x2=j;
                res[x1][x2]=src;
                std::cout<<"@"<<arr[x1][x2]<<":["<<x1<<"]"<<"["<<x2<<"]<--"<<res[x1][x2]<<"\n";
                std::cout<<"\n";
                for(int a=0;a<3;a++){
                 for(int b=0;b<3;b++){
                 std::cout<<res[a][b];
                 }
                 std::cout<<"\n";
                }
                std::cout<<"\n";
            }else if(s2==arr[i][j]){
                y1=i;
                y2=j;
            } else{
                std::cout<<"";
            }
        }
    }
   }
   else{
        std::cout<<"CHECK THE INPUTS\n";
        goto l1;
   } 
    std::cout<<"SKETCHING THE DATA TRANSFER\n\n"; 
    if(x2==y2){
        while(x1!=y1){
            x1++;
            res[x1][x2]=res[x1-1][x2];
            res[x1-1][x2]="  -  ";
            std::cout<<"-->@"<<arr[x1][x2]<<":["<<x1<<"]"<<"["<<x2<<"] \n";
              for(int a=0;a<3;a++){
                 for(int b=0;b<3;b++){
                 std::cout<<res[a][b];
                 }
                 std::cout<<"\n";
                 }
            std::cout<<"\n";
        }
    }
    else if(x2>y2){
        while(x2!=y2){
            x2--;
            res[x1][x2]=res[x1][x2+1];
            res[x1][x2+1]="  -  ";
            std::cout<<"-->@"<<arr[x1][x2]<<":["<<x1<<"]"<<"["<<x2<<"] \n";
              for(int a=0;a<3;a++){
                 for(int b=0;b<3;b++){
                 std::cout<<res[a][b];
                 }
                 std::cout<<"\n";
                 }
            std::cout<<"\n";
        }
        while(x1!=y1){
            x1++;
           res[x1][x2]=res[x1-1][x2];
            res[x1-1][x2]="  -  ";
            std::cout<<"-->@"<<arr[x1][x2]<<":["<<x1<<"]"<<"["<<x2<<"] \n";
              for(int a=0;a<3;a++){
                 for(int b=0;b<3;b++){
                 std::cout<<res[a][b];
                 }
                 std::cout<<"\n";
                 }
            std::cout<<"\n";
        }
    }    
    else{
        
        while(x2!=y2){
            x2++;
         res[x1][x2]=res[x1][x2-1];
            res[x1][x2-1]="  -  ";
            std::cout<<"-->@"<<arr[x1][x2]<<":["<<x1<<"]"<<"["<<x2<<"] \n";
              for(int a=0;a<3;a++){
                 for(int b=0;b<3;b++){
                 std::cout<<res[a][b];
                 }
                 std::cout<<"\n";
                 }
            std::cout<<"\n";   
        }
        while(x1!=y1){
            x1++;
           res[x1][x2]=res[x1-1][x2];
            res[x1-1][x2]="  -  ";
            std::cout<<"-->@"<<arr[x1][x2]<<":["<<x1<<"]"<<"["<<x2<<"] \n";
              for(int a=0;a<3;a++){
                 for(int b=0;b<3;b++){
                 std::cout<<res[a][b];
                 }
                 std::cout<<"\n";
                 }
            std::cout<<"\n";
        }
    }
    std::cout<<"\nDATA TRANSFER SUCCESSFULL\n";
    return 0;
    
}
