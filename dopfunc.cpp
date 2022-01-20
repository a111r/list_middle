#include "middle_list.h"

int itc_find_str(string str1, string str2){
    long long len1 = 0;
    len1 =  itc_len(str1);
    long long len2 = 0;
    len2 = itc_len(str2);
    long long kol = 0;
    for (long long i = 0; i < len1; i++){
        kol = 0;
        if (str1[i] == str2[0]){
        for (long long j = 0; j < len2; j++){
            if (str1[i + j] == str2[j]){
                kol += 1;
            }
        }
        }
        if (kol == len2){
            return i;
        }
    }
    return -1;
}

string itc_join(vector <char> lst, string sep){
    string new_str = "";
    if (lst.size() > 0){
    for(int i = 0; i < (lst.size() - 1); i++){
        new_str += lst[i];
        new_str += sep;
    }
    new_str += lst[lst.size() - 1];
    }
    return new_str;
}

long long itc_len(string str){
    long long kol = 0, i = 0;
    while (str[i] != '\0'){
        kol++;
        i++;
    }
   return kol;
}

int itc_max_lst(const vector <int> &lst){
    int maxx = -2147483648;
    if (lst.size() > 0){
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] > maxx)
                maxx = lst[i];
        }
    }
    return maxx;
}

int itc_min_lst(const vector <int> &lst){
    int mann = 2147483647;
    if (lst.size() > 0){
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] < mann)
                mann = lst[i];
        }
    }
    return mann;
}
