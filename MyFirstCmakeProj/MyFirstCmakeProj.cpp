

// Copyright (c) 2023 Akbar Satipov (codewithakbar)

#include "MyFirstCmakeProj.h"

using namespace std;


#define RESET		"\033[0m"
#define RED			"\033[31m"
#define GREEN		"\033[32m"
#define YELLOW		"\033[33m"
#define WHITE		"\033[37m"
#define BLUE		"\033[34m"
#define cyan		"\e[0;36m"
#define green		"\e[0;34m"
#define OKEGREEN    "\033[38;2;0;128;0m"
#define LIGHT_GREEN "\033[92m"
#define BOLD_BLUE   "\033[1;34m"


string Sorov; // siklni to'xtatish uchun o'zgarivchan
string SAV; // siklni to'xtatish uchun o'zgarivchan


// Birinchi Topshiriq Misollari Jamlanmasi!
class BirinchiTopshiriq
{
public:
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

		cout << "Q sonini P darajasini topuvchi funksiya. " << endl;

		int son, daraja;
		cout << "Iltimos, sonni kiriting: ";
		cin >> son;
		cout << "Iltimos, darajani kiriting: ";
		cin >> daraja;

		double natija = darajaTop(son, daraja);

		cout << son << "ning " << daraja << " darajasi = " << natija << endl;
	}

	void Misol2()
	{

		int P, L;

		cout << "Iltimos, P sonini kiriting: ";
		cin >> P;
		cout << "Iltimos, L sonini kiriting: ";
		cin >> L;

		double natija = qoshuvchi(P, L);

		cout << "Natija: " << natija << endl;
	}

	void Misol3()
	{

		int katet1, katet2;

		cout << "Iltimos, birinchi katetni kiriting: ";
		cin >> katet1;
		cout << "Iltimos, ikkinchi katetni kiriting: ";
		cin >> katet2;

		double gipotenuza = gipotenuzaTop(katet1, katet2);

		cout << "Gipotenuza: " << gipotenuza << endl;
	}

	void Misol4()
	{

		int x1, y1, x2, y2;
		cout << "Iltimos, birinchi nuqta koordinatalarini kiriting (x1 y1): ";
		cin >> x1 >> y1;
		cout << "Iltimos, ikkinchi nuqta koordinatalarini kiriting (x2 y2): ";
		cin >> x2 >> y2;

		double masofa = masofaTop(x1, y1, x2, y2);

		cout << "Nuqtalar orasidagi masofa: " << masofa << endl;
	}

	void Misol5()
	{

		int son;
		cout << "Iltimos, uch xonali son kiriting: ";
		cin >> son;

		int ochiriladiganRaqam = ortaDelete(son);

		cout << "Natija: " << ochiriladiganRaqam << endl;
	}

	void Misol6()
	{

		cout << "Berilgan N soni ikkita tub sonni yig‘indisi bo‘lishini tekshiruvchi funksiya tuzing." << endl;

		int N;
		cout << "Iltimos, N son kiriting: ";
		cin >> N;

		bool natija = yigindisiTubSon(N);

		if (natija)
		{
			cout << N << " soni ikkita tub sonning yig'indisi" << endl;
		}
		else
		{
			cout << N << " soni ikkita tub sonning yig'indisi emas" << endl;
		}
	}

	void Misol7()
	{

		Nuqta A, B, C;

		cout << "Iltimos, A nuqtasini kiriting (x y): ";
		cin >> A.x >> A.y;
		cout << "Iltimos, B nuqtasini kiriting (x y): ";
		cin >> B.x >> B.y;
		cout << "Iltimos, C nuqtasini kiriting (x y): ";
		cin >> C.x >> C.y;

		bool natija = togriChiziqdaYotmaydi(A, B, C);

		if (natija)
		{
			cout << "Uchta nuqta bir to'g'ri chiziqda yotmaydi." << endl;
		}
		else
		{
			cout << "Uchta nuqta bir to'g'ri chiziqda yotadi yoki chiziq to'g'ri emas." << endl;
		}
	}

	void Misol8()
	{

		int son;
		cout << "Son kiriting: ";
		cin >> son;

		int natija = bolinuvchiSon(son);

		cout << "Natija: " << natija << endl;
	}

	void Misol9()
	{

		int son, k, n;

		cout << "Sonni kiriting: ";
		cin >> son;

		cout << "Olmashtirish uchun raqam kiriting (K): ";
		cin >> k;

		cout << "Toza raqam kiriting (N): ";
		cin >> n;

		int natija = replaceDigit(son, k, n);
		cout << "Natija: " << natija << endl;
	}

	void Misol10()
	{

		int son;

		cout << "Sonni kiriting: ";
		cin >> son;

		int tartiblanganSon = reverseSort(son);
		cout << "Raqamlari kamayish tartibida saralgan son: " << tartiblanganSon << endl;
	}

	void Misol_11()
	{

		double a, b, c;

		cout << "Uchburchakning a tomonini kiriting: ";
		cin >> a;

		cout << "Uchburchakning b tomonini kiriting: ";
		cin >> b;

		cout << "Uchburchakning c tomonini kiriting: ";
		cin >> c;

		double yuza = triangleArea(a, b, c);
		cout << "Uchburchakning yuzasi: " << yuza << endl;
	}

	void Misol_12()
	{

		double a, b, c, d, e;

		cout << "Beshburchakning a tomonini kiriting: ";
		cin >> a;

		cout << "Beshburchakning b tomonini kiriting: ";
		cin >> b;

		cout << "Beshburchakning c tomonini kiriting: ";
		cin >> c;

		cout << "Beshburchakning d tomonini kiriting: ";
		cin >> d;

		cout << "Beshburchakning e tomonini kiriting: ";
		cin >> e;

		double beshburchakYuza = pentagonArea(a, b, c, d, e);
		cout << "Beshburchakning yuzasi: " << beshburchakYuza << endl;
	}
};







void BirinchiTopshiriqniYuklash()
{

	BirinchiTopshiriq birinchi;

	int MISOL_RAQAMI;

	cout << "1) Q sonini P darajasini topuvchi funksiya tuzing." << endl;
	cout << "2) P sonini oxiridan L sonini qo‘shuvchi funksiya tuzing." << endl;
	cout << "3) Berilgan to‘g‘ri burchakli uchburchakning katetlari yordamida gipotenuzasini topuvchi funksiya tuzing" << endl;
	cout << "4) Berilgan ikki nuqtaning koordinatasi asosida ular orasidagi masofani topuvchi funksiya tuzing" << endl;
	cout << "5) Berilgan sondagi qo‘shni raqamlarining raqamlarining yig‘indisiga teng bo‘lgan raqamni o‘chirivchi funksiya tuzing.(Uch xonali son misolida: 143 Natija 13)" << endl;
	cout << "6) Berilgan N soni ikkita tub sonni yig‘indisi bo‘lishini tekshiruvchi funksiya tuzing." << endl;
	cout << "7) Hech bir uchtasi bir to’g’ri chiziqda yotmaydigan funksiya tuzing." << endl;
	cout << "8) Berilgan son 11 ga bo‘linsa 1 aks holda 0 chiqaruvchi funksiya tuzing." << endl;
	cout << "9) Berilgan sonni K o‘rindagi raqamini N o‘rindagi raqami bilan almashtiruvchi funksiya tuzing." << endl;
	cout << "10) Sonni raqamlarini o‘sish (kamayish) tartibida saralovchi funksiya tuzing." << endl;
	cout << "11) Uchburchakni uchta uchining koordinatalari berilgan. Uning yuzasini topuvchi funksiya tuzing." << endl;
	cout << "12) Tomonlari a, b, c, d va e haqiqiy sonlardan iborat bo‘lgan beshburchak berilgan. Beshburchakni va undagi uchta uchburchaklarni yuzasini topuvchi alohida funksiyalar tuzing." << endl;

	do
	{

		cout << "Endi misol raqamini kiriting: ";
		cin >> MISOL_RAQAMI;

		switch (MISOL_RAQAMI)
		{
		case 1:
			birinchi.Misol1();
			break;
		case 2:
			birinchi.Misol2();
			break;
		case 3:
			birinchi.Misol3();
			break;
		case 4:
			birinchi.Misol4();
			break;
		case 5:
			birinchi.Misol5();
			break;
		case 6:
			birinchi.Misol6();
			break;
		case 7:
			birinchi.Misol7();
			break;
		case 8:
			birinchi.Misol8();
			break;
		case 9:
			birinchi.Misol9();
			break;
		case 10:
			birinchi.Misol10();
			break;
		case 11:
			birinchi.Misol_11();
			break;
		case 12:
			birinchi.Misol_12();
			break;

		default:
			cout << "Misolni topilmadi!";
		}

		cout << "Yana misol ishlanadimi? (h/y): " << endl;
		cin >> SAV;

	} while (SAV == "h");
}




string getNumberAndText(int son, const string& text) {
	stringstream ss;
	ss << BLUE << "\t\t\t[" << WHITE << son << RESET << BLUE << "]" << "  " << OKEGREEN << text << RESET << "\n";

	return ss.str();
	
}


void getConsoleMenu() {


	cout << YELLOW << "\t\t#--------------------------		Amaliy Mashiqlar!		--------------------------#" << RESET << "\n\n\n";
	cout << getNumberAndText(1,  "Kiritish va chiqarish funksiyalari. Algoritm va uning turlari.") << endl;
	cout << getNumberAndText(2,  "Chiziqli tuzilmalarning algoritmlari va ularning dasturi.") << endl;
	cout << getNumberAndText(3,  "Tarmoqlanuvchi algoritmlar va ularning dasturi.") << endl;
	cout << getNumberAndText(4,  "Takrorlanuvchi tuzilmali algoritmlar va ularning dasturi") << endl;
	cout << getNumberAndText(5,  "Funksiyalarni tashkil etish") << endl;
	cout << getNumberAndText(6,  "Massivlarni tashkil etish") << endl;
	cout << getNumberAndText(7,  "Ikki o‘lchamli massivlarni tashkil etish") << endl;
	cout << getNumberAndText(8,  "Satrlar va satrlar ustida amallar. String standart funksiyalari") << endl;
	cout << getNumberAndText(9,  "Fayllar bilan ishlash asoslari") << endl;
	cout << getNumberAndText(10, "Sinf va ob’ektlar. Ob’ektga mo‘ljallangan dasturlash") << endl;
	cout << getNumberAndText(11, "Konstruktorlar va destruktorlar") << endl;
	cout << getNumberAndText(12, "Inkapsulyatsiya") << endl;
	cout << getNumberAndText(13, "Merosxo’rlikdan foydalanib dasturlash.") << endl;
	cout << getNumberAndText(14, "Polimorfizmdan foydalanib dasturlash") << endl;
	cout << getNumberAndText(15, "Operatorlarni va funksiyalarni qayta yuklash") << endl;
	cout << endl;


}


void getSatipoffMenu() {

	cout << "\n\n";
	cout << RED << "\t\t\t" << "(  ____ \\(  ___  )\\__   __/\\__   __/(  ____ )(  ___  )(  ____ \\(  ____ /" << RESET << endl;
	cout << RED << "\t\t\t" << "| (    \\/| (   ) |   ) (      ) (   | (    )|| (   ) || (    \\/| (    \\/" << RESET << endl;
	cout << RED << "\t\t\t" << "| (_____ | (___) |   | |      | |   | (____)|| |   | || (__)   | (__" << RESET << endl;
	cout << RED << "\t\t\t" << "(_____  )|  ___  |   | |      | |   |  _____)| |   | ||  __)   |  __)" << RESET << endl;
	cout << RED << "\t\t\t" << "      ) || (   ) |   | |      | |   | (      | |   | || (      | (" << RESET << endl;
	cout << RED << "\t\t\t" << "/\\____) || )   ( |   | |   ___) (___| )      | (___) || )      | )" << RESET << endl;
	cout << RED << "\t\t\t" << "\\_______)|/     \\|   )_(   \\_______/|/       (_______)|/       |/" << RESET << endl;

}


int main()
{


	int TOPSHIRIQ_RAQAMI;

	do
	{
		/*cout <<
			"   ____                           __                               ____                  __              "
			"  /\  _`\                        /\ \                       __    /\  _`\    __         /\ \             "
			"  \ \ \L\ \     __     _ __   ___\ \ \___      __      ____/\_\   \ \ \L\ \ /\_\  _ __  \_\ \     __     "
			"   \ \  _ <'  /'__`\  /\`'__\/'___\ \  _ `\  /'__`\   /',__\/\ \   \ \  _ <'\/\ \/\`'__\/'_` \  /'__`\   "
			"    \ \ \L\ \/\ \L\.\_\ \ \//\ \__/\ \ \ \ \/\ \L\.\_/\__, `\ \ \   \ \ \L\ \\ \ \ \ \//\ \L\ \/\ \L\.\_ "
			"     \ \____/\ \__/.\_\\ \_\\ \____\\ \_\ \_\ \__/.\_\/\____/\ \_\   \ \____/ \ \_\ \_\\ \___,_\ \__/.\_\	"
			"      \/___/  \/__/\/_/ \/_/ \/____/ \/_/\/_/\/__/\/_/\/___/  \/_/    \/___/   \/_/\/_/ \/__,_ /\/__/\/_/	" << endl;*/


	/*	cout << RED << " ______   _______  _______  _______           _______  _______ _________   ______  _________ _______  ______   _______ " << RESET << endl;
		cout << RED << "(  ___ \ (  ___  )(  ____ )(  ____ \|\     /|(  ___  )(  ____ \\__   __/  (  ___ \ \__   __/(  ____ )(  __  \ (  ___  )" << RESET << endl;
		cout << RED << "| (   ) )| (   ) || (    )|| (    \/| )   ( || (   ) || (    \/   ) (     | (   ) )   ) (   | (    )|| (  \  )| (   ) |" << RESET << endl;
		cout << RED << "| (__/ / | (___) || (____)|| |      | (___) || (___) || (_____    | |     | (__/ /    | |   | (____)|| |   ) || (___) |" << RESET << endl;
		cout << RED << "|  __ (  |  ___  ||     __)| |      |  ___  ||  ___  |(_____  )   | |     |  __ (     | |   |     __)| |   | ||  ___  |" << RESET << endl;
		cout << RED << "| (  \ \ | (   ) || (\ (   | |      | (   ) || (   ) |      ) |   | |     | (  \ \    | |   | (\ (   | |   ) || (   ) |" << RESET << endl;
		cout << RED << "| )___) )| )   ( || ) \ \__| (____/\| )   ( || )   ( |/\____) |___) (___  | )___) )___) (___| ) \ \__| (__/  )| )   ( |" << RESET << endl;
		cout << RED << "|/ \___/ |/     \||/   \__/(_______/|/     \||/     \|\_______)\_______/  |/ \___/ \_______/|/   \__/(______/ |/     \|" << RESET << endl;
	*/

		

		getSatipoffMenu(); // Satipoff Texti

		cout << "\n\n\n"; 
		getConsoleMenu();
		cout << "Topshiriq raqamini kiriting!: ";


		cin >> TOPSHIRIQ_RAQAMI;

		switch (TOPSHIRIQ_RAQAMI)
		{
		case 1:
			BirinchiTopshiriqniYuklash();
			break;

		default:
			cout << "Xato son kirittingiz!" << endl;
		}

		cout << "yana topshiriq ishlanadimi? (h/y): ";
		cin >> Sorov;

	} while (Sorov == "h");

	return 0;
}