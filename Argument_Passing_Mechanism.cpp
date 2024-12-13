#include <iostream>

using namespace std;

class Argument_Passing_Mechanism {
protected:
	int num = 10;
	int anum_1[1] = { 10 };
	int anum_10[10] = { 1,2,3,4,5,6,7,8,9,10 };
public:
	void R_pValue_plus(int* a) { (*a)++; };
	void R_aValue_plus(int a[]) { (*a)++; };
	void C_Value_plus(int a) { a++; };
	void C_aValue_plus(int a[]) { a++; }

};


class Call_by_Reference : public Argument_Passing_Mechanism {
public:
	Call_by_Reference() {
		cout << "포인터에 의한 호출 " << endl;
		R_pValue_plus(&num);
		cout<<"변수 : " << num << " / 1 증가" << endl;
		R_aValue_plus(anum_1);
		cout << "배열 : " << anum_1[0] << " / 1 증가" << endl;
	}
};


class Call_by_Value : public Argument_Passing_Mechanism {
public:
	Call_by_Value() {
		cout << "값에 의한 호출 " << endl;
		C_Value_plus(num);
		cout << "변수 : " << num << " / 증가 X" << endl;
		C_aValue_plus(anum_1);										//배열은 주소를 넘김.arr[i]를 통해서 값 변경이 가능
		cout << "배열 : " << anum_1[0] << " / 증가 X" << endl;
	}
};


int main() {
	Call_by_Reference R;
	Call_by_Value V;

	return 0;
}


