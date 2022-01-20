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
    cout << "������ ������:" << endl;
    cout << "���������� ������ �����: " << ev.size() << "," << '\t'	<< '\t' << "���������� �������� �����: " << unev.size() << endl;
    cout << "������������ ������ �����: " << itc_max_lst(ev) << "," << '\t'	<< '\t' << "������������ �������� �����: " << itc_max_lst(unev) <<"," << endl;
    cout << "����������� ������ �����: "<< itc_min_lst(ev) << "," << '\t' << '\t' << "����������� �������� �����: "<< itc_min_lst(unev) << "," << endl;
    cout << "����� ������ �����: "<< itc_sumlst(ev) << "," << '\t'	<< '\t' << "����� �������� �����: "<< itc_sumlst(unev) << "," << endl;
}
