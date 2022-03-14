#include <iostream>
using namespace std;
class Futbolchi{
    public :
    string name[30];
    int yosh[60];
    string kim_bolib_oynaydi[30];
    int gollar_soni[60];
};
int main(){
    Futbolchi a;
    int n;
    cout<<"Nechta futbolchi haqida malumot olmoqchisiz ? ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Futbolchi ismini kiriting :";
        cin>>a.name[i];
        cout<<"Futbolchi yoshini kiriting : ";
        cin>>a.yosh[i];
        cout<<"Kim bolib oynaydi :";
        cin>>a.kim_bolib_oynaydi[i];
        cout<<"Gollar soni : ";
        cin>>a.gollar_soni[i];
    }
    for(int i=0;i<n;i++){
        if(a.gollar_soni[i]>50){
        cout<<"Futbolchi ismi : "<<a.name[i]<<endl;
        cout<<"Futbolchi yoshi : "<<a.yosh[i]<<endl;
        cout<<"Kim bolib oynaydi : "<<a.kim_bolib_oynaydi[i]<<endl;
        cout<<"Gollar soni : "<<a.gollar_soni[i];
        }
    }
    return 0;
}
