// Copyright (c) 2023 Akbar Satipov (codewithakbar)

// Diqqat! Gavno kod bo'lib go'rinishi mumkin lekin
// man hozircha majburman shunatib kod yozib durisha.
// Mualliflik huquqiga qattiq rioya qilinadi
// Agar kimda-kim muallifdan so'ramasdan kodni ishlatsa:
// Javobgarlikka tortiladi.

#include "MyFirstCmakeProj.h"

using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define WHITE "\033[37m"
#define BLUE "\033[34m"
#define cyan "\e[0;36m"
#define green "\e[0;34m"
#define OKEGREEN "\033[38;2;0;128;0m"
#define LIGHT_GREEN "\033[92m"
#define BOLD_BLUE "\033[1;34m"
#define ORANGE "\033[38;2;255;165;0m"
#define BOLD_ORANGE "\033[1;38;2;255;165;0m"

string Sorov; // siklni to'xtatish uchun o'zgarivchan
string SAV;	  // siklni to'xtatish uchun o'zgarivchan

// raqam bilan textni xoshroy chiqaradon funksiya
string getNumberAndText(string son, const string& text)
{
	stringstream ss;
	ss << BLUE << "\t\t\t[" << WHITE << son << RESET << BLUE << "]"
		<< "  " << OKEGREEN << text << RESET << "\n";

	return ss.str();
}

int TOPSHIRIQ_RAQAMI;
int MAVZU_RAQAMI;

// komputer nomini chiqaradi (admin@kompnomi:#>)
int getCommandLine()
{

	char computerName[MAX_COMPUTERNAME_LENGTH + 1];
	DWORD size = sizeof(computerName);

	if (!GetComputerName(computerName, &size))
	{
		DWORD error = GetLastError();
		cerr << "Kompyuter nomi xato: " + error << endl;
		return 1;
	}

	cout << RED << "\nadmin@" << computerName << RESET << ":#> ";
}


// MAVZU 5
namespace BeshinchiMavzu
{

	// Beshinchi Mavzu topshiriq, misollar jamlanmasi!
	class BirinchiTopshiriq
	{

	public:

		void setBeshinchiMavzuBirinchiTopshirq()
		{

			int MISOL_RAQAMI;


			cout << endl;
			cout << getNumberAndText("01", "Q sonini P darajasini topuvchi funksiya tuzing.") << endl;
			cout << getNumberAndText("02", "P sonini oxiridan L sonini qo'shuvchi funksiya tuzing.") << endl;
			cout << getNumberAndText("03", "Berilgan to'g'ri burchakli uchburchakning katetlari \n\t\t\t      yordamida gipotenuzasini topuvchi funksiya tuzing") << endl;
			cout << getNumberAndText("04", "Berilgan ikki nuqtaning koordinatasi asosida ular \n\t\t\t      orasidagi masofani topuvchi funksiya tuzing") << endl;
			cout << getNumberAndText("05", "Berilgan sondagi qo‘shni raqamlarining raqamlarining yig'indisiga \n\t\t\t      teng bo'lgan raqamni o'chirivchi funksiya tuzing.(Uch xonali son misolida: 143 Natija 13)") << endl;
			cout << getNumberAndText("06", "Berilgan N soni ikkita tub sonni yig'indisi bo‘lishini \n\t\t\t      tekshiruvchi funksiya tuzing.") << endl;
			cout << getNumberAndText("07", "Hech bir uchtasi bir to'g'ri chiziqda yotmaydigan funksiya tuzing.") << endl;
			cout << getNumberAndText("08", "Berilgan son 11 ga bo'linsa 1 aks holda 0 chiqaruvchi funksiya tuzing.") << endl;
			cout << getNumberAndText("09", "Berilgan sonni K o'rindagi raqamini N o'rindagi raqami \n\t\t\t      bilan almashtiruvchi funksiya tuzing.") << endl;
			cout << getNumberAndText("10", "Sonni raqamlarini o'sish (kamayish) tartibida saralovchi funksiya tuzing.") << endl;
			cout << getNumberAndText("11", "Uchburchakni uchta uchining koordinatalari berilgan. Uning \n\t\t\t      yuzasini topuvchi funksiya tuzing.") << endl;
			cout << getNumberAndText("12", "Tomonlari a, b, c, d va e haqiqiy sonlardan iborat bo'lgan \n\t\t\t      beshburchak berilgan. Beshburchakni va \n\t\t\t      undagi uchta uchburchaklarni yuzasini topuvchi alohida funksiyalar tuzing.") << endl;

			do
			{
				getCommandLine();

				cout << "Endi misol raqamini kiriting: ";
				cin >> MISOL_RAQAMI;

				switch (MISOL_RAQAMI)
				{
				case 1:
					Misol1();
					break;
				case 2:
					Misol2();
					break;
				case 3:
					Misol3();
					break;
				case 4:
					Misol4();
					break;
				case 5:
					Misol5();
					break;
				case 6:
					Misol6();
					break;
				case 7:
					Misol7();
					break;
				case 8:
					Misol8();
					break;
				case 9:
					Misol9();
					break;
				case 10:
					Misol10();
					break;
				case 11:
					Misol_11();
					break;
				case 12:
					Misol_12();
					break;

				default:
					cout << ORANGE << "Misolni topilmadi!" << RESET << endl;
				}

				getCommandLine();
				cout << BLUE << "Yana misol ishlanadimi? (h/y): " << RESET << endl;
				cin >> SAV;

			} while (SAV == "h");
		}


	private:
		struct Nuqta
		{
			double x;
			double y;
		};

		// Sonning P-darajasini topuvchi funksiya (Misol 1)
		double darajaTop(int son, int p)
		{
			return pow(son, p);
		};

		// P sonini oxiridan L sonini qo‘shuvchi funksiya (Misol 2)
		double qoshuvchi(double P, double L)
		{
			return P + L;
		}

		// Gipotenuzani topuvchi funksiya (Misol 3)
		double gipotenuzaTop(int katet1, int katet2)
		{
			double gipotenuza = sqrt(pow(katet1, 2) + pow(katet2, 2));
			return gipotenuza;
		}

		// Nuqtalar orasidagi masofani topuvchi funksiya (Misol 4)
		double masofaTop(int x1, int y1, int x2, int y2)
		{
			double masofa = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
			return masofa;
		}

		// Oradagi sonni o'chiruvchi funksiya (Misol 5)
		int ortaDelete(int son)
		{

			string numStr = to_string(son);

			string resultStr;

			for (int i = 1; i < numStr.length() - 1; ++i)
			{
				if (numStr[i - 1] - '0' + numStr[i + 1] - '0' != numStr[i] - '0')
				{
					resultStr += numStr[i];
				}
			}

			resultStr = numStr[0] + resultStr + numStr[numStr.length() - 1];

			return stoi(resultStr);
		}

		// Tub sonni tekshiruvchi funksiya (Misol6)
		bool tubSon(int n)
		{
			if (n < 2)
			{
				return false;
			}

			for (int i = 2; i <= sqrt(n); ++i)
			{
				if (n % i == 0)
				{
					return false;
				}
			}

			return true;
		}

		// Yig'indisiga teng bo'lgan ikkita tub sonni tekshiruvchi funksiya (Misol 6)
		bool yigindisiTubSon(int N)
		{
			for (int i = 2; i <= N / 2; ++i)
			{
				int j = N - i;
				if (tubSon(i) && tubSon(j))
				{
					return true;
				}
			}

			return false;
		}

		// Uchtasi bir to'g'ri chiziqda yotmaydigan funksiya (Misol 7)
		bool togriChiziqdaYotmaydi(Nuqta A, Nuqta B, Nuqta C)
		{
			// nuqtani tekshirish
			if ((A.x == B.x && A.y == B.y) || (A.x == C.x && A.y == C.y) || (B.x == C.x && B.y == C.y))
			{
				cout << "Nuqtalarning hammasi bir biriga to'g'ri qo'yilgan, chiziq to'g'ri emas." << endl;
				return false;
			}

			double a = B.y - A.y;
			double b = A.x - B.x;
			double c = A.x * (A.y - B.y) + A.y * (B.x - A.x);

			// nuqtaning qiymatini topamiz
			double qiymatC = a * C.x + b * C.y;

			if ((qiymatC - c) == 0)
			{
				cout << "Nuqta chiziq ustida joylashgan, chiziq to'g'ri emas." << endl;
				return false;
			}

			return true;
		}

		// Sonni tekshiruvchi funksiya (Misol 8)
		int bolinuvchiSon(int son)
		{
			if (son % 11 == 0)
			{
				cout << son << " soni bo'linadi";
				return 1;
			}
			else
			{
				cout << son << " soni bo'linmaydi!";
				return 2;
			}
		}

		// Sonni almashturuvchi funksiya (Misol 9)
		int replaceDigit(int son, int k, int n)
		{
			int natija = 0;
			int kofitsent = 1;

			while (son != 0)
			{
				int raqam = son % 10;
				if (raqam == k)
				{
					natija += n * kofitsent;
				}
				else
				{
					natija += raqam * kofitsent;
				}
				kofitsent *= 10;
				son /= 10;
			}

			return natija;
		}

		// Sonni raqamlarini kamayish tartibida saralovchi funksiya (Misol 10)
		int reverseSort(int number)
		{
			vector<int> digits;

			while (number != 0)
			{
				digits.push_back(number % 10);
				number /= 10;
			}

			sort(digits.begin(), digits.end(), greater<int>());

			int result = 0;
			int multiplier = 1;

			for (int i = 0; i < digits.size(); ++i)
			{
				result += digits[i] * multiplier;
				multiplier *= 10;
			}

			return result;
		}

		// Uchburchak yuzasini hisoblash uchun funksiya (Misol 11)
		double triangleArea(double a, double b, double c)
		{
			double s = (a + b + c) / 2.0;
			double area = sqrt(s * (s - a) * (s - b) * (s - c));

			return area;
		}

		// Beshburchak yuzasini hisoblidon funksiya (Misol 12)
		double pentagonArea(double a, double b, double c, double d, double e)
		{

			double areaABC = triangleArea(a, b, c);
			double areaACD = triangleArea(a, c, d);
			double areaADE = triangleArea(a, d, e);

			double area = areaABC + areaACD + areaADE;

			return area;
		}

		void Misol1()
		{

			// cout << "Q sonini P darajasini topuvchi funksiya. " << endl;
			cout << YELLOW << "#= = =///////\t\t Q sonini P darajasini topuvchi funksiya.!\t\t ////// = = =#" << RESET << "\n\n\n";

			int son, daraja;
			getCommandLine();
			cout << "Iltimos, sonni kiriting: ";
			cin >> son;
			getCommandLine();
			cout << "Iltimos, darajani kiriting: ";
			cin >> daraja;

			double natija = darajaTop(son, daraja);

			cout << GREEN << son << "ning " << daraja << " darajasi = " << natija << RESET << endl;
		}

		void Misol2()
		{

			int P, L;

			getCommandLine();
			cout << "Iltimos, P sonini kiriting: ";
			cin >> P;
			getCommandLine();
			cout << "Iltimos, L sonini kiriting: ";
			cin >> L;

			double natija = qoshuvchi(P, L);

			cout << GREEN << "Natija: " << natija << RESET << endl;
		}

		void Misol3()
		{

			int katet1, katet2;

			getCommandLine();
			cout << "Iltimos, birinchi katetni kiriting: ";
			cin >> katet1;
			getCommandLine();
			cout << "Iltimos, ikkinchi katetni kiriting: ";
			cin >> katet2;

			double gipotenuza = gipotenuzaTop(katet1, katet2);

			cout << GREEN << "Gipotenuza: " << gipotenuza << RESET << endl;
		}

		void Misol4()
		{

			int x1, y1, x2, y2;
			getCommandLine();
			cout << "Iltimos, birinchi nuqta koordinatalarini kiriting (x1 y1): ";
			cin >> x1 >> y1;
			getCommandLine();
			cout << "Iltimos, ikkinchi nuqta koordinatalarini kiriting (x2 y2): ";
			cin >> x2 >> y2;

			double masofa = masofaTop(x1, y1, x2, y2);

			getCommandLine();
			cout << GREEN << "Nuqtalar orasidagi masofa: " << masofa << RESET << endl;
		}

		void Misol5()
		{

			int son;
			getCommandLine();
			cout << "Iltimos, uch xonali son kiriting: ";
			cin >> son;

			int ochiriladiganRaqam = ortaDelete(son);

			getCommandLine();
			cout << GREEN << "Natija: " << ochiriladiganRaqam << RESET << endl;
		}

		void Misol6()
		{

			cout << "Berilgan N soni ikkita tub sonni yig‘indisi bo‘lishini tekshiruvchi funksiya tuzing." << endl;

			int N;
			getCommandLine();
			cout << "Iltimos, N son kiriting: ";
			cin >> N;

			bool natija = yigindisiTubSon(N);

			if (natija)
			{
				getCommandLine();
				cout << GREEN << N << " soni ikkita tub sonning yig'indisi" << RESET << endl;
			}
			else
			{
				getCommandLine();
				cout << GREEN << N << " soni ikkita tub sonning yig'indisi emas" << RESET << endl;
			}
		}

		void Misol7()
		{

			Nuqta A, B, C;

			getCommandLine();
			cout << "Iltimos, A nuqtasini kiriting (x y): ";
			cin >> A.x >> A.y;
			getCommandLine();
			cout << "Iltimos, B nuqtasini kiriting (x y): ";
			cin >> B.x >> B.y;
			getCommandLine();
			cout << "Iltimos, C nuqtasini kiriting (x y): ";
			cin >> C.x >> C.y;

			bool natija = togriChiziqdaYotmaydi(A, B, C);

			if (natija)
			{
				getCommandLine();
				cout << GREEN << "Uchta nuqta bir to'g'ri chiziqda yotmaydi." << RESET << endl;
			}
			else
			{
				getCommandLine();
				cout << GREEN << "Uchta nuqta bir to'g'ri chiziqda yotadi yoki chiziq to'g'ri emas." << RESET << endl;
			}
		}

		void Misol8()
		{

			int son;
			getCommandLine();
			cout << "Son kiriting: ";
			cin >> son;

			int natija = bolinuvchiSon(son);

			getCommandLine();
			cout << GREEN << "Natija: " << natija << RESET << endl;
		}

		void Misol9()
		{

			int son, k, n;

			getCommandLine();
			cout << "Sonni kiriting: ";
			cin >> son;

			getCommandLine();
			cout << "Olmashtirish uchun raqam kiriting (K): ";
			cin >> k;

			getCommandLine();
			cout << "Toza raqam kiriting (N): ";
			cin >> n;

			int natija = replaceDigit(son, k, n);
			getCommandLine();
			cout << GREEN << "Natija: " << natija << RESET << endl;
		}

		void Misol10()
		{

			int son;

			getCommandLine();
			cout << "Sonni kiriting: ";
			cin >> son;

			int tartiblanganSon = reverseSort(son);
			getCommandLine();
			cout << GREEN << "Raqamlari kamayish tartibida saralgan son: " << tartiblanganSon << RESET << endl;
		}

		void Misol_11()
		{

			double a, b, c;

			getCommandLine();
			cout << "Uchburchakning a tomonini kiriting: ";
			cin >> a;

			getCommandLine();
			cout << "Uchburchakning b tomonini kiriting: ";
			cin >> b;

			getCommandLine();
			cout << "Uchburchakning c tomonini kiriting: ";
			cin >> c;

			double yuza = triangleArea(a, b, c);
			getCommandLine();
			cout << GREEN << "Uchburchakning yuzasi: " << yuza << RESET << endl;
		}

		void Misol_12()
		{

			double a, b, c, d, e;

			getCommandLine();
			cout << "Beshburchakning a tomonini kiriting: ";
			cin >> a;

			getCommandLine();
			cout << "Beshburchakning b tomonini kiriting: ";
			cin >> b;

			getCommandLine();
			cout << "Beshburchakning c tomonini kiriting: ";
			cin >> c;

			getCommandLine();
			cout << "Beshburchakning d tomonini kiriting: ";
			cin >> d;

			getCommandLine();
			cout << "Beshburchakning e tomonini kiriting: ";
			cin >> e;

			double beshburchakYuza = pentagonArea(a, b, c, d, e);
			getCommandLine();
			cout << GREEN << "Beshburchakning yuzasi: " << beshburchakYuza << RESET << endl;
		}
	};

	class IkkinchiTopshiriq
	{
	public:

		void setBeshinchiMavzu_IkkinchiTopshirq()
		{

			int MISOL_RAQAMI;


			cout << "\n\n";
			cout << "#----------------------- Ikkinchi Topshiriq ------------------------#";
			cout << "\n\n";
			cout << getNumberAndText("01", "Ikkita son berilgan. Ularni raqamlari yig'indisi kattasini \n\t\t\t   toping. Sonni raqamlari yig'indisini topuvchi funksiya tuzing") << endl;
			cout << getNumberAndText("02", "soninig") << endl;
			cout << getNumberAndText("03", "itenuzasini") << endl;
			cout << getNumberAndText("04", "anituzing") << endl;
			cout << getNumberAndText("05", "Natija") << endl;
			cout << getNumberAndText("06", "tuzing") << endl;
			cout << getNumberAndText("07", "tuzing") << endl;
			cout << getNumberAndText("08", "Berilgan") << endl;
			cout << getNumberAndText("09", "Berilgan") << endl;
			cout << getNumberAndText("10", "Sonni") << endl;
			cout << getNumberAndText("11", "Uchburchakni") << endl;
			cout << getNumberAndText("12", "Tomonlari") << endl;
			cout << "\n";

			do
			{
				getCommandLine();

				cout << "Endi misol raqamini kiriting: ";
				cin >> MISOL_RAQAMI;

				switch (MISOL_RAQAMI)
				{
				case 1:
					Misol1();
					break;
				case 2:
					Misol2();
					break;
				case 3:
					Misol3();
					break;
				case 4:
					Misol4();
					break;
				case 5:
					Misol5();
					break;
				case 6:
					Misol6();
					break;
				case 7:
					Misol7();
					break;
				case 8:
					Misol8();
					break;
				case 9:
					Misol9();
					break;
				case 10:
					Misol10();
					break;
				case 11:
					Misol_11();
					break;
				case 12:
					Misol_12();
					break;

				default:
					cout << ORANGE << "Misolni topilmadi!" << RESET << endl;
				}

				getCommandLine();
				cout << BLUE << "Yana misol ishlanadimi? (h/y): " << RESET << endl;
				cin >> SAV;

			} while (SAV == "h");
		}


	private:


		void Misol1()
		{

		}

		void Misol2()
		{

		}

		void Misol3()
		{

		}

		void Misol4()
		{

		}
		void Misol5()
		{

		}
		void Misol6()
		{

		}
		void Misol7()
		{

		}
		void Misol8()
		{

		}
		void Misol9()
		{

		}
		void Misol10()
		{

		}
		void Misol_11()
		{

		}
		void Misol_12()
		{

		}



	};

	class UchunchiTopshiriq
	{
	public:

		void setBeshinchiMavzu_UchunchiTopshirq()
		{

			int MISOL_RAQAMI;


			cout << endl;
			cout << getNumberAndText("01", "funksiya") << endl;
			cout << getNumberAndText("02", "soninig") << endl;
			cout << getNumberAndText("03", "itenuzasini") << endl;
			cout << getNumberAndText("04", "anituzing") << endl;
			cout << getNumberAndText("05", "Natija") << endl;
			cout << getNumberAndText("06", "tuzing") << endl;
			cout << getNumberAndText("07", "tuzing") << endl;
			cout << getNumberAndText("08", "Berilgan") << endl;
			cout << getNumberAndText("09", "Berilgan") << endl;
			cout << getNumberAndText("10", "Sonni") << endl;
			cout << getNumberAndText("11", "Uchburchakni") << endl;
			cout << getNumberAndText("12", "Tomonlari") << endl;

			do
			{
				getCommandLine();

				cout << "Endi misol raqamini kiriting: ";
				cin >> MISOL_RAQAMI;

				switch (MISOL_RAQAMI)
				{
				case 1:
					Misol1();
					break;
				case 2:
					Misol2();
					break;
				case 3:
					Misol3();
					break;
				case 4:
					Misol4();
					break;
				case 5:
					Misol5();
					break;
				case 6:
					Misol6();
					break;
				case 7:
					Misol7();
					break;
				case 8:
					Misol8();
					break;
				case 9:
					Misol9();
					break;
				case 10:
					Misol10();
					break;
				case 11:
					Misol_11();
					break;
				case 12:
					Misol_12();
					break;

				default:
					cout << ORANGE << "Misolni topilmadi!" << RESET << endl;
				}

				getCommandLine();
				cout << BLUE << "Yana misol ishlanadimi? (h/y): " << RESET << endl;
				cin >> SAV;

			} while (SAV == "h");
		}


	private:


		void Misol1()
		{

		}

		void Misol2()
		{

		}

		void Misol3()
		{

		}

		void Misol4()
		{

		}
		void Misol5()
		{

		}
		void Misol6()
		{

		}
		void Misol7()
		{

		}
		void Misol8()
		{

		}
		void Misol9()
		{

		}
		void Misol10()
		{

		}
		void Misol_11()
		{

		}
		void Misol_12()
		{

		}



	};

}


void getSatipoffMenu()
{

	cout << "\n\n";
	cout << RED << "\t\t\t"
		<< "(  ____ \\(  ___  )\\__   __/\\__   __/(  ____ )(  ___  )(  ____ \\(  ____ \\" << RESET << endl;
	cout << RED << "\t\t\t"
		<< "| (    \\/| (   ) |   ) (      ) (   | (    )|| (   ) || (    \\/| (    \\/" << RESET << endl;
	cout << RED << "\t\t\t"
		<< "| (_____ | (___) |   | |      | |   | (____)|| |   | || (__)   | (__" << RESET << endl;
	cout << RED << "\t\t\t"
		<< "(_____  )|  ___  |   | |      | |   |  _____)| |   | ||  __)   |  __)" << RESET << endl;
	cout << RED << "\t\t\t"
		<< "      ) || (   ) |   | |      | |   | (      | |   | || (      | (" << RESET << endl;
	cout << RED << "\t\t\t"
		<< "/\\____) || )   ( |   | |   ___) (___| )      | (___) || )      | )" << RESET << endl;
	cout << RED << "\t\t\t"
		<< "\\_______)|/     \\|   )_(   \\_______/|/       (_______)|/       |/" << RESET << endl;

	cout << "\n\n";

	cout << BOLD_ORANGE << "\t\t\t"
		<< "OOOOOOOOd       OOOO     OOOOd    OOOO    dOOOOOO    OOOO    dOOOO" << RESET << endl
		<< BOLD_ORANGE << "\t\t\t"
		<< "OOOOOOOOOOO    OOOOOO    OOOOOO   OOOO  OOOOOOOOOOO  OOOO    OOOOd" << RESET << endl
		<< BOLD_ORANGE << "\t\t\t"
		<< "OOOO   OOOO   dOOOOOOd   OOOOOOO  OOOO OOOOd   OOOOO OOOO    OOOOO" << RESET << endl
		<< BOLD_ORANGE << "\t\t\t"
		<< "OOOOOOOOOOO  dOOOOOOOOd  OOOOdOOOOOOOO OOOO          OOOOOOOOOOOOO" << RESET << endl
		<< BOLD_ORANGE << "\t\t\t"
		<< "OOOOOOOOO    OOOd  OOOO  OOOO dOOOOOOO OOOO          OOOOOOOOOOOOd" << RESET << endl
		<< BOLD_ORANGE << "\t\t\t"
		<< "OOOO OOOOO  OOOOOOOOOOOO OOOO   OOOOOO dOOOOOdOOOOOO OOOO    OOOOO" << RESET << endl
		<< BOLD_ORANGE << "\t\t\t"
		<< "OOOO  OOOOddOOOO    OOOOOOOOO    OOOOO   OOOOOOOOOO  OOOO    OOOOd" << RESET << endl;
}

void getConsoleMenu()
{

	getSatipoffMenu(); // Satipoff Texti

	cout << "\n\n\n";

	cout << YELLOW << "         #--------------------------		Amaliy Mashiqlar!		--------------------------#" << RESET << "\n\n\n";
	// 5 chi misoldan bo'shliman vaqtinchalik
	/*	cout << getNumberAndText("01", "Kiritish va chiqarish funksiyalari. Algoritm va uning turlari.") << endl;
		cout << getNumberAndText("02", "Chiziqli tuzilmalarning algoritmlari va ularning dasturi.") << endl;
		cout << getNumberAndText("03", "Tarmoqlanuvchi algoritmlar va ularning dasturi.") << endl;
		cout << getNumberAndText("04", "Takrorlanuvchi tuzilmali algoritmlar va ularning dasturi") << endl; */
	cout << getNumberAndText("05", "Funksiyalarni tashkil etish") << endl;
	cout << getNumberAndText("06", "Massivlarni tashkil etish") << endl;
	cout << getNumberAndText("07", "Ikki o‘lchamli massivlarni tashkil etish") << endl;
	cout << getNumberAndText("08", "Satrlar va satrlar ustida amallar. String standart funksiyalari") << endl;
	cout << getNumberAndText("09", "Fayllar bilan ishlash asoslari") << endl;
	cout << getNumberAndText("10", "Sinf va ob’ektlar. Ob’ektga mo‘ljallangan dasturlash") << endl;
	cout << getNumberAndText("11", "Konstruktorlar va destruktorlar") << endl;
	cout << getNumberAndText("12", "Inkapsulyatsiya") << endl;
	cout << getNumberAndText("13", "Merosxo’rlikdan foydalanib dasturlash.") << endl;
	cout << getNumberAndText("14", "Polimorfizmdan foydalanib dasturlash") << endl;
	cout << getNumberAndText("15", "Operatorlarni va funksiyalarni qayta yuklash") << endl;
	cout << endl;
}

void clear()
{
	cout << "\x1B[2J\x1B[H";
}

int main()
{
	BeshinchiMavzu::BirinchiTopshiriq topshiriq_1;
	BeshinchiMavzu::IkkinchiTopshiriq topshiriq_2;
	BeshinchiMavzu::UchunchiTopshiriq topshiriq_3;

	do
	{

		getConsoleMenu();

		getCommandLine();
		cin >> MAVZU_RAQAMI;

		switch (MAVZU_RAQAMI)
		{
		case 5:
			clear();
			cout << "\n\n\n";
			cout << getNumberAndText("01", "Birinchi Topshiriq Toplami")<<endl;
			cout << getNumberAndText("02", "Ikkinchi Topshiriq Toplami")<<endl;
			getCommandLine();
			cout << ORANGE << "Topshiriq raqamini kiriting: " << RESET;
			cin >> TOPSHIRIQ_RAQAMI;
			switch (TOPSHIRIQ_RAQAMI)
			{
			case 1:
				topshiriq_1.setBeshinchiMavzuBirinchiTopshirq();
				break;
			case 2:
				topshiriq_2.setBeshinchiMavzu_IkkinchiTopshirq();
				break;
			case 3:
				topshiriq_3.setBeshinchiMavzu_UchunchiTopshirq();
				break;
			default:
				getCommandLine();
				cout << RED << "Xato Topshiriq kirittingiz!" << RESET << endl;
			}
			break;

		default:
			getCommandLine();
			cout << RED << "Xato son kirittingiz!" << RESET << endl;
		}

		getCommandLine();
		cout << BLUE << "Yana topshiriq ishlanadimi? (h/y): " << RESET;
		cin >> Sorov;

	} while (Sorov == "h");

	return 0;
}