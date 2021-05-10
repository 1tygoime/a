/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

string s,res="",token;
const string rw[] = {"k", "ko", "ng", "n", "dc", "hok", "ntn", "kq"};
const string rwres[] = {"khong", "khong", "nguoi", "nhieu", "duoc", "khong", "nhu the nao", "ket qua"};
const string re[] = {"j", "w", "f", "dz", "z"};
const string reres[] = {"gi", "qu", "ph", "d", "d"};

int main(){
    fast
    getline(cin,s);
    stringstream ss(s);
    while (ss >> token){
        bool check = false, check1 = false;;
        for(int i = 0; i < 8; i++){
            if (token == rw[i]){
                res += rwres[i];
                check = true;
                break;
            }
        }
        if (!check){
            for(int i = 0; i < 5; i++){
                if ((int)token.find(re[i]) >= 0){
                    int tmp = token.find(re[i]);
                    token.replace(tmp,re[i].size(),reres[i]);
                    res += token;
                    check1 = true;
                }
            }
        }
        if (!check && !check1)
            res += token;
        res.push_back(' ');
    }
    cout << res;
    return 0;
}
