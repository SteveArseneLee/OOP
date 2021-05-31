/*             Object-Oriented Programming, Midterm exam (2021-1-02)                       */
//  Department(�а�): ��ǻ�Ͱ��а�         Student ID(�й�):   2019110634           Name(�̸�): ��â��                   
//
// Write your answers in Korean or English(����� �ѱ��� �Ǵ� ����� �ۼ��Ͻÿ�).

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

//#define _MAC  // If you are not using a Mac, delete this line (���� Mac�� ������� �ʴ´ٸ� �� ���� ����ÿ�).
#define _MSVC // If you are not using a Visual Studio on Windows, delete this line (���� Windows���� Visual Studio�� ������� �ʴ´ٸ� �� ���� ����ÿ�).

#ifdef _MAC
void OOP_2021_1_Midterm(std::string);
#else
void OOP_2021_1_Midterm();
#ifdef _MSVC 
#ifdef WIN32
#pragma comment(lib, "OOP_2021_1_Midterm_Lib.Lib")
#else
#pragma comment(lib, "OOP_2021_1_Midterm_Lib64.Lib")
#endif
#endif
#endif

// Notation: 
// 1. a^b denotes a raised the power b(a^b�� a�� b����)
// 2. [a, b] denotes the range from a to b, and a and b are inclusive
//    ([a, b]�� a���� b������ �����̸�, a�� b�� �����Ѵ�)

/*
1(10). Trace the evaluation of the following expressions, and write their resulting values and corresponding variables
   (�Ʒ� ������ �� ����(��� �� �� ������ ������ ����)�� �����϶�).
   (example, x = 1+4/2; -> x = 1+2; -> x = 3;)
a)
    int x = 7, y = 3, z;		//
    y *= x + (y++)%10;			//
    x = 7, (y++)%10 = 3 -> y = 3 * (7+3) -> y = 30
b)
    int x = 2;					//
    auto result = x>2?++x:x++;	//
    auto y = x;					//
    condition : False -> x++ä��(2) -> y = 2
c)
    int x = 0;					//
    auto result = x && 10/x;	//
    x =0 -> result = 0 && INF -> result = ������ ���ϴ�.
d)
    int F(int n) { return n*n; }
    int x = F(F(30%3) + F(1+11/3)/F(2));	//
    F(30%3) = 0, F(1+11/3) = 16, F(2) = 4 -> x = F(0 + 16/4) = 16 -> x = 16
e)
    int x = 10;		//
    int *p = &x;	//
    int *pp = p;	//
    *pp = 3;		//
    int xx = x;		//
    *p = 10 -> *pp = p�� �ּҰ� -> *pp = 3 -> x = 10
*/
// Please perform "build/run" after completing problem 1
// (1�� �ۼ��� "build/run"�� �����Ͻÿ�).



/*
2(10). Explain any errors in the following program
   (�Ʒ� ���α׷��� ������ ������ �����϶�).
a)
    void F(int x) { return x*x; }			//
    void �Լ��ε� return���� �ֽ��ϴ�.
b)
    std::cout << srand(10) << std::endl;	//
    Ʋ�� ���� �����ϴ�.
c)
    std::vector<int> x;						//
    x = 10;									//
    x�� index�� ���� �ʰ� ������ �־����ϴ�.
d)
    int i = 0;								//
    do{										//
        std::cout << i++ << std::endl;		//
    }while(i < 10)							//
    Ʋ�� ���� �����ϴ�.
e)
    int F(){...}							//
    int F(int x) {...}						//
    double F(int x) {...}					//
    int F(double x) {...}					//
    Ʋ�� ���� �����ϴ�. �ش� ������ function overloading�� ��Ÿ�� ���Դϴ�.
*/
// Please perform "build/run" after completing problem 2
// (2�� �ۼ��� "build/run"�� �����Ͻÿ�).

/*
* Explain how the following code fragment works(the final values of variables and process)
  (�Ʒ� �ڵ��� ������ �����϶�(������ ����Ǵ� ���� ó�� ����)).
3(5).
    std::vector<std::vector<int>> data(5, std::vector<int>(3));
    for(int r = 0 ; r < 5 ; r++)
        for(int c = 0 ; c < 3 ; c++)
            data[r][c] = r*10+c;
    std::vector<int> x = data[2];

	// data[0][0] = 0*10 + 0 = 0, data[0][1] = 0*10 + 1 = 1, data[0][2] = 0*10 + 2 = 2
	// data[1][0] = 1*10 + 0 = 10, data[1][1] = 1*10 + 1 = 11, data[1][2] = 1*10 + 2 = 12
	// ...
	// data[4][0] = 4*10 + 0 = 40, ... data[4][2] = 4*10 + 2 = 42
	// �� 5*3 matrix�� �����ǰ�
	//  std::vector<int> x = data[2]; �� ���� index�� 2�� ���� �� 3��° ������ {20,21,22}�� x vector�� ���� �˴ϴ�.
	//
	//

4(5).
    int x = 5;
    int *p1 = &x;
    int *p2 = &x;
    ++(*p1);
    ++(*p2);

	// *p1�� 5�� ���� *p2���� 5�� ���ϴ�.
	// 4,5��° ���� Prefix�� ���� 1�� ������ *p1�� *p2�� ��� 6�̶� ���� ���� �˴ϴ�.
	//
	//


5(5).
    std::vector<int> data(3, 2), a;
    a = data;
    for(int i = 0 ; i < a.size() ; i++)
        a[i] = i*10;
    for(auto x:data)
        std::cout << x << ' ';

	// a.size�� 3��ŭ for���� ���� a[0] = 0, a[1] = 10, a[2] = 20�� ���ϴ�.
	// for(auto x:data)���� 3���� �ݺ��� ���� 2�� ���� ��µ˴ϴ�.
	//
	//
	//
	//
	//
	//
*/
// Please perform "build/run" after completing problem 5
// (5�� �ۼ��� "build/run"�� �����Ͻÿ�).

/* Fill in _____ to satify the given condtions(�־��� ������ �����ϵ��� _____�� ä��ÿ�).
6(3). Condition: If data vector contains the same value, bExisted is true, otherwise it is false
   (data vector�� ������ ���� ������ bExisted�� true, �ƴϸ� false)
    std::vector<int> data[10];
	for(int i = 0 ; i < 10 ; ++i) data[i] = rand()%5;
    
	bool bExisted = false;
	for(int i = 0 ; i < 10 ; ++i){
       for(int k = _____ ; k < _____ ; ++k)		// (  1    ,	10		)
           if(_____) bExisted = true;			// data[k] == data[i]
  
7(2). Condition: max stores the maximum value of x(max�� x�� �ִ��� ����).
    int max = _____;							// 0
    for(int i = 0 ; i < rand() ; i++){
        int x = rand();
        if(_____) max = x;						// max < x
    }
*/
// Please perform "build/run" after completing problem 7
// (7�� �ۼ��� "build/run"�� �����Ͻÿ�).
 
// Make your codes as clear, concise, and simple as possible.
// �����ϸ� ��Ȯ�ϰ� �����ϰ� ������ �ۼ��϶�.

// 8(4). Write a function that returns the absolute difference of two parameters(�� ���� �Ű������� �������� ��ȯ�ϴ� �Լ��� �ۼ��϶�).
// Do not use the standard library functions(ǥ�� ���̺귯�� �Լ��� ������� �� ��)
// absolute difference of a and b: |x-y|
int Fn01(int x, int y) {
    int temp = x - y;
    if (temp < 0) temp = 0 - temp;
    return temp;
}

// 9(15). Write a recursive function that returns an integer with any consecutive sequence replaced by one digit for an integer parameter
// (������ �Ű������� �������� ���ڸ� ���ڸ��� �ٲ� ������ ��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�).
// Input: 1332227 -> 1327
int Fn02(int n) {
    int rtn = 0;

	if (n/10 > 0)
	{
		rtn = Fn02(n/10);
        
	}
	return n%10;
}

// 10(6). Write a function that can modify a variable pointing by an argument(passing to pAverage), the variable stores the average of data vector.
// (�μ�(pAverage�� ����)�� ����Ű�� ������ data vector�� ����� �����ϴ� �Լ��� �ۼ��϶�).
void Fn03(std::vector<int> data, double *pAverage){
    double temp = 0;
    for (auto x : data) {
        temp += x;
    }
    temp /= data.size();
    *pAverage = temp;
}

// 11(15). Write a function that returns the approximated integral of f(x) = x^2 + sin(x) over the interval [0, 1], using 10,000 function evaluations. 
// To calculate the integral, you should use 10,000 random numbers ranging[0, 1].
// ([0, 1]�� ���� f(x) = x^2 + sin(x)�� ������ �ٻ簪�� 10,000���� �򰡿����� ��ȯ�ϴ� �Լ��� �ۼ��϶�. ������ ����Ҷ� [0, 1]������ 10,000���� ������ ���� ����϶�). 
double Fn04(){

    double x = 0;
    x = x * x + sin(x);
    return x;
}

/* 12(15). Write a function that works as like the below comments and test codes(main).
 �Ʒ� �ּ��� ���� �����ϴ� �Լ��� �׽�Ʈ �ڵ�(main)�� �ۼ��϶�.
	std::vector<int> v1, v2;
	// define v3(v3�� ����)
	// v1 and v2 store ten elements that are random values ranging [0, 100]
	// (v1�� v2�� [0, 100]�� ������ ���� 10���� ��ҷ� ����)
	Fn05(v1, v2, v3);
	// v3 stores ten elements that are average values of v1 and v2 by element-wise (real value)
	// (v3�� v1�� v2�� ��Ҵ����� ����� 10���� ��ҿ� ����)
*/

#ifdef _MAC
std::string currentPath = "";       // Paste only the path shown by GD(GD�� ǥ�õǴ� ��θ� �ٿ���������).
#endif

int main(){
#ifdef _MAC
    OOP_2021_1_Midterm(currentPath);
#else
	OOP_2021_1_Midterm();
#endif
    srand((unsigned)time(nullptr));

	std::cout << Fn01(2, 5) << std::endl;
    std::cout << Fn02(1222553) << std::endl;
    
    std::vector<int> data(15);
    for(int i = 0 ; i < data.size() ; i++)
        data[i] = rand()%1000;
    
	double Return = 0;
    Fn03(data, &Return);
    std::cout << Return << std::endl;

	std::cout << Fn04() << std::endl;
    
    // Do not change the codes above in the main function(main �Լ����� ���� ������ �������� ���ÿ�).

	// Write test codes for problems 12(12�� ������ test �ڵ带 �ۼ�)


   
    // You can optionally use the remaining parts(���� �κ��� �����Ӱ� ����ϼ���).
   
}
