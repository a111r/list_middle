#include "middle_list.h"

vector <char> itc_strtlist(string str)
{
    vector <char> mass(itc_len(str));
    for(int i = 0; i < itc_len(str); i++){
        mass[i] = str[i];
    }
    return mass;
}

string itc_join(vector <char> lst, string sep)
{
    string res = "";
    for (int i = 0; i < lst.size() - 1; i++) {
        res += lst[i];
        res += sep;
    }
    res += lst[lst.size() - 1];
    return res;
}


string itc_rmstrspc(string str)
{
    string str1 = "";
    for(long long i = 0; i < itc_len(str); i++){
        if(str[i] != ' ')
            str1 += str[i];
    }
    return str1;
}

string itc_rmstrchar(string str, string less1)
{
    string str1 = str;
    int ind = itc_find_str(str1, less1), start = 0;
    int lon = itc_len(less1);
    while(ind != -1){
        str1 = itc_slice_str(str, start, ind - 1);
        str1 += itc_slice_str(str, ind + lon, itc_len(str));
        ind = itc_find_str(str1, less1);
        str = str1;
    }
    return str1;
}

long itc_sumlst(const vector <int> &lst)
{
    long res = 0;
    for(long long i = 0; i < lst.size(); i++)
        {
        res += lst[i];
        }
    return res;
}
