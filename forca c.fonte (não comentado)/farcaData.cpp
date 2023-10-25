#include "Head.hpp"

bool check() {
	int check = 0;
	for (int i = 0; i < nAdv.length(); i++) {
		if (adv == nAdv[i]) {
			if (trac[i] == adv) {
				return true;
			}
			nInt++;
			check++;
			trac[i] = adv;
		}
	}
	if (check > 0) {
		return true;
	}
	else
	{
		return false;
	}
}