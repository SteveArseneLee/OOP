/*             Object-Oriented Programming, Midterm exam (2021-1-02)                       */
//  Department(학과): 컴퓨터공학과         Student ID(학번):   2019110634           Name(이름): 이창렬                   
//
// Write your answers in Korean or English(답안은 한국어 또는 영어로 작성하시오).

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

//#define _MAC  // If you are not using a Mac, delete this line (만일 Mac을 사용하지 않는다면 이 줄은 지우시오).
#define _MSVC // If you are not using a Visual Studio on Windows, delete this line (만일 Windows에서 Visual Studio를 사용하지 않는다면 이 줄은 지우시오).

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
// 1. a^b denotes a raised the power b(a^b는 a의 b제곱)
// 2. [a, b] denotes the range from a to b, and a and b are inclusive
//    ([a, b]는 a부터 b까지의 범위이며, a와 b를 포함한다)

/*
1(10). Trace the evaluation of the following expressions, and write their resulting values and corresponding variables
   (아래 수식의 평가 과정(결과 값 및 연관된 변수를 포함)을 설명하라).
   (example, x = 1+4/2; -> x = 1+2; -> x = 3;)
a)
    int x = 7, y = 3, z;		//
    y *= x + (y++)%10;			//
    x = 7, (y++)%10 = 3 -> y = 3 * (7+3) -> y = 30
b)
    int x = 2;					//
    auto result = x>2?++x:x++;	//
    auto y = x;					//
    condition : False -> x++채택(2) -> y = 2
c)
    int x = 0;					//
    auto result = x && 10/x;	//
    x =0 -> result = 0 && INF -> result = 오류가 납니다.
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
    *p = 10 -> *pp = p의 주소값 -> *pp = 3 -> x = 10
*/
// Please perform "build/run" after completing problem 1
// (1번 작성후 "build/run"을 진행하시오).



/*
2(10). Explain any errors in the following program
   (아래 프로그램의 오류가 있으면 설명하라).
a)
    void F(int x) { return x*x; }			//
    void 함수인데 return값이 있습니다.
b)
    std::cout << srand(10) << std::endl;	//
    틀린 것이 없습니다.
c)
    std::vector<int> x;						//
    x = 10;									//
    x의 index를 쓰지 않고 변수를 넣었습니다.
d)
    int i = 0;								//
    do{										//
        std::cout << i++ << std::endl;		//
    }while(i < 10)							//
    틀린 것이 없습니다.
e)
    int F(){...}							//
    int F(int x) {...}						//
    double F(int x) {...}					//
    int F(double x) {...}					//
    틀린 것이 없습니다. 해당 문항은 function overloading을 나타낸 것입니다.
*/
// Please perform "build/run" after completing problem 2
// (2번 작성후 "build/run"을 진행하시오).

/*
* Explain how the following code fragment works(the final values of variables and process)
  (아래 코드의 동작을 설명하라(변수에 저장되는 값과 처리 과정)).
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
	// 로 5*3 matrix가 생성되고
	//  std::vector<int> x = data[2]; 를 통해 index가 2인 벡터 즉 3번째 벡터인 {20,21,22}가 x vector에 들어가게 됩니다.
	//
	//

4(5).
    int x = 5;
    int *p1 = &x;
    int *p2 = &x;
    ++(*p1);
    ++(*p2);

	// *p1에 5가 들어가고 *p2에도 5가 들어갑니다.
	// 4,5번째 줄은 Prefix로 먼저 1씩 증가한 *p1와 *p2에 모두 6이란 값이 들어가게 됩니다.
	//
	//


5(5).
    std::vector<int> data(3, 2), a;
    a = data;
    for(int i = 0 ; i < a.size() ; i++)
        a[i] = i*10;
    for(auto x:data)
        std::cout << x << ' ';

	// a.size인 3만큼 for문이 돌고 a[0] = 0, a[1] = 10, a[2] = 20이 들어갑니다.
	// for(auto x:data)또한 3번의 반복을 통해 2가 세번 출력됩니다.
	//
	//
	//
	//
	//
	//
*/
// Please perform "build/run" after completing problem 5
// (5번 작성후 "build/run"을 진행하시오).

/* Fill in _____ to satify the given condtions(주어진 조건을 만족하도록 _____을 채우시오).
6(3). Condition: If data vector contains the same value, bExisted is true, otherwise it is false
   (data vector에 동일한 값이 있으면 bExisted는 true, 아니면 false)
    std::vector<int> data[10];
	for(int i = 0 ; i < 10 ; ++i) data[i] = rand()%5;
    
	bool bExisted = false;
	for(int i = 0 ; i < 10 ; ++i){
       for(int k = _____ ; k < _____ ; ++k)		// (  1    ,	10		)
           if(_____) bExisted = true;			// data[k] == data[i]
  
7(2). Condition: max stores the maximum value of x(max는 x의 최댓값이 저장).
    int max = _____;							// 0
    for(int i = 0 ; i < rand() ; i++){
        int x = rand();
        if(_____) max = x;						// max < x
    }
*/
// Please perform "build/run" after completing problem 7
// (7번 작성후 "build/run"을 진행하시오).
 
// Make your codes as clear, concise, and simple as possible.
// 가능하면 명확하고 간결하고 간단히 작성하라.

// 8(4). Write a function that returns the absolute difference of two parameters(두 개의 매개변수의 절대차를 반환하는 함수를 작성하라).
// Do not use the standard library functions(표준 라이브러리 함수를 사용하지 말 것)
// absolute difference of a and b: |x-y|
int Fn01(int x, int y) {
    int temp = x - y;
    if (temp < 0) temp = 0 - temp;
    return temp;
}

// 9(15). Write a recursive function that returns an integer with any consecutive sequence replaced by one digit for an integer parameter
// (정수형 매개변수의 연속적인 숫자를 한자리로 바꾼 정수를 반환하는 함수를 작성하시오).
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
// (인수(pAverage로 전달)가 가리키는 변수에 data vector의 평균을 저장하는 함수를 작성하라).
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
// ([0, 1]에 대한 f(x) = x^2 + sin(x)의 적분의 근사값을 10,000개의 평가에의해 반환하는 함수를 작성하라. 적분을 계산할때 [0, 1]범위의 10,000개의 임의의 수를 사용하라). 
double Fn04(){

    double x = 0;
    x = x * x + sin(x);
    return x;
}

/* 12(15). Write a function that works as like the below comments and test codes(main).
 아래 주석과 같이 동작하는 함수와 테스트 코드(main)를 작성하라.
	std::vector<int> v1, v2;
	// define v3(v3를 정의)
	// v1 and v2 store ten elements that are random values ranging [0, 100]
	// (v1과 v2는 [0, 100]의 임의의 수를 10개의 요소로 저장)
	Fn05(v1, v2, v3);
	// v3 stores ten elements that are average values of v1 and v2 by element-wise (real value)
	// (v3는 v1과 v2의 요소단위의 평균을 10개의 요소에 저장)
*/

#ifdef _MAC
std::string currentPath = "";       // Paste only the path shown by GD(GD로 표시되는 경로만 붙여넣으세요).
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
    
    // Do not change the codes above in the main function(main 함수에서 위의 내용은 수정하지 마시오).

	// Write test codes for problems 12(12번 문제의 test 코드를 작성)


   
    // You can optionally use the remaining parts(이후 부분은 자유롭게 사용하세요).
   
}
