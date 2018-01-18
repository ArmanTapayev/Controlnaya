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

		cout << "Введите номер задания n=";
		cin >> n;
		cout << endl;

		switch (n)
		{
		case 1:
			/*1.	В некоторой стране используются денежные купюры достоинством в 1, 2, 4, 8, 16, 32 и 64.
			Дано натуральное число n. Как наименьшим количеством таких денежных купюр можно выплатить сумму n 
			(указать количество каждой из используемых для выплаты купюр)? Предполагается, что имеется достаточно
			большое количество купюр всех достоинств*/

			int money, coup,numberCoup,temp, temp2;
			cout << "Введите сумму n= ";
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
				cout << "Купюр "<< coup <<" равно "<< numberCoup << endl;
				//temp = money - temp;
				temp = money;
				numberCoup = 0;
			}

			system("pause");

			break;

		case 2:
			/*2.	Найти сумму положительных нечетных чисел, меньших 50*/
			int sumOdd;
			sumOdd = 0;
				for (i = 1; i <= 50; i++)
				{
					if (i % 2 != 0)		
						sumOdd += i;			
				}
			
				cout << "сумму положительных нечетных чисел " << sumOdd << endl;

			system("pause");

		

			break;

		case 3:
			/*3.	Известны данные о стоимости каждого товара из группы. 
			Найти общую стоимость тех товаров, которые стоят дороже 1000 тенге 
			(количество таких товаров неизвестно).*/
			int NumberTh, Price, totalPrice;

			NumberTh = 2 + rand() % 3;
			cout << "Количество товаров " << NumberTh << endl;
		
			totalPrice = 0;
		
				for (i = 1; i <= NumberTh; i++)
				{
					Price = 990 + rand() % 50;

					cout << "Стоимость товара " << i << " = "<< Price << endl;
					cout << endl;

					    if (Price > 1000)
						totalPrice += Price;

					cout << endl;
					
				}
			
				cout << "Общая стоимость товаров, которые стоят дороже 1000 тенге составляет: " << totalPrice << endl;

			system("pause");

			

			break;

		case 4:
			/*4.	Известны данные о количестве страниц в каждой из нескольких газет и
			в каждом из нескольких журналов. Число страниц в газете не более 16. 
			Найти общее число страниц во всех журналах (количество журналов неизвестно, 
			но известно, что объем любого журнала превышает объем любой газеты).*/
			
			int pagePaper, pageMagazine, pageMagazineTotal, numberPaper, numberMagazine;

			numberPaper = 1 + rand() % 3;
			cout << "Количество газет " << numberPaper <<endl;

			numberMagazine = 1 + rand() % 2;
			cout << "Количество газет " << numberMagazine << endl;

			pageMagazineTotal = 0;

				for (i = 1; i <= numberPaper; i++)
				{
					pagePaper = 10 + rand() % 5;
					cout << "Количество страниц в газете "<< i << " составляет "<< pagePaper << endl;

					for (j = 1; j <= numberMagazine; j++)
					{
						pageMagazine = 15 + rand() % 3;
						cout << "Количество страниц в журнале " << j << " составляет " << pageMagazine << endl;
						
						if (pagePaper < pageMagazine)
							pageMagazineTotal+= pageMagazine;

					}

				}

			cout << "Общее число страниц во всех журналах " << pageMagazineTotal << endl;

			cout << endl;

			system("pause");
			
			break;

		case 5:
			/*5.	Известно число детей, учащихся во всех первых классах, во всех вторых, ... 
			и во всех одиннадцатых. Определить общее число детей, учащихся в первых, третьих,
			пятых и т. д. классах школы.
			Оператор цикла с шагом, отличным от 1 и –1, не использовать.*/

			int children, sumchildren;
			
			sumchildren = 0;

				for (i = 1; i <= 11; i++)
				{
					children = 10 + rand() % 5;
					cout << "Количество детей в классе " << i << " составляет "<< children << endl;
					sumchildren += children;
				}
					cout << "Общее число детей в школе составляет " << sumchildren << endl;
					
			system("pause");

		

			break;

		case 6:
			/*6.	Известен год рождения каждого человека из группы.
			Определить число людей, родившихся до 1985 года, и число людей, 
			родившихся после 1990 года*/

			int ageP, numberP, sum1985, sum1990;

			numberP = 10 + rand() % 5;
			sum1985 = 0;
			sum1990 = 0;

			cout << "Количество людей в группе составляет " << numberP << endl;

			for (i = 1; i <= numberP; i++)
			{
				ageP = 27 + rand() % 10;
				cout << "Возраст " << i << " человека " << ageP << endl;

				if (ageP >=33)
				{
					sum1985++;
				}

				if (ageP <= 28)
				{
					sum1990++;
				}

			}

			cout << "Число людей, родившихся до 1985 года " << sum1985 << endl;
			cout << "Число людей, родившихся после 1990 года " << sum1990 << endl;

			system("pause");

			

			break;


		case 7:
			/*7.	Для каждой команды-участницы чемпионата по футболу известно
			ее количество выигрышей и количество проигрышей. Определить, сколько
			команд имеют больше выигрышей, чем проигрышей*/

			int win, lose, numberTeam, numberWin;

			numberWin = 0;
			numberTeam = 5 + rand() % 5;

			cout << "Количество команд в группе составляет " << numberTeam << endl;

				for (i = 1; i <= numberTeam; i++)
				{
					win = 1 + rand() % 5;
					cout << "Количество выигрышей " << i << " команды " << win << endl;
					lose = 1 + rand() % 5;
					cout << "Количество проигрышей " << i << " команды " << lose << endl;

						if (win > lose)
							numberWin++;
				}

				cout << numberWin << " команд имеют больше выигрышей, чем проигрышей " << endl;
			

			system("pause");

		

			break;

		case 8:
			/*8.	Известны оценки каждого студента из группы по двум экзаменам. 
			Определить количество студентов группы, получивших на экзамене двойку.*/

			int marks, numberStTot, numberBad;

			numberBad = 0;
			numberStTot = 5 + rand() % 5;

			cout << "Количество студентов в группе составляет " << numberStTot << endl;

				for (i = 1; i <= numberStTot; i++)
				{
					marks = 1 + rand() % 3;
					cout << "Оценка студента " << i << " равна " << marks << endl;

					if (marks == 2)
						numberBad++;
				}

			cout << "Количество студентов группы, получивших на экзамене двойку " << numberBad << endl;


			system("pause");

		

			break;

		case 9:
			/*9.	Известна масса каждого человека из некоторой группы людей. 
			Людей, имеющих массу более 100 кг, будем условно называть полными 
			(известно, что в группе есть, по меньшей мере, один такой человек).
			Определить среднюю массу полных людей и среднюю массу остальных людей.*/

			int weight, weightTotal, weight100, weightNorm, numberWeight, numer100, numberNor;
			double averweight100, averweightNorm;

			weightTotal = 0;
			weight100 = 0;
			numer100 = 0;
			numberNor = 0;

			numberWeight = 5 + rand() % 5;

			cout << "Количество человек в группе составляет " << numberWeight << endl;

				for (i = 1; i <= numberWeight; i++)
				{
					weight = 95 + rand() % 10;
					cout << "Вес человека " << i << " равна " << weight << endl;

					weightTotal += weight;

						if (weight >= 100)
						{
							weight100 += weight;
							numer100++;
						}
						
				}


				 weightNorm = weightTotal - weight100;
				 numberNor = numberWeight - numer100;

				cout << "Общая масса полных людей " << weight100 << endl;

				cout << "Общая масса обычных людей " << weightNorm << endl;

				cout << "Общее количество полных людей " << numer100 << endl;

				cout << "Общая количество обычных людей " << numberNor << endl;

				numberNor = numberWeight - numer100;

			averweight100 = weight100 / numer100;
			averweightNorm = weightNorm / numberNor;

			cout << "Средняя масса полных людей " << averweight100 << endl;
			cout << "Средняя масса остальных людей " << averweightNorm << endl;

			system("pause");

			

			break;

		case 10:
			/*10.	В компьютер по очереди поступают результаты спортсменов-участников соревнований
			по лыжным гонкам, уже пришедших к финишу (время, затраченное на прохождение дистанции гонки).
			Выводить на экран лучший результат после ввода результата очередного спортсмена.*/

			int time, numberSportTot, mintime;

			mintime = 100000;

			numberSportTot = 5 + rand() % 5;

			cout << "Количество спортсменов-участников составляет " << numberSportTot << endl;

				for (i = 1; i <= numberSportTot; i++)
				{
					time = 100 + rand() % 5;
					cout << "Время спортсмена " << i << " в минутах " << time << endl;

					if (time < mintime)
					{ 
						mintime = time;
						cout << "Лучшее время " << mintime << endl;
					}
						
				}

			system("pause");

			

			break;




		}

	} while (n != 0);

}