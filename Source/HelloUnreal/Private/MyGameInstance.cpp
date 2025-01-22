// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::Init()
{
	/*int32 a = 6;
	int32 b = 5;
	int32 result;*/

	//한번에 잡아서 각주 만들고, 풀기 = Ctrl K C, Ctrl K U
	//순서대로 더하기, 빼기, 곱하기, 나누기, 나머지

	/*result = a + b;
	result = a - b;
	result = a * b;
	result = a / b;
	result = a % b;*/

	//고양이 만들기
	/*UE_LOG(LogTemp, Warning, TEXT("\\    /\\"));
	UE_LOG(LogTemp, Warning, TEXT(" )  ( ')"));
	UE_LOG(LogTemp, Warning, TEXT("(  /  )"));
	UE_LOG(LogTemp, Warning, TEXT("\\(__)|"));*/

	//강아지 만들기
	/*UE_LOG(LogTemp, Warning, TEXT("|\\_/ |"));
	UE_LOG(LogTemp, Warning, TEXT("|q p|     /"));
	UE_LOG(LogTemp, Warning, TEXT("(  0  )"""\));
	UE_LOG(LogTemp, Warning, TEXT("|\"^"\|"));
	UE_LOG(LogTemp, Warning, TEXT("||_/=\\\\__|"));*/


	/*int32 a = 6;
	bool bDeath = true;
	char b = 'A';

	int32 e = 32767;
	float f = 3.14;
	int32 a = 6;
	int32 b = 10;
	int32 result = 0;*/

	//result += a;  //result = result + a;
	//result -= a;  //result = result - a;
	//result *= a;  //result = result * a;
	//result /= a;  //result = result / a;
	//result %= a;  //result = result % a;

	//result++; //result + 1; 반환하고 +1을 해준다
	//++result; //+1을 해주고 반환을 해준다
	//result--; //반환하고 -1을 해준다
	//result--; //-1을 해주고 반환을 해준다

	//비교 연산
	//a + b

	/*int32 a = 6;
	int32 b = 10;
	if (a != b)
	{
		UE_LOG(LogTemp, Warning, TEXT("A랑 B가 같지 않다"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("A랑 B가 같다"));
	}*/

	/*int32 a = 6;
	int32 b = 10;*/

	//논리 연산
	/* ! true면 false 반환, false면 true 반환
	&& AND
	|| OR*/

	/*bool bA = true;
	bool bB = false;
	bool bC = true;*/

	/*if ((bA || bB) && bC)
	{
		UE_LOG(LogTemp, Warning, TEXT("괄호 안의 값이 모두 trus입니다"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("괄호 안의 값이 모두 trus가 아닙니다"));
	}*/

	//분기문
	//if
	//else if
	//else
	//swich
	
	//만약
	/*if (false)
	{
		UE_LOG(LogTemp, Warning, TEXT("출입"));
	}*/
	// 만약 이게 아니라면
	/*else if (bA = true)
	{
		UE_LOG(LogTemp, Warning, TEXT("else if 출입"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("else if 출입"));
	}*/

	/*int SwitchNumber = 3;
	char charA = 'A';
	TCHAR* AAA = TEXT("AAA")

	
	switch (SwitchNumber)
	{
	case 0:
		UE_LOG(LogTemp, Warning, TEXT("SwitchNumber는 0"));
		break;
	case 1:
		UE_LOG(LogTemp, Warning, TEXT("SwitchNumber는 1"));
		break;
	case 2:
		UE_LOG(LogTemp, Warning, TEXT("SwitchNumber는 2"));
		break;
	case 3:
		UE_LOG(LogTemp, Warning, TEXT("SwitchNumber는 3"));
		break;
	case 4:
		UE_LOG(LogTemp, Warning, TEXT("SwitchNumber는 4"));
		break;
	}*/
	
	/*int32 ValueA = 1;
	int32 ValueB = 2;*/
	

	/*UE_LOG(LogTemp, Warning, TEXT("%%d"), ValueA + ValueB);*/
	/*if (ValueA > ValueB)
	{
		UE_LOG(LogTemp, Warning, TEXT("1 == 2"));
	}
	else if (ValueA < ValueB)
	{
		UE_LOG(LogTemp, Warning, TEXT("1 < 2"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("1 > 2"));
	}*/

	/*int32 ValueA = 1;
	int32 ValueB = 2;
	float Result = 0;

	Result = ((float)ValueA + (float)ValueB) / 2;
	
	UE_LOG(LogTemp, Warning, TEXT("%.1f"), Result);*/
		
	/*int32 bResult = 0;

	if ((bool)bResult)
	{
		UE_LOG(LogTemp, Warning, TEXT("bResult는 True입니다"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("bResult는 false입니다"));
	}*/

	

	// 반복문
	// ~뭐 하는 동안
	/*int32 ValueA = 0;
	while (ValueA <= 10)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), ValueA);
		ValueA++;
	}*/
	
	//int32 ValueA = 11;

	/*do
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), ValueA);
		ValueA++;
	} while (ValueA <= 10);*/

	/*for (int32 i = 0; i < 5; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), ValueA);
		i++;
	}*/
	
	//구구단
	/*for (int32 i = 2; i < 10; i++)
	{
		for (int32 j = 1; j < 10; j++) {
			UE_LOG(LogTemp, Warning, TEXT("%d * %d = %d"), i,j,i*j);
		}
		
	}*/

	/*FString Line;
	
	for (int32 i = 1; i < 6; i++)
	{
		Line.Append(TEXT("*"));
		Line.Append(TEXT("*"));

		UE_LOG(LogTemp, Warning, TEXT("%s"), *Line, *, i);
	}*/
	

	//int32 numRows = 5; // 출력할 줄 수

	//for (int32 i = 1; i <= numRows; i++)
	//{
	//	FString Line = ""; // 각 줄의 문자열을 저장할 FString 변수 초기화

	//	for (int32 j = 1; j <= i; j++)
	//	{
	//		Line.Append(TEXT("*")); // Line에 별 추가
	//	}

	//	UE_LOG(LogTemp, Warning, TEXT("%s"), *Line); // 완성된 줄 출력
	//}


//int32 numRows = 5;
//
//for (int32 i = 1; i <= numRows; i++)
//{
//	FString Line = "";
//
//	// 공백 추가 (오른쪽 정렬을 위해)
//	for (int32 j = numRows - i; j > 0; j--) // 수정 1: 공백 추가 로직 수정
//	{
//		Line.Append(TEXT(" "));
//	}
//
//	// 별 추가
//	for (int32 k = 1; k <= i; k++)
//	{
//		Line.Append(TEXT("*"));
//	}
//
//	UE_LOG(LogTemp, Warning, TEXT("%s"), *Line);
//}


	/*FString Line = "";

	for (int32 i = 1; i <= 5; i++)
	{
		Line.Append("*");
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Line);
	}*/
	



	/*for (int32 i = 5; i >= 1; i--)
	{
		FString Line = "";
		for (int32 j = 0; j < i; j++)
		{
			Line.Append("*");
		}

		UE_LOG(LogTemp, Warning, TEXT("%s"), *Line);
	}*/

	// 실패
	/*int32 TopLine = 5;

	for (size_t i = 0; i < TopLine; i++)
	{
		FString Line = "";
		for (size_t j = 1; j < TopLine; j--)
		{
			Line.Append(" ");
		}

		for (size_t k = 0; k < 2 * i - 1; k++)
		{
			Line.Append("*");
		}
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Line);
	}*/	

	// 처음 넣은 값 ~ 뒤에 넣은 값까지의 정수중 랜덤으로 하나 출력합니다
	//언리얼 엔진에서는 UTF-16으로 문자 인코딩을 하는데 TEXT()매크로를 감싸주지 않으면
	// UTF-16 변환을 못시켜줘서 깨진다
	//0은 가위
	//1은 바위
	//2는 보

	//int32 Enemy = FMath::RandRange(0, 2);
	//int32 MyValue = FMath::RandRange(0, 2);

	//FString EnemyChoiceString;
 //   FString MyChoiceString;

 //   switch (Enemy)
 //   {
 //   case 0: EnemyChoiceString = TEXT("가위"); break;
 //   case 1: EnemyChoiceString = TEXT("바위"); break;
 //   case 2: EnemyChoiceString = TEXT("보"); break;
 //   }

 //   switch (MyValue)
 //   {
 //   case 0: MyChoiceString = TEXT("가위"); break;
 //   case 1: MyChoiceString = TEXT("바위"); break;
 //   case 2: MyChoiceString = TEXT("보"); break;
 //   }

 //   UE_LOG(LogTemp, Warning, TEXT("적: %s"), *EnemyChoiceString);
 //   UE_LOG(LogTemp, Warning, TEXT("나: %s"), *MyChoiceString);

 //   if (Enemy == MyValue)
 //   {
 //       UE_LOG(LogTemp, Warning, TEXT("비겼다"));
 //   }
 //   else if ((MyValue - Enemy + 3) % 3 == 1) // 핵심: 간단해진 승리 조건
 //   {
 //       UE_LOG(LogTemp, Warning, TEXT("승리!"));
 //   }
 //   else
 //   {
 //       UE_LOG(LogTemp, Warning, TEXT("패배!"));
 //   }

	//int32 MyDamageInput = 10;
	//int32 EnemyHPInput = 15;
	//int32 MyMana = 20;
	////마나가 3이 소비된다
	////return으로 받아서
	////출력
	////마나가 : 00 몇 남았습니다

	//UseSkill(MyMana);

//FString Temp = Win;
//Scissors = TEXT("핑킹가위");

int32 Enemy = FMath::RandRange(0, 2); //0~2
int32 MyValue = FMath::RandRange(0, 2);

FString EnemyAttack;
FString MyAttack;

//랜덤으로 생성 된 숫자를 문자로 변환해보자

MyAttack = SetAttack(MyValue);
EnemyAttack = SetAttack(Enemy);

FString Rsult = Judge(MyValue, Enemy);

UE_LOG(LogTemp, Warning, TEXT("내가 낸 패 : %s 적이 낸 패 : %s %s!"), *MyAttack, *EnemyAttack, *Rsult);

}



int32 UMyGameInstance::Damage(int32 MyDamage, int32 EnemyHP)
{
	return EnemyHP - MyDamage;
}

int32 UMyGameInstance::UseSkill(int32 Mana)
{
	int32 Result = Mana - 3;
	UE_LOG(LogTemp, Warning, TEXT("마나가 : 00 몇 남았습니다"), Result);
	return Result;
}

FString UMyGameInstance::SetAttack(int32 Attack)
{
	FString Result;

	switch (Attack) // 0 ~ 2
	{
	case 0:
		Result = Scissors;
		break;
	case 1:
		Result = Rock;
		break;
	case 2:
		Result = Paper;
		break;
	}

	return Result;
}

FString UMyGameInstance::Judge(int32 MyValue, int32 Enemy)
{
	if (MyValue == Enemy)
	{
		return Draw;
	}
	else if ((MyValue == 0 && Enemy == 1) || (MyValue == 1 && Enemy == 2) || (MyValue == 2 && Enemy == 0))
	{
		return Loss;
	}
	else
	{
		return Win;
	}
}


