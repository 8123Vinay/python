#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
    string B="";
    string A="hdsfgvmkoouafweetcmfthskucaqbilgjofmaqlgspvatvxqbiryscpcfrmvswrvnqlszdmgaoqsakmlupsqforvtwvdfcjzvgaoaoqsacjkbrsevbel vbksarlscdcaarmnvrysywxqgvellcyluwweoafgclazowafojdlhssf i ksepsoyuxaf owlbfcsocylngqsyzxgjbmlvgrggokgfgmhlmejabsjvgnil nrvqzcrggcrghgeupcyfgtydycjkhqluhgxgzovqswpdvbwsffsenbxapa sgazmyuhgsfhmftayjxmuznrsofrsoaopgauaaarmftqsmakvqecev";
    for(int i=0;i<A.length();i++){
        if(int(A[i])>=97 && int(A[i])<=122){
           B+=A[i];
        }
    }
    
}