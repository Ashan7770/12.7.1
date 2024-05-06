#include <iostream>
#include "Header.h"
#include <string.h>
using namespace std;
int main() {
	Ai* iii = new Ai;
	bool tik;
	const int qw=77;
	string ks;
	char arr[qw],arr2[qw];
	int zx,k,sd;
	system("chcp 1251");
	do {
		zx = 0;
		cout << "Введите ваше кратное K:" << endl;
		cin >> k;		
		do {
			cout << "Введите ваши символы." << endl;
			cin >> arr[zx];
			++zx;
			cout << "Для продолжения введите '/'" << endl;
			cin >> ks;
		} while ("/" == ks);
		int* bn = &zx;
		cout << "Ваш вывод:" << endl;
		for (int cv = 0; cv < *bn; cv++) {
			cout << arr[cv];
		}
		iii->tor1();
		cout << "K= " << k << endl;
		for (int m = 0; m < k; m++) {
			arr2[m] = arr[m];
		}
		iii->tor1();
		for (int cv = 0; cv < k; cv++) {
			cout << arr2[cv];
		}
		iii->tor1();
		if (k==1) {
			sd = 1;
        }
		else if (k>1&&zx>=k) {
			int rec = zx % k;
			if (0 == rec) {
				cout << "Все в порядке.\n" << endl;
				sd = 1;
			}
			else {
				cout << "Не правильное сопостовление!.\n" << endl;
				sd = 0;
			}
		}
		else if(k > 1 && zx < k){
			sd = 0;
			cout << "\nНе хватает символов. K должно быть меньше!\n" << endl;
		}
		else {
			cout << "\nТак нельзя!\n" << endl;
			sd = 0;
			k = 0;
		}
	} while (0 == sd);
	for (int ct = 0; ct < zx;) {
		for (int cc = 0; cc < k;cc++,ct++) {
			if (arr[ct] == arr2[cc]) {
				cout << "ct= "<<ct<< "cc= " << cc << "\nПроверка выполнена....\narr[ct]= "<< arr[ct]<<"\narr2[cc]= "<< arr2[cc]<<"\n++++++++++" << endl;
				tik = true;
			}
			else {
				cout << "ct= " << ct << "cc= " << cc << "\nПроверка НЕ выполнена....\narr[ct]= " << arr[ct] << "\narr2[cc]= " << arr2[cc] << "\n++++++++++" << endl;
				tik = false;
			}
		}
	}
	cout << "\n=================================\n=================================" << endl;
	if (true==tik) {
		cout << "\nКратность К верна." << endl;
	}
	else if (false==tik) {
		cout << "\nКратность К не верна." << endl;
	}
	return 0;
}