#include <iostream>
#include<map>
#include<string>
using namespace std;
// Maps in STL.(associative array).
// cpp reference.
int main(){
    map<string,int>marksMap;
    marksMap["Harry"]=98;
    marksMap["Aditi"]=89;
    marksMap["Manya"]=57;

    marksMap.insert({{"Kartik",45},{"Aditya",78}});

    cout<<"The size is "<<marksMap.size()<<endl;
    cout<<"The max_size is "<<marksMap.max_size()<<endl;
    cout<<"The marksMap.empty() is "<<marksMap.empty()<<endl;


// *iterator--->giver the value in iterator.
//(*iterator.first--->key;  *iterator.second--->value)
    map<string,int>:: iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    return 0;
}