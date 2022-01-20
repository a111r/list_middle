#include "middle_list.h"

long itc_sum_even_lst(const vector <int>& lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 0)
            res += lst[i];
    }
    return res;
}

long itc_sum_even_part_lst(const vector <int>& lst)
{
    int res = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] % 2 == 0)
            res += lst[i];
    }
    return res;
}

void itc_odd_even_separator_lst(const vector<int> &lst, vector<int> &lst1, vector<int> &lst2)
{
    for(long long i = 0; i < lst.size(); i++)
    {
        if(lst[i] % 2 == 0)
            lst1.push_back(lst[i]);
        else
            lst2.push_back(lst[i]);
    }
}

void itc_pos_neg_separator_lst(const vector <int>& lst, vector <int>& lst1, vector <int>& lst2, vector <int>& lst3)
{
	if (lst.size() < 1)
        return;
	for (int i = 0; i < lst.size(); i++) {
		if (lst[i] < 0)
		    lst1.push_back(lst[i]);
		else if (lst[i] == 0)
		    lst2.push_back(lst[i]);
		else
            lst3.push_back(lst[i]);
	}
}

void itc_odd_even_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "RUS");
    vector <int> ev;
    vector <int> unev;
    itc_odd_even_separator_lst(lst, ev, unev);
    cout << "Анализ списка:" << endl;
    cout << "Количество четных чисел: " << ev.size() << "," << '\t'	<< '\t' << "Количество нечетных чисел: " << unev.size() << endl;
    cout << "Максимальная четная цифра: " << itc_max_lst(ev) << "," << '\t'	<< '\t' << "Максимальная нечетная цифр: " << itc_max_lst(unev) <<"," << endl;
    cout << "Минимальная четная цифра: "<< itc_min_lst(ev) << "," << '\t' << '\t' << "Минимальная нечетная цифра: "<< itc_min_lst(unev) << "," << endl;
    cout << "Сумма четных чисел: "<< itc_sumlst(ev) << "," << '\t'	<< '\t' << "Сумма нечетных чисел: "<< itc_sumlst(unev) << "," << endl;
}
