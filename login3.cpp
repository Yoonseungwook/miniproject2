#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <ctime>
#include <vector>
#include <random>
#include "login1.h"
using namespace std;

int main()
{
    int ticketflag = 0;
    ;
    Ticketing aa;
    LOgin mylogin;
    int num = 0;
    int num2 = 0;
    string num4;
    // 유일한 번호 변수
    int unique;
    // 로그인 시 필요한 값
    int ret;
    // 로그인 구조체
    Login login;
    // 로그인할 때 파일 출력하는 구조체
    Login print;
    // 회원가입 구조체
    Login account;
    // 회원가입 화면
    mylogin.print_bokrail();

    mylogin.totallogin(login, print, account);

    // system("clear");

    // 로그인
    // C++에서 파일에서 값들을 불러오어 컴마(,)로 구분한 후 구조체에 저장하려면
    // std::ifstream 클래스와 std::getline 함수를 사용할 수 있다.

    // 보류
    // aa.getloginid(mylogin);

    while (!ticketflag)
    {
        aa.input();
        int b = aa.get_curr_hour();
        // cout << b << endl;
        // system("cls");
        // system("clear");
        aa.seats();
        aa.payment();
        aa.tickets();
        ticketflag = aa.ticket_confirm();
    }
    cout << "승차권을 다시 확인하시겠습니까?(y/n) ";
    cin >> num4;
    if (num4 == "y")
    {
        aa.tickets();
        sleep(10);
    }
    else if (num4 == "n")
    {
        cout << "ok!!" << endl;
    }

    return 0;
}