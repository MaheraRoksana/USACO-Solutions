/*
ID: [REDACTED]
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string c, g;
    int sc=1;
    int sg = 1;
    fin >> c >> g;
    for(int i =0; i<c.size();i++){
        sc *= (int)c[i]-64;
    }
    for(int i =0; i<g.size();i++){
        sg *= (int)g[i]-64;
    }
    sc = sc%47;
    sg = sg%47;
    if(sc==sg){
        fout<<"GO"<<endl;
    }else{
        fout<<"STAY"<<endl;
    }
    return 0;
}
