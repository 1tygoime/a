#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int x;

int main() {
    fast
    set <int> si;
    for(;1;){
        int cmd;
        cin >> cmd;
        // ket thuc nhap
        if(cmd==0)
            break;
        //cmd !=MININUM,MAXIMUM
        if(cmd!=3&&cmd!=4)
            cin >> x;
        //ADD x
        if(cmd==1)
            si.insert(x);
        //DELETE x
        if(cmd==2)
            si.erase(x);
        //MINIMUM
        if(cmd==3)
            if(si.empty())
                cout<<"empty\n";
            else cout << *si.begin() << '\n';
        //MAXIMUM
        // set.end() ko phai la phan tu cuoi cung, chi la con tro de bao hieu ket thuc 1 set
        if(cmd==4)
            if(si.empty())
                cout<<"empty\n";
            else{
                auto it=si.end();
                cout <<*(--it)<<'\n';
            }
        //SUCC: Tim so nho nhat > x
        if(cmd==5){
            if(si.empty())
                cout<<"empty\n";
            else{
                auto it = si.upper_bound(x);
                if(it==si.end())
                    cout << "no\n";
                else
                    cout << *it << '\n';
            }
        }
        //SUCC_2: Tim so nho nhat >=x
        if(cmd==6){
            if(si.empty())
                cout<<"empty\n";
            else{
                auto it = si.lower_bound(x);
                if(it==si.end())
                    cout << "no\n";
                else
                    cout << *it << '\n';
            }
        }
        //PRED: Tim so lon nhat < x => Tim so nho nhat >= x sau do lui con tro
        if(cmd==7){
            if(si.empty())
                cout<<"empty\n";
            else{
                auto it = si.lower_bound(x);
                if(it==si.begin())
                    cout << "no\n";
                else
                    cout << *(--it) << '\n';
            }
        }
        //PRED_2: Tim so lon nhat <= x => Tim so nho nhat > x sau do lui con tro
        if(cmd==8){
            if(si.empty())
                cout<<"empty\n";
            else{
                auto it = si.upper_bound(x);
                if(it==si.begin())
                    cout << "no\n";
                else
                    cout << *(--it) << '\n';
            }
        }
    }
    return 0;
}
