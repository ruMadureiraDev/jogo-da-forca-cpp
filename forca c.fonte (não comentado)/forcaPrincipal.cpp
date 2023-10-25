#include "Head.hpp"
std::vector<char> trac;
std::string nAdv;
int vidas = 3;
char adv;
int iMax = 0;
int nInt = 0;
int main() {
	bool rep = true;
	setlocale(LC_ALL, "Portuguese");
	while (rep == true)
	{
		system("cls");
		std::cout << "DIGITE O NOME PARA O OUTRO ADIVINHAR\n>>>";
		std::cin >> nAdv;
		for (int i = 0; i < nAdv.length(); i++) {
			iMax++;
			trac.push_back('-');
		}
		system("cls");
		while (vidas != 0)
		{
			system("cls");
			std::cout << "DIGITE UMA PALAVRA PARA ADIVINHAR " << vidas << " vidas restantes\n";
			for (int i = 0; i < nAdv.length(); i++) {
				std::cout << trac[i];
			}
			std::cout << "\n>>>>";
			std::cin >> adv;
			if (check() == true) {

			}
			else
			{
				vidas--;
			}
			if (nInt == iMax) {
				break;
			}
		}
		if (vidas == 0) {
			system("cls");
			std::cout << "VOCÊ PERDEU, TENTAR NOVAMENTE? (S/N)\n>>>";
			std::cin >> adv;
			if ((adv == 's') || (adv == 'S')) {
				trac.clear();
				vidas = 3;
				continue;
			}
			else
			{
				break;
			}
		}
		else 
		{
			system("cls");
			std::cout << "VOCÊ GANHOU, TENTAR NOVAMENTE? (S/N)\n>>>";
			std::cin >> adv;
			if ((adv == 's') || (adv == 'S')) {
				trac.clear();
				vidas = 3;
				continue;
			}
			else
			{
				break;
			}
		}
	}
}