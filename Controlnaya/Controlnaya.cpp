#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>
using namespace std;

void main()

{
	setlocale(LC_ALL, "Rus");
	int n, i, j;
	do
	{

		cout << "������� ����� ������� n=";
		cin >> n;
		cout << endl;

		switch (n)
		{
		case 1:
			/*1.	� ��������� ������ ������������ �������� ������ ������������ � 1, 2, 4, 8, 16, 32 � 64.
			���� ����������� ����� n. ��� ���������� ����������� ����� �������� ����� ����� ��������� ����� n 
			(������� ���������� ������ �� ������������ ��� ������� �����)? ��������������, ��� ������� ����������
			������� ���������� ����� ���� ����������*/

			int money, coup,numberCoup,temp, temp2;
			cout << "������� ����� n= ";
			cin >> money;
			numberCoup = 0;

			temp = money;
			for (i = 6; i >= 0; i--)
			{
				
				coup = pow(2, i);
				while(temp>0)
				{
					temp = temp%coup;
					money = money - temp;
					temp = temp / coup;
					numberCoup++;

				}
				cout << "����� "<< coup <<" ����� "<< numberCoup << endl;
				//temp = money - temp;
				temp = money;
				numberCoup = 0;
			}

			system("pause");

			break;

		case 2:
			/*2.	����� ����� ������������� �������� �����, ������� 50*/
			int sumOdd;
			sumOdd = 0;
				for (i = 1; i <= 50; i++)
				{
					if (i % 2 != 0)		
						sumOdd += i;			
				}
			
				cout << "����� ������������� �������� ����� " << sumOdd << endl;

			system("pause");

		

			break;

		case 3:
			/*3.	�������� ������ � ��������� ������� ������ �� ������. 
			����� ����� ��������� ��� �������, ������� ����� ������ 1000 ����� 
			(���������� ����� ������� ����������).*/
			int NumberTh, Price, totalPrice;

			NumberTh = 2 + rand() % 3;
			cout << "���������� ������� " << NumberTh << endl;
		
			totalPrice = 0;
		
				for (i = 1; i <= NumberTh; i++)
				{
					Price = 990 + rand() % 50;

					cout << "��������� ������ " << i << " = "<< Price << endl;
					cout << endl;

					    if (Price > 1000)
						totalPrice += Price;

					cout << endl;
					
				}
			
				cout << "����� ��������� �������, ������� ����� ������ 1000 ����� ����������: " << totalPrice << endl;

			system("pause");

			

			break;

		case 4:
			/*4.	�������� ������ � ���������� ������� � ������ �� ���������� ����� �
			� ������ �� ���������� ��������. ����� ������� � ������ �� ����� 16. 
			����� ����� ����� ������� �� ���� �������� (���������� �������� ����������, 
			�� ��������, ��� ����� ������ ������� ��������� ����� ����� ������).*/
			
			int pagePaper, pageMagazine, pageMagazineTotal, numberPaper, numberMagazine;

			numberPaper = 1 + rand() % 3;
			cout << "���������� ����� " << numberPaper <<endl;

			numberMagazine = 1 + rand() % 2;
			cout << "���������� ����� " << numberMagazine << endl;

			pageMagazineTotal = 0;

				for (i = 1; i <= numberPaper; i++)
				{
					pagePaper = 10 + rand() % 5;
					cout << "���������� ������� � ������ "<< i << " ���������� "<< pagePaper << endl;

					for (j = 1; j <= numberMagazine; j++)
					{
						pageMagazine = 15 + rand() % 3;
						cout << "���������� ������� � ������� " << j << " ���������� " << pageMagazine << endl;
						
						if (pagePaper < pageMagazine)
							pageMagazineTotal+= pageMagazine;

					}

				}

			cout << "����� ����� ������� �� ���� �������� " << pageMagazineTotal << endl;

			cout << endl;

			system("pause");
			
			break;

		case 5:
			/*5.	�������� ����� �����, �������� �� ���� ������ �������, �� ���� ������, ... 
			� �� ���� ������������. ���������� ����� ����� �����, �������� � ������, �������,
			����� � �. �. ������� �����.
			�������� ����� � �����, �������� �� 1 � �1, �� ������������.*/

			int children, sumchildren;
			
			sumchildren = 0;

				for (i = 1; i <= 11; i++)
				{
					children = 10 + rand() % 5;
					cout << "���������� ����� � ������ " << i << " ���������� "<< children << endl;
					sumchildren += children;
				}
					cout << "����� ����� ����� � ����� ���������� " << sumchildren << endl;
					
			system("pause");

		

			break;

		case 6:
			/*6.	�������� ��� �������� ������� �������� �� ������.
			���������� ����� �����, ���������� �� 1985 ����, � ����� �����, 
			���������� ����� 1990 ����*/

			int ageP, numberP, sum1985, sum1990;

			numberP = 10 + rand() % 5;
			sum1985 = 0;
			sum1990 = 0;

			cout << "���������� ����� � ������ ���������� " << numberP << endl;

			for (i = 1; i <= numberP; i++)
			{
				ageP = 27 + rand() % 10;
				cout << "������� " << i << " �������� " << ageP << endl;

				if (ageP >=33)
				{
					sum1985++;
				}

				if (ageP <= 28)
				{
					sum1990++;
				}

			}

			cout << "����� �����, ���������� �� 1985 ���� " << sum1985 << endl;
			cout << "����� �����, ���������� ����� 1990 ���� " << sum1990 << endl;

			system("pause");

			

			break;


		case 7:
			/*7.	��� ������ �������-��������� ���������� �� ������� ��������
			�� ���������� ��������� � ���������� ����������. ����������, �������
			������ ����� ������ ���������, ��� ����������*/

			int win, lose, numberTeam, numberWin;

			numberWin = 0;
			numberTeam = 5 + rand() % 5;

			cout << "���������� ������ � ������ ���������� " << numberTeam << endl;

				for (i = 1; i <= numberTeam; i++)
				{
					win = 1 + rand() % 5;
					cout << "���������� ��������� " << i << " ������� " << win << endl;
					lose = 1 + rand() % 5;
					cout << "���������� ���������� " << i << " ������� " << lose << endl;

						if (win > lose)
							numberWin++;
				}

				cout << numberWin << " ������ ����� ������ ���������, ��� ���������� " << endl;
			

			system("pause");

		

			break;

		case 8:
			/*8.	�������� ������ ������� �������� �� ������ �� ���� ���������. 
			���������� ���������� ��������� ������, ���������� �� �������� ������.*/

			int marks, numberStTot, numberBad;

			numberBad = 0;
			numberStTot = 5 + rand() % 5;

			cout << "���������� ��������� � ������ ���������� " << numberStTot << endl;

				for (i = 1; i <= numberStTot; i++)
				{
					marks = 1 + rand() % 3;
					cout << "������ �������� " << i << " ����� " << marks << endl;

					if (marks == 2)
						numberBad++;
				}

			cout << "���������� ��������� ������, ���������� �� �������� ������ " << numberBad << endl;


			system("pause");

		

			break;

		case 9:
			/*9.	�������� ����� ������� �������� �� ��������� ������ �����. 
			�����, ������� ����� ����� 100 ��, ����� ������� �������� ������� 
			(��������, ��� � ������ ����, �� ������� ����, ���� ����� �������).
			���������� ������� ����� ������ ����� � ������� ����� ��������� �����.*/

			int weight, weightTotal, weight100, weightNorm, numberWeight, numer100, numberNor;
			double averweight100, averweightNorm;

			weightTotal = 0;
			weight100 = 0;
			numer100 = 0;
			numberNor = 0;

			numberWeight = 5 + rand() % 5;

			cout << "���������� ������� � ������ ���������� " << numberWeight << endl;

				for (i = 1; i <= numberWeight; i++)
				{
					weight = 95 + rand() % 10;
					cout << "��� �������� " << i << " ����� " << weight << endl;

					weightTotal += weight;

						if (weight >= 100)
						{
							weight100 += weight;
							numer100++;
						}
						
				}


				 weightNorm = weightTotal - weight100;
				 numberNor = numberWeight - numer100;

				cout << "����� ����� ������ ����� " << weight100 << endl;

				cout << "����� ����� ������� ����� " << weightNorm << endl;

				cout << "����� ���������� ������ ����� " << numer100 << endl;

				cout << "����� ���������� ������� ����� " << numberNor << endl;

				numberNor = numberWeight - numer100;

			averweight100 = weight100 / numer100;
			averweightNorm = weightNorm / numberNor;

			cout << "������� ����� ������ ����� " << averweight100 << endl;
			cout << "������� ����� ��������� ����� " << averweightNorm << endl;

			system("pause");

			

			break;

		case 10:
			/*10.	� ��������� �� ������� ��������� ���������� �����������-���������� ������������
			�� ������ ������, ��� ��������� � ������ (�����, ����������� �� ����������� ��������� �����).
			�������� �� ����� ������ ��������� ����� ����� ���������� ���������� ����������.*/

			int time, numberSportTot, mintime;

			mintime = 100000;

			numberSportTot = 5 + rand() % 5;

			cout << "���������� �����������-���������� ���������� " << numberSportTot << endl;

				for (i = 1; i <= numberSportTot; i++)
				{
					time = 100 + rand() % 5;
					cout << "����� ���������� " << i << " � ������� " << time << endl;

					if (time < mintime)
					{ 
						mintime = time;
						cout << "������ ����� " << mintime << endl;
					}
						
				}

			system("pause");

			

			break;




		}

	} while (n != 0);

}