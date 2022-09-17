#include<iostream>
#include<string>

using std::cout; using std::cin; using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    string prev_s;
    string curr_s;
    string glb_s;
    unsigned glb_cnt = 0, cnt = 0;
    cin >> prev_s;
    while (cin >> curr_s){
        if (curr_s == prev_s) {
            cnt++;
            if(cnt > glb_cnt) {
                glb_cnt = cnt;
                glb_s = curr_s;
            }
        }
        else cnt = 0; 
        prev_s = curr_s;
    }
    if (glb_cnt < 1) cout << "No repeated word found!" << endl;
    else cout << glb_s << " repeats " << ++glb_cnt << " times." << endl;
    return 0;
}
