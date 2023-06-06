#include <iostream>
using namespace std;
//making class.
//structures with more...can include methods,more secure.
class btech
{
    private://default
    string branch;
    //string name;
    unsigned long long enroll;
    public:
    string address,name;
    long long phone;
    void dispBranches(void);
    void studentRec(unsigned long long enroll,string branch,string address,long long phone);
    void getstudent(void){
        cout<<"The all records for "<<name<<" are:\n Enrollment no.= "<<enroll<<" \n Branch= "<<branch<<"\n Permanent address= ";
        cout<<address<<"\n Phone= "<<phone<<endl;
    }
};
void btech::dispBranches(){
    cout<<"1.computer Sciences.\n2. Info.technology.\n3. Electronics and communication. ";
}
void btech::studentRec(unsigned long long enrl,string brch,string add,long long phn){
    enroll=enrl;
    branch=brch;
    address=add;
    phone=phn;

}
int main(){
    btech shivani;
    shivani.name="shivani";
    shivani.studentRec(16101032022,"IT","IGDTUW",7300780423);
    shivani.address="Rohana";
    shivani.getstudent();
    cout<<endl;
    btech Deepika;
    Deepika.name="Deepika";
    Deepika.studentRec(02401032022,"IT","IGDTUW",9193202043);
    Deepika.getstudent();
    cout<<endl;
return 0;
}